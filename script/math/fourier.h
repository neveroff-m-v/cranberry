#pragma once

class fourier
{
public:
	static list<complex> fft(list<complex> s);
};

inline list<complex> fourier::fft(list<complex> s)
{
	list<complex> h = list<complex>(s.count);

	foreach(i, h)
	{
		h[i] = 
	}
}