#pragma once

class range
{
public:
	range();
	range(f64 min, f64 max);
	range(f64 min, f64 max, u32 count);

	f64 min;
	f64 max;
	u32 count;
};