#pragma once

class console
{
public:
	template<typename type>
	static void write(type value);

	template<typename type>
	static void write_line(type value);

private:
	static stream input;
	static stream output;
};

stream console::input = stream(0);
stream console::output = stream(1);

template<typename type>
void console::write(type value)
{
	output.write(value);
}

template<typename type>
inline void console::write_line(type value)
{
	output.write(value);
	output.write("\n");
}
