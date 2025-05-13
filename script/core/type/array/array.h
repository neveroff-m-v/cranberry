#pragma once

class array
{
public:
	template<typename type>
	static void copy(type* dst, u32 dst_offset, type* src, u32 src_offset, u32 count);
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