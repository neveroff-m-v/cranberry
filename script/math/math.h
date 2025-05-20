#pragma once

/// <summary>
/// static method and constant for trigonometric, logarithmic, and other common mathematical functions
/// </summary>
class math
{
public:
	/// <summary>
	/// constant e
	/// </summary>
	static f64 e;

	/// <summary>
	/// constant π
	/// </summary>
	static f64 pi;

	/// <summary>
	/// infinity ∞
	/// </summary>
	static f64 inf;

	/// <summary>
	/// not a number
	/// </summary>
	static f64 nan;

	/// <summary>
	/// returns the absolute value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 abs(f64 x);

	/// <summary>
	/// returns the sign value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sign(f64 x);

	static logic inside(f64 x, range range);

	static logic rise(f64 a, f64 b);
	static logic fall(f64 a, f64 b);

	static f64 round(f64 x, u32 n = 0);
	static f64 round_up(f64 x, u32 n = 0);
	static f64 round_down(f64 x, u32 n = 0);

	/// <summary>
	/// returns maximum value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 max(f64* x, u32 count);

	/// <summary>
	/// returns minimum value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 min(f64* x, u32 count);

	/// <summary>
	/// returns summ value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 summ(f64* x, u32 count);

	/// <summary>
	/// returns multiplication value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 mult(f64* x, u32 count);

	/// <summary>
	/// returns mean value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 mean(f64* x, u32 count);

	/// <summary>
	/// returns the square value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sq(f64 x);

	/// <summary>
	/// returns the square root value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sqrt(f64 x);

	/// <summary>
	/// returns the cube value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 cb(f64 x);

	/// <summary>
	/// returns the cube root value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 cbrt(f64 x);

	/// <summary>
	/// returns the exponent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 exp(f64 x);

	/// <summary>
	/// returns the natural logarithm value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ln(f64 x);

	/// <summary>
	/// returns the decimal logarithm value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 lg(f64 x);

	/// <summary>
	/// returns the power value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 pw(f64 x, f64 n);

	/// <summary>
	/// returns the root value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 rt(f64 x, f64 n);

	/// <summary>
	/// returns the logarithm value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="n"></param>
	/// <returns></returns>
	static f64 log(f64 x, f64 n);

	/// <summary>
	/// returns sigmoid value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sigmoid(f64 x);

	/// <summary>
	/// returns the decibel value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 db(f64 x);

	/// <summary>
	/// returns the radians value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 rad(f64 x);

	/// <summary>
	/// returns the degrees value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 deg(f64 x);

	/// <summary>
	/// returns the sine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sin(f64 x);

	/// <summary>
	/// returns the arcsine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 asin(f64 x);

	/// <summary>
	/// returns the cosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 cos(f64 x);

	/// <summary>
	/// returns the arccosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 acos(f64 x);

	/// <summary>
	/// returns the tangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 tg(f64 x);

	/// <summary>
	/// returns the arctangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 atg(f64 x);

	/// <summary>
	/// returns the cotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ctg(f64 x);

	/// <summary>
	/// returns the arccotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 actg(f64 x);

	/// <summary>
	/// returns the hyperbolic sine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sh(f64 x);

	/// <summary>
	/// returns the hyperbolic arcsine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ash(f64 x);

	/// <summary>
	/// returns the hyperbolic cosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ch(f64 x);

	/// <summary>
	/// returns the hyperbolic arccosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ach(f64 x);

	/// <summary>
	/// returns the hyperbolic tangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 tgh(f64 x);

	/// <summary>
	/// returns the hyperbolic arctangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 atgh(f64 x);

	/// <summary>
	/// returns the hyperbolic cotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ctgh(f64 x);

	/// <summary>
	/// returns the hyperbolic arccotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 actgh(f64 x);

	static f64 re(complex z);
	static f64 im(complex z);
	static f64 abs(complex z);
	static f64 arg(complex z);
	static complex exp(complex z);
};

f64 math::e = 2.7182818284590452354;
f64 math::pi = 3.14159265358979323846;
f64 math::nan = NAN;
f64 math::inf = INFINITY;

inline f64 math::abs(f64 x)
{
	if (x > 0.) return x;
				return -x;
}

inline f64 math::sign(f64 x)
{
	if (x > 0.) return 1.;
	if (x < 0.) return -1.;
				return 0.;
}

inline logic math::inside(f64 x, range range)
{
	return (x >= range.min) && (x < range.max);
}

inline logic math::rise(f64 a, f64 b)
{
	return a > b;
}

