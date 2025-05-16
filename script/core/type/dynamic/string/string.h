#pragma once

/// <summary>
/// text as a sequence of 8-bit charahter
/// </summary>
class string
{
public:
	string();
	string(u32 count);
	string(const c8* symbols);

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

string::string(const c8* symbols)
{
	for (count = 0; symbols[count] != '\0'; count++) {}
	this->symbols = new c8[count]{};

	for (u32 i = 0; i < count; i++)
	{
		this->symbols[i] = symbols[i];
	}
}