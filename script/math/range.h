#pragma once

class range
{
public:
	range();
	range(f64 min, f64 max, u32 count);
	range(f64 min, f64 max);
	range(f64 min, f64 max, f64 step);

	f64 min;
	f64 max;
	u32 count;
};

inline range::range()
{
	this->min = 0.;
	this->max = 1.;
	this->count = 1;
}

inline range::range(f64 min, f64 max, u32 count)
{
	this->min = min;
	this->max = max;
	this->count = count;
}

inline range::range(f64 min, f64 max)
{
	this->min = min;
	this->max = max;
	this->count = 1;
}

inline range::range(f64 min, f64 max, f64 step)
{
}

