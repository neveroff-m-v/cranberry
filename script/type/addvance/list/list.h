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

	void inc(type element, u32 index);
	void inc(type* elements, u32 count, u32 index);
	void inc(list<type> list, u32 index);

	list<type> action(type(*function)(type));
	list<type> action(type(*function)(type*, u32), u32 width);
	type action(type(*function)(type*, u32));

	template <typename type_arg>
	list<type> filter(logic(*function)(type, type_arg), type_arg args);
	list<type> filter(logic(*function)(type));
	
	void sort(logic(*function)(type, type));

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
inline void list<type>::inc(type element, u32 index)
{
	type* buffer = new type[this->count + 1];
	array::include(buffer, this->elements, this->count, &element, 1, index);
	delete[] this->elements;

	this->elements = buffer;
	this->count++;
}

template<typename type>
inline void list<type>::inc(type* elements, u32 count, u32 index)
{
	type* buffer = new type[this->count + count];
	array::include(buffer, this->elements, this->count, elements, count, index);
	delete[] this->elements;

	this->elements = buffer;
	this->count += count;
}

template<typename type>
inline void list<type>::inc(list<type> list, u32 index)
{
	type* buffer = new type[this->count + list.count];
	array::include(buffer, this->elements, this->count, list.elements, list.count, index);
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

template<typename type>
inline list<type> list<type>::filter(logic(*function)(type))
{
	list<type> result = list<type>(0);

	for(u32 i = 0; i < count; i++)
	{
		if (function(elements[i]))
		{
			result.add(elements[i]);
		}
	}

	return result;
}

template<typename type>
template<typename type_arg>
inline list<type> list<type>::filter(logic(*function)(type, type_arg), type_arg args)
{
	list<type> result = list<type>(0);

	for (u32 i = 0; i < count; i++)
	{
		if (function(elements[i], args))
		{
			result.add(elements[i]);
		}
	}

	return result;
}

template<typename type>
inline void list<type>::sort(logic(*function)(type, type))
{
	for (u32 i = 0; i < count; i++)
	{
		for (u32 j = i; j < count; j++)
		{
			if (function(elements[i], elements[j]))
			{
				type buffer = elements[i];
				elements[i] = elements[j];
				elements[j] = buffer;
			}
		}
	}
}
