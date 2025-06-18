#pragma once

class document
{
public:
	document();
	document(string name);
	document(string name, string path);

	void open();
	//void open_readonly();
	void close();

	template<typename type>
	void write(type value);

	template<typename type>
	void write_line(type value);

	string name;
	string path;

private:
	stream file;
};

inline document::document()
{
	this->name = "";
	this->path = "";
	this->file = stream();
}

inline document::document(string name)
{
	this->name = name;
	this->path = "";
	this->file = stream();
}

inline document::document(string name, string path)
{
	this->name = name;
	this->path = path;
	this->file = stream();
}

inline void document::open()
{
	file.open_write(path + name);
}

inline void document::close()
{
	file.close();
}

template<typename type>
void document::write(type value)
{
	file.write(value);
}

template<typename type>
inline void document::write_line(type value)
{
	file.write(value);
	file.write("\n");
}
