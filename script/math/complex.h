#pragma once

/// <summary>
/// complex number
/// </summary>
class complex
{
public:
	complex();

	f64 re();
	f64 im();

	/// <summary>
	/// radius, ρ
	/// </summary>
	f64 r;

	/// <summary>
	/// argument, φ
	/// </summary>
	f64 phi;
};