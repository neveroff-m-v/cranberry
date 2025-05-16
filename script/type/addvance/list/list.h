#pragma once

template <typename type>
class list
{
public:
	list();
	list(u32 count);

	type& operator[](u32 index);

	logic is_empty();

	void add(type element);
	void add(type* elements, u32 count);
	void add(list<type> list);

	list<type> action(type(*function)(type));
	list<type> action(type(*function)(type*, u32), u32 width);
	type action(type(*function)(type*, u32));

	type* elements;
	u32 count;
};

template <typename type>
list<type>::list()
{
	this->elements = nullptr;
	this->count = 0;
}

template <typename type>
list<type>::list(u32 count)
{
	this->elements = new type[count]{};
	this->count = count;
}

template <typename type>
type& list<type>::operator[](u32 index)
{
	return elements[index];
}

template <typename type>
logic list<type>::is_empty()
{
	return count == 0;
}

template <typename type>
void list<type>::add(type element)
{
	type* buffer = new type[this->count + 1];
	array::concat(buffer, this->elements, this->count, &element, 1);
	delete[] this->elements;

	this->elements = buffer;
	this->count++;
}

template <typename type>
void list<type>::add(type* elements, u32 count)
{
	type* buffer = new type[this->count + count];
	array::concat(buffer, this->elements, this->count, elements, count);
	delete[] this->elements;

	this->elements = buffer;
	this->count += count;
}

template <typename type>
void list<type>::add(list<type> list)
{
	type* buffer = new type[this->count + list.count];
	array::concat(buffer, this->elements, this->count, list.elements, list.count);
	delete[] this->elements;

	this->elements = buffer;
	this->count += list.count;
}

template<typename type>
inline list<type> list<type>::action(type(*function)(type))
{
	list<type> result = list<type>(count);

	foreach(i, result)
	{
		result.elements[i] = function(elements[i]);
	}

	return result;
}

template<typename type>
inline list<type> list<type>::action(type(*function)(type*, u32), u32 width)
{
	list<type> result = list<type>(count - (width - 1));

	foreach(i, result)
	{
		result.elements[i] = function(elements + i, width);
	}

	return result;
}

template<typename type>
type list<type>::action(type(*function)(type*, u32))
{
	return function(elements, count);
}
