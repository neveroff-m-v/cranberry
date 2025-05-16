#pragma once

/// <summary>
/// complex number
/// </summary>
class complex
{
public:
	complex();
	complex(f64 r, f64 phi);

	static complex decart(f64 x, f64 y);
	static complex polar(f64 r, f64 phi);

	//static complex operator + (complex z1, complex z2);
	//static complex operator - (complex z1, complex z2);
	complex operator * (complex z);
	complex operator / (complex z);

	/// <summary>
	/// radius, ρ
	/// </summary>
	f64 r;

	/// <summary>
	/// argument, φ
	/// </summary>
	f64 phi;
};

inline complex::complex()
{
	this->r = 0.;
	this->phi = 0.;
}

inline complex::complex(f64 r, f64 phi)
{
	this->r = r;
	this->phi = phi;
}

inline complex complex::decart(f64 x, f64 y)
{
	complex result;

	result.r = cpp_std::sqrt(x * x + y * y);

	if (x > 0)
	{
		result.phi = cpp_std::atan(y / x);
		return result;
	}

	if (x < 0)
	{
		result.phi = cpp_std::atan(y / x) + 3.14159265358979323846;
		return result;
	}

	if (y > 0)
	{
		result.phi = 3.14159265358979323846 / 2.;
		return result;
	}

	if (y < 0)
	{
		result.phi = - 3.14159265358979323846 / 2.;
		return result;
	}

	result.phi = 0.;
	return result;
}

inline complex complex::polar(f64 r, f64 phi)
{
	complex z;
	return z;
}

complex complex::operator * (complex z)
{
	complex result;

	result.r = this->r * z.r;
	result.phi = this->phi + z.phi;

	return result;
}

complex complex::operator / (complex z)
{
	complex result;

	result.r = this->r - z.r;
	result.phi = this->phi / z.phi;

	return result;
}