#include "../script/.h"

u32 sample = 1000;
f64 fsmp = 25.0 * _MHz;
f64 fo = 0.1 * _MHz;
vector n;
vector t;

vector s;

void main()
{
	n = math::range(sample);
	t = n / fsmp;

	s = math::sinc(t * (2 * math::pi * fo));

	console::write_line(s);
}