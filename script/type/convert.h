#pragma once

class convert
{
public:
    static string to_string(u8 value);
    static string to_string(u16 value);
    static string to_string(u32 value);
    static string to_string(u64 value);

    static string to_string(f32 value);
    static string to_string(f64 value);

    static string to_string(string value);

    template<typename type>
    static string to_string(type value);

    template<typename type>
    static string to_string(list<type> list);
};

inline string convert::to_string(u8 value)
{
    c8* buffer = new c8[4];
    cpp_std::sprintf(buffer, "%i", value);
    return string(buffer);
}

inline string convert::to_string(u16 value)
{
    c8* buffer = new c8[6];
    cpp_std::sprintf(buffer, "%i", value);
    return string(buffer);
}

inline string convert::to_string(u32 value)
{
    c8* buffer = new c8[11];
    cpp_std::sprintf(buffer, "%i", value);
    return string(buffer);
}

inline string convert::to_string(u64 value)
{
    c8* buffer = new c8[21];
    cpp_std::sprintf(buffer, "%li", value);
    return string(buffer);
}

inline string convert::to_string(f32 value)
{
    c8* buffer = new c8[20];
    cpp_std::sprintf(buffer, "%f", value);
    return string(buffer);
}

inline string convert::to_string(f64 value)
{
    c8* buffer = new c8[200];
    cpp_std::sprintf(buffer, "%lf", value);
    return string(buffer);
}

inline string convert::to_string(string value)
{
    string result = "\"";
    result.add(value);
    result.add("\"");

    return result;
}

template<typename type>
inline string convert::to_string(type value)
{
    return value.to_string();
}

template<typename type>
inline string convert::to_string(list<type> list)
{
    string result = "[";

    for(u32 i = 0; i < list.count - 1; i++)
    {
        result.add(to_string(list[i]));
        result.add(";");
    }
    result.add(to_string(list[list.count - 1]));
    result.add("]");

    return result;
}
