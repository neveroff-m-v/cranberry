#pragma once

template <typename type>
class list
{
public:
	list();
	list(u32 size);

	type& operator[](u32 index);

	u8 empty();

	type* element;
	u32 size;
};

template <typename type>
list<type>::list()
{
	this->element = nullptr;
	this->size = 0;
}

template <typename type>
list<type>::list(u32 size)
{
	this->element = new type[size]{};
	this->size = size;
}

template <typename type>
type& list<type>::operator[](u32 index)
{
	return element[index];
}