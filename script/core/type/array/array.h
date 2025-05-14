#pragma once

class array
{
public:
	template<typename type>
	static void copy(type* dst, u32 dst_offset, type* src, u32 src_offset, u32 count);

	template<typename type>
	static void concat(type* dst, type* src_a, u32 src_a_count, type* src_b, u32 src_b_count);
};

template<typename type>
void array::copy(type* dst, u32 dst_offset, type* src, u32 src_offset, u32 count)
{
	dst += dst_offset;
	src += src_offset;
	for (u32 i = 0; i < count; i++)
	{
		dst[i] = src[i];
	}
}

template<typename type>
void array::concat(type* dst, type* src_a, u32 src_a_count, type* src_b, u32 src_b_count)
{
	copy(dst, 0, src_a, 0, src_a_count);
	copy(dst, src_a_count, src_b, 0, src_b_count);
}