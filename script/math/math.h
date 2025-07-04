﻿#pragma once

/// <summary>
/// static method and constant for trigonometric, logarithmic, and other common mathematical functions
/// </summary>
class math
{
public:
	/// <summary>
	/// constant e
	/// </summary>
	static const f64 e;

	/// <summary>
	/// constant π
	/// </summary>
	static const f64 pi;

	/// <summary>
	/// infinity ∞
	/// </summary>
	static const f64 inf;

	/// <summary>
	/// not a number
	/// </summary>
	static const f64 nan;

	static vector range(f64 min, f64 max, f64 delta);

	static vector range(f64 min, f64 max, u32 count);

	static vector range(u32 count);

	/// <summary>
	/// returns the absolute value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 abs(f64 x);
	static vector abs(vector x);

	/// <summary>
	/// returns the sign value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sign(f64 x);
	static vector sign(vector x);

	static logic rise(f64 a, f64 b);
	static logic fall(f64 a, f64 b);

	static f64 round(f64 x);
	static f64 round(f64 x, u32 n);

	static f64 round_up(f64 x);
	static f64 round_up(f64 x, u32 n);

	static f64 round_down(f64 x);
	static f64 round_down(f64 x, u32 n);

	/// <summary>
	/// returns maximum value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 max(f64* x, u32 count);
	static f64 max(vector x);

	/// <summary>
	/// returns minimum value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 min(f64* x, u32 count);
	static f64 min(vector x);

	/// <summary>
	/// returns summ value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 summ(f64* x, u32 count);
	static f64 summ(vector x);

	/// <summary>
	/// returns multiplication value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 mult(f64* x, u32 count);
	static f64 mult(vector x);

	/// <summary>
	/// returns mean value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="count"></param>
	/// <returns></returns>
	static f64 mean(f64* x, u32 count);
	static f64 mean(vector x);

	/// <summary>
	/// returns the square value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sq(f64 x);
	static vector sq(vector x);

	/// <summary>
	/// returns the square root value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sqrt(f64 x);
	static vector sqrt(vector x);

	/// <summary>
	/// returns the cube value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 cb(f64 x);
	static vector cb(vector x);

	/// <summary>
	/// returns the cube root value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 cbrt(f64 x);
	static vector cbrt(vector x);

	/// <summary>
	/// returns the exponent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 exp(f64 x);
	static vector exp(vector x);

	/// <summary>
	/// returns the natural logarithm value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ln(f64 x);
	static vector ln(vector x);

	/// <summary>
	/// returns the decimal logarithm value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 lg(f64 x);
	static vector lg(vector x);

	/// <summary>
	/// returns the power value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 pw(f64 x, f64 n);
	static vector pw(vector x, f64 n);

	/// <summary>
	/// returns the root value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 rt(f64 x, f64 n);
	static vector rt(vector x, f64 n);

	/// <summary>
	/// returns the logarithm value
	/// </summary>
	/// <param name="x"></param>
	/// <param name="n"></param>
	/// <returns></returns>
	static f64 log(f64 x, f64 n);
	static vector log(vector x, f64 n);

	/// <summary>
	/// returns sigmoid value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sigmoid(f64 x);
	static vector sigmoid(vector x);

	/// <summary>
	/// returns the decibel value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 db(f64 x);
	static vector db(vector x);

	/// <summary>
	/// returns the radians value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 rad(f64 x);
	static vector rad(vector x);

	/// <summary>
	/// returns the degrees value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 deg(f64 x);
	static vector deg(vector x);

	/// <summary>
	/// returns the sine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sin(f64 x);
	static vector sin(vector x);

	/// <summary>
	/// returns the arcsine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 asin(f64 x);
	static vector asin(vector x);

	/// <summary>
	/// returns the cosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 cos(f64 x);
	static vector cos(vector x);

	/// <summary>
	/// returns the arccosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 acos(f64 x);
	static vector acos(vector x);

	/// <summary>
	/// returns the tangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 tg(f64 x);
	static vector tg(vector x);

	/// <summary>
	/// returns the arctangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 atg(f64 x);
	static vector atg(vector x);

	/// <summary>
	/// returns the cotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ctg(f64 x);
	static vector ctg(vector x);

	/// <summary>
	/// returns the arccotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 actg(f64 x);
	static vector actg(vector x);

