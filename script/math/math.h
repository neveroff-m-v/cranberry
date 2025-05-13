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
};

f64 math::e = 2.7182818284590452354;
f64 math::pi = 3.14159265358979323846;
f64 math::nan = NAN;
f64 math::inf = INFINITY;

f64 math::abs(f64 x)
{
	if (x > 0.) return x;
				return -x;
}

f64 math::sign(f64 x)
{
	if (x > 0.) return 1.;
	if (x < 0.) return -1.;
				return 0.;
}

f64 math::sq(f64 x)
{
	return x * x;
}

f64 math::sqrt(f64 x)
{
	return std::sqrt(x);
}

f64 math::cb(f64 x)
{
	return x * x * x;
}

f64 math::cbrt(f64 x)
{
	return std::cbrt(x);
}

f64 math::exp(f64 x)
{
	return std::exp(x);
}

f64 math::ln(f64 x)
{
	return std::log(x);
}

f64 math::lg(f64 x)
{
	return std::log10(x);
}

f64 math::pw(f64 x, f64 n)
{
	return std::pow(x, n);
}

f64 math::rt(f64 x, f64 n)
{
	return std::pow(x, 1. / n);
}

f64 math::log(f64 x, f64 n)
{
	return ln(x) / ln(n);
}

f64 math::db(f64 x)
{
	return 20. * std::log10(x);
}

f64 math::rad(f64 x)
{
	return x * math::pi / 180.;
}

f64 math::deg(f64 x)
{
	return x / math::pi * 180.;
}

f64 math::sin(f64 x)
{
	return std::sin(x);
}

f64 math::asin(f64 x)
{
	return std::asin(x);
}

f64 math::cos(f64 x)
{
	return std::cos(x);
}

f64 math::acos(f64 x)
{
	return std::acos(x);
}

f64 math::tg(f64 x)
{
	return std::tan(x);
}

f64 math::atg(f64 x)
{
	return std::atan(x);
}

f64 math::ctg(f64 x)
{
	return 1 / tg(x);
}

f64 math::actg(f64 x)
{
	return 0.;
}

f64 math::sh(f64 x)
{
	return std::sinh(x);
}

f64 math::ash(f64 x)
{
	return std::asinh(x);
}

f64 math::ch(f64 x)
{
	return std::cosh(x);
}

f64 math::ach(f64 x)
{
	return std::acosh(x);
}

f64 math::tgh(f64 x)
{
	return std::tanh(x);
}

f64 math::atgh(f64 x)
{
	return std::atanh(x);
}

f64 math::ctgh(f64 x)
{
	return 0.;
}

f64 math::actgh(f64 x)
{
	return 0.;
}