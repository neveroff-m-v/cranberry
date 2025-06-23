#pragma once

/// <summary>
/// text as a sequence of 8-bit charahter
/// </summary>
class string
{
public:
	string();
	string(u32 count);
	string(c8* symbols, u32 count);
	string(const c8* symbols);

	c8& operator[](u32 index);

	string operator+(string string);

	c8* char_array();

	//static string add(string string_1, string string_2);
	void add(string string);

	c8* symbols;
	u32 count;
};

string::string()
{
	this->symbols = nullptr;
	this->count = 0;
}

string::string(u32 count)
{
	this->symbols = new c8[count]{};
	this->count = count;
}

string::string(c8* symbols, u32 count)
{
	this->symbols = symbols;
	this->count = count;
}

string::string(const c8* symbols)
{
	for (count = 0; symbols[count] != '\0'; count++) {}
	this->symbols = new c8[count]{};

	for (u32 i = 0; i < count; i++)
	{
		this->symbols[i] = symbols[i];
	}
}

inline c8& string::operator[](u32 index)
{
	return symbols[index];
}

inline string string::operator+(string string)
{
	::string result = *this;
	result.add(string);
	return result;
}

inline c8* string::char_array()
{
	c8* buffer = new c8[this->count + 1];
	array::concat(buffer, this->symbols, this->count, new c8('\0'), 1);

	return buffer;
}

inline void string::add(string string)
{
	c8* buffer = new c8[this->count + string.count];
	array::concat(buffer, this->symbols, this->count, string.symbols, string.count);
	delete[] this->symbols;

	this->symbols = buffer;
	this->count += string.count;
}