	/// <summary>
	/// returns the hyperbolic sine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 sh(f64 x);
	static vector sh(vector x);

	/// <summary>
	/// returns the hyperbolic arcsine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ash(f64 x);
	static vector ash(vector x);

	/// <summary>
	/// returns the hyperbolic cosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ch(f64 x);
	static vector ch(vector x);

	/// <summary>
	/// returns the hyperbolic arccosine value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ach(f64 x);
	static vector ach(vector x);

	/// <summary>
	/// returns the hyperbolic tangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 tgh(f64 x);
	static vector tgh(vector x);

	/// <summary>
	/// returns the hyperbolic arctangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 atgh(f64 x);
	static vector atgh(vector x);

	/// <summary>
	/// returns the hyperbolic cotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 ctgh(f64 x);
	static vector ctgh(vector x);

	/// <summary>
	/// returns the hyperbolic arccotangent value
	/// </summary>
	/// <param name="x"></param>
	/// <returns></returns>
	static f64 actgh(f64 x);
	static vector actgh(vector x);

	static f64 sinc(f64 x);
	static vector sinc(vector x);

	static f64 re(complex z);
	static f64 im(complex z);
	static f64 abs(complex z);
	static f64 arg(complex z);
	static complex exp(complex z);
};

const f64 math::e = 2.7182818284590452354;
const f64 math::pi = 3.14159265358979323846;
const f64 math::nan = NAN;
const f64 math::inf = INFINITY;

inline vector math::range(f64 min, f64 max, f64 delta)
{
	vector result = vector((u32)((max - min) / delta) + 1);

	foreach(i, result)
	{
		result[i] = min;
		min += delta;
	}

	return result;
}

inline vector math::range(f64 min, f64 max, u32 count)
{
	vector result = vector(count);
	f64 delta = (max - min) / (f64) count;

	foreach(i, result)
	{
		result[i] = min;
		min += delta;
	}

	return result;
}

inline vector math::range(u32 count)
{
	vector result = vector(count);

	foreach(i, result)
	{
		result[i] = (f64) i;
	}

	return result;
}

inline f64 math::abs(f64 x)
{
	if (x > 0.) return x;
				return -x;
}

inline vector math::abs(vector x)
{
	return x.action(abs);
}

inline f64 math::sign(f64 x)
{
	if (x > 0.) return 1.;
	if (x < 0.) return -1.;
				return 0.;
}

inline vector math::sign(vector x)
{
	return x.action(sign);
}

inline logic math::rise(f64 a, f64 b)
{
	return a > b;
}

inline logic math::fall(f64 a, f64 b)
{
	return a < b;
}

inline f64 math::round(f64 x)
{
	return cpp_std::round(x);
}

inline f64 math::round(f64 x, u32 n)
{
	f64 scale = pw(10., n);
	return cpp_std::round(x * scale) / scale;
}

inline f64 math::round_up(f64 x)
{
	return cpp_std::ceil(x);
}

inline f64 math::round_up(f64 x, u32 n)
{
	f64 scale = pw(10., n);
	return cpp_std::ceil(x * scale) / scale;
}

