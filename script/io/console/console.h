#pragma once

class console
{
public:
	static void write(string value);
};

void console::write(string value)
{
	foreach(i, value)
	{
		std::printf("%c", value.symbols[i]);
	}
}