#pragma once

class vector
{
public:
	vector();
	vector(u32 count);

	string to_string();

	f64& operator[](u32 index);

	vector operator+(f64 value);
	vector operator+(vector vector);

	vector operator-(f64 value);
	vector operator-(vector vector);

	vector operator*(f64 value);
	vector operator*(vector vector);

	vector operator/(f64 value);
	vector operator/(vector vector);

	vector action(f64(*function)(f64));
	f64 action(f64(*function)(f64*, u32));

	f64* values;
	u32 count;
};

vector::vector()
{
	this->values = nullptr;
	this->count = 0;
}

vector::vector(u32 count)
{
	this->values = new f64[count]{};
	this->count = count;
}

inline string vector::to_string()
{
	string result;

	result.add("[");
	for (u32 i = 0; i < count; i++)
	{
		result.add(convert::to_string(values[i]));
		result.add(";");
	}
	result.add("]");

	return result;
}

inline f64& vector::operator[](u32 index)
{
	return values[index];
}

inline vector vector::operator+(f64 value)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] + value;
	}

	return result;
}

inline vector vector::operator+(vector vector)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] + vector.values[i];
	}

	return result;
}

inline vector vector::operator-(f64 value)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] - value;
	}

	return result;
}

inline vector vector::operator-(vector vector)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] - vector.values[i];
	}

	return result;
}

inline vector vector::operator*(f64 value)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] * value;
	}

	return result;
}

inline vector vector::operator*(vector vector)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] * vector.values[i];
	}

	return result;
}

inline vector vector::operator/(f64 value)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] / value;
	}

	return result;
}

inline vector vector::operator/(vector vector)
{
	::vector result = ::vector(count);

	foreach(i, result)
	{
		result[i] = values[i] / vector.values[i];
	}

	return result;
}

inline vector vector::action(f64(*function)(f64))
{
	vector result = vector(count);

	foreach(i, result)
	{
		result.values[i] = function(values[i]);
	}

	return result;
}

inline f64 vector::action(f64(*function)(f64*, u32))
{
	return function(values, count);
}
