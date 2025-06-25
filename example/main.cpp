#include "../script/.h"

u32 sample = 1000;
f64 fsmp = 25.0 * _MHz;
f64 fo = 5.0 * _MHz;
vector n;
vector t;

vector s;

void main()
{
	n = math::range(sample);
	t = n / fsmp;

	s = math::sin(t * (2 * math::pi * fo));

	console::write_line(s);
}