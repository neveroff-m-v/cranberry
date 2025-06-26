#pragma once

/// <summary>
/// argb color
/// </summary>
class color
{
public:
	color();
	color(u32 hex);
	color(u8 r, u8 g, u8 b);
	color(u8 a, u8 r, u8 g, u8 b);

	string to_string();

	static color red;

	/// <summary>
	/// alpha component value
	/// </summary>
	u8 a;

	/// <summary>
	/// red component value
	/// </summary>
	u8 r;

	/// <summary>
	/// green component value
	/// </summary>
	u8 g;

	/// <summary>
	/// blue component value
	/// </summary>
	u8 b;
};

inline color::color()
{
	this->a = 0x00;
	this->r	= 0x00;
	this->g = 0x00;
	this->b	= 0x00;
}

inline color::color(u32 hex)
{
	this->a	= hex >> 24;
	this->r	= hex >> 16;
	this->g	= hex >> 8;
	this->b	= hex;
}

inline color::color(u8 r, u8 g, u8 b)
{
	this->a = 0xff;
	this->r	= r;
	this->g	= g;
	this->b	= b;
}

inline color::color(u8 r, u8 g, u8 b, u8 a)
{
	this->a = a;
	this->r	= r;
	this->g	= g;
	this->b	= b;
}

inline string color::to_string()
{
	c8* buffer = new c8[20];
	cpp_std::sprintf(buffer, "#%2.2x%2.2x%2.2x%2.2x", a ,r ,g ,b);
	return string(buffer);
}

color color::red = color(0xffc80000);