inline f64 math::round_down(f64 x)
{
	return cpp_std::floor(x);
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

inline f64 math::max(vector x)
{
	return x.action(max);
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

inline f64 math::min(vector x)
{
	return x.action(min);
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

inline f64 math::summ(vector x)
{
	return x.action(summ);
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

inline f64 math::mult(vector x)
{
	return x.action(mult);
}

inline f64 math::mean(f64* x, u32 count)
{
	return summ(x, count) / (f64) count;
}

inline f64 math::mean(vector x)
{
	return x.action(mean);
}

inline f64 math::sq(f64 x)
{
	return x * x;
}

inline vector math::sq(vector x)
{
	return x.action(sq);
}

inline f64 math::sqrt(f64 x)
{
	return cpp_std::sqrt(x);
}

inline vector math::sqrt(vector x)
{
	return x.action(sqrt);
}

inline f64 math::cb(f64 x)
{
	return x * x * x;
}

inline vector math::cb(vector x)
{
	return x.action(cb);
}

inline f64 math::cbrt(f64 x)
{
	return cpp_std::cbrt(x);
}

inline vector math::cbrt(vector x)
{
	return x.action(cbrt);
}

inline f64 math::exp(f64 x)
{
	return cpp_std::exp(x);
}

inline vector math::exp(vector x)
{
	return x.action(exp);
}

inline f64 math::ln(f64 x)
{
	return cpp_std::log(x);
}

inline vector math::ln(vector x)
{
	return x.action(ln);
}

inline f64 math::lg(f64 x)
{
	return cpp_std::log10(x);
}

inline vector math::lg(vector x)
{
	return x.action(lg);
}

inline f64 math::pw(f64 x, f64 n)
{
	return cpp_std::pow(x, n);
}

inline vector math::pw(vector x, f64 n)
{
	return x.action(pw, n);
}

inline f64 math::rt(f64 x, f64 n)
{
	return cpp_std::pow(x, 1. / n);
}

inline vector math::rt(vector x, f64 n)
{
	return x.action(rt, n);
}

inline f64 math::log(f64 x, f64 n)
{
	return ln(x) / ln(n);
}

inline vector math::log(vector x, f64 n)
{
	return x.action(log, n);
}

inline f64 math::sigmoid(f64 x)
{
	return 1. / (1 + exp(-x));
}

inline vector math::sigmoid(vector x)
{
	return x.action(sigmoid);
}

inline f64 math::db(f64 x)
{
	return 20. * cpp_std::log10(x);
}

inline vector math::db(vector x)
{
	return x.action(db);
}

inline f64 math::rad(f64 x)
{
	return x * math::pi / 180.;
}

inline vector math::rad(vector x)
{
	return x.action(rad);
}

inline f64 math::deg(f64 x)
{
	return x / math::pi * 180.;
}

inline vector math::deg(vector x)
{
	return x.action(deg);
}

inline f64 math::sin(f64 x)
{
	return cpp_std::sin(x);
}

inline vector math::sin(vector x)
{
	return x.action(sin);
}

inline f64 math::asin(f64 x)
{
	return cpp_std::asin(x);
}

inline vector math::asin(vector x)
{
	return x.action(asin);
}

inline f64 math::cos(f64 x)
{
	return cpp_std::cos(x);
}

inline vector math::cos(vector x)
{
	return x.action(cos);
}

inline f64 math::acos(f64 x)
{
	return cpp_std::acos(x);
}

inline vector math::acos(vector x)
{
	return x.action(acos);
}

inline f64 math::tg(f64 x)
{
	return cpp_std::tan(x);
}

inline vector math::tg(vector x)
{
	return x.action(tg);
}

inline f64 math::atg(f64 x)
{
	return cpp_std::atan(x);
}

inline vector math::atg(vector x)
{
	return x.action(atg);
}

inline f64 math::ctg(f64 x)
{
	return 1 / tg(x);
}

inline vector math::ctg(vector x)
{
	return x.action(ctg);
}

inline f64 math::actg(f64 x)
{
	return 0.;
}

inline vector math::actg(vector x)
{
	return x.action(actg);
}

inline f64 math::sh(f64 x)
{
	return cpp_std::sinh(x);
}

inline vector math::sh(vector x)
{
	return x.action(sh);
}

inline f64 math::ash(f64 x)
{
	return cpp_std::asinh(x);
}

inline vector math::ash(vector x)
{
	return x.action(ash);
}

inline f64 math::ch(f64 x)
{
	return cpp_std::cosh(x);
}

inline vector math::ch(vector x)
{
	return x.action(ch);
}

inline f64 math::ach(f64 x)
{
	return cpp_std::acosh(x);
}

inline vector math::ach(vector x)
{
	return x.action(ach);
}

inline f64 math::tgh(f64 x)
{
	return cpp_std::tanh(x);
}

inline vector math::tgh(vector x)
{
	return x.action(tgh);
}

inline f64 math::atgh(f64 x)
{
	return cpp_std::atanh(x);
}

inline vector math::atgh(vector x)
{
	return x.action(atgh);
}

inline f64 math::ctgh(f64 x)
{
	return 0.;
}

inline vector math::ctgh(vector x)
{
	return x.action(ctgh);
}

inline f64 math::actgh(f64 x)
{
	return 0.;
}

inline vector math::actgh(vector x)
{
	return x.action(actgh);
}

inline f64 math::sinc(f64 x)
{
	if (x != 0.0)
	{
		return sin(x) / x;
	}
	else
	{
		return 1.0;
	}
}

inline vector math::sinc(vector x)
{
	return x.action(sinc);
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