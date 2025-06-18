#pragma once

class stream
{
public:
	stream();
	stream(u32 stream_id);

	void open_read(string filename);
	void open_write(string filename);
	void open_append(string filename);
	void close();

	template<typename type>
	void write(type value);
	void write(const c8* value);
	void write(string value);

	cpp_std::_iobuf* buffer;
};

stream::stream()
{
	buffer = nullptr;
}

stream::stream(u32 stream_id)
{
	buffer = cpp_std::__acrt_iob_func(stream_id);
}

inline void stream::open_read(string filename)
{
	buffer = cpp_std::fopen(filename.char_array(), "r");
}

inline void stream::open_write(string filename)
{
	buffer = cpp_std::fopen(filename.char_array(), "w");
}

inline void stream::open_append(string filename)
{
	buffer = cpp_std::fopen(filename.char_array(), "a");
}

inline void stream::close()
{
	cpp_std::fclose(buffer);
}

template<typename type>
inline void stream::write(type value)
{
	write(convert::to_string(value));
}

inline void stream::write(const c8* value)
{
	for (; value[0] != '\0'; value++)
	{
		cpp_std::fprintf(buffer, "%c", value[0]);
	}
}

inline void stream::write(string value)
{
	foreach(i, value)
	{
		cpp_std::fprintf(buffer, "%c", value[i]);
	}
}