inline logic math::fall(f64 a, f64 b)
{
	return a < b;
}

inline f64 math::round(f64 x, u32 n)
{
	f64 scale = pw(10., n);
	return cpp_std::round(x * scale) / scale;
}

inline f64 math::round_up(f64 x, u32 n)
{
	f64 scale = pw(10., n);
	return cpp_std::ceil(x * scale) / scale;
}

inline f64 math::round_down(f64 x, u32 n)
{
	f64 scale = pw(10., n);
	return cpp_std::floor(x * scale) / scale;
}

inline f64 math::max(f64* x, u32 count)
{
	f64 result = x[0];

	for (u32 i = 1; i < count; i++)
	{
		if (x[i] > result)
		{
			result = x[i];
		}
	}

	return result;
}

inline f64 math::min(f64* x, u32 count)
{
	f64 result = x[0];

	for (u32 i = 1; i < count; i++)
	{
		if (x[i] < result)
		{
			result = x[i];
		}
	}

	return result;
}

inline f64 math::summ(f64* x, u32 count)
{
	f64 result = 0.;

	for (u32 i = 0; i < count; i++)
	{
		result += x[i];
	}

	return result;
}

inline f64 math::mult(f64* x, u32 count)
{
	f64 result = 1.;

	for (u32 i = 0; i < count; i++)
	{
		result *= x[i];
	}

	return result;
}

inline f64 math::mean(f64* x, u32 count)
{
	return summ(x, count) / (f64) count;
}

inline f64 math::sq(f64 x)
{
	return x * x;
}

inline f64 math::sqrt(f64 x)
{
	return cpp_std::sqrt(x);
}

inline f64 math::cb(f64 x)
{
	return x * x * x;
}

inline f64 math::cbrt(f64 x)
{
	return cpp_std::cbrt(x);
}

inline f64 math::exp(f64 x)
{
	return cpp_std::exp(x);
}

inline f64 math::ln(f64 x)
{
	return cpp_std::log(x);
}

inline f64 math::lg(f64 x)
{
	return cpp_std::log10(x);
}

inline f64 math::pw(f64 x, f64 n)
{
	return cpp_std::pow(x, n);
}

inline f64 math::rt(f64 x, f64 n)
{
	return cpp_std::pow(x, 1. / n);
}

inline f64 math::log(f64 x, f64 n)
{
	return ln(x) / ln(n);
}

inline f64 math::sigmoid(f64 x)
{
	return 1. / (1 + exp(-x));
}

inline f64 math::db(f64 x)
{
	return 20. * cpp_std::log10(x);
}

inline f64 math::rad(f64 x)
{
	return x * math::pi / 180.;
}

inline f64 math::deg(f64 x)
{
	return x / math::pi * 180.;
}

inline f64 math::sin(f64 x)
{
	return cpp_std::sin(x);
}

inline f64 math::asin(f64 x)
{
	return cpp_std::asin(x);
}

inline f64 math::cos(f64 x)
{
	return cpp_std::cos(x);
}

inline f64 math::acos(f64 x)
{
	return cpp_std::acos(x);
}

inline f64 math::tg(f64 x)
{
	return cpp_std::tan(x);
}

inline f64 math::atg(f64 x)
{
	return cpp_std::atan(x);
}

inline f64 math::ctg(f64 x)
{
	return 1 / tg(x);
}

inline f64 math::actg(f64 x)
{
	return 0.;
}

inline f64 math::sh(f64 x)
{
	return cpp_std::sinh(x);
}

inline f64 math::ash(f64 x)
{
	return cpp_std::asinh(x);
}

inline f64 math::ch(f64 x)
{
	return cpp_std::cosh(x);
}

inline f64 math::ach(f64 x)
{
	return cpp_std::acosh(x);
}

inline f64 math::tgh(f64 x)
{
	return cpp_std::tanh(x);
}

inline f64 math::atgh(f64 x)
{
	return cpp_std::atanh(x);
}

inline f64 math::ctgh(f64 x)
{
	return 0.;
}

inline f64 math::actgh(f64 x)
{
	return 0.;
}

inline f64 math::re(complex z)
{
	return z.r * cos(z.phi);
}

inline f64 math::im(complex z)
{
	return z.r * sin(z.phi);
}

inline f64 math::abs(complex z)
{
	return z.r;
}

inline f64 math::arg(complex z)
{
	return z.phi;
}

inline complex math::exp(complex z)
{
	return complex();
}