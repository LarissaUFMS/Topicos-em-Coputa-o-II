#include "IntArray.h"
#include <algorithm> // std::copy
#include <iostream> //std::cout

// Métodos privados
void IntArray::resize() {
	++_capacity;
	++_size;
	int* tempData = new int[_capacity];
	std::copy(_data, _data + _size, tempData);
	delete[] _data;
	_data = tempData;
}

int*
IntArray::find(int value) const
{
	for (int i = 0; i <= _size; ++i) {
		if (_data[i] == value)
			return _data + i;
	}
	return nullptr;
}

// Métodos públicos
void IntArray::printData() const {
	for (int i = 0; i <= _size; ++i) {
		std::cout << _data[i] << " ";
	}
}

bool
IntArray::remove(int value)
{
	auto position = find(value);
	if (position == nullptr)
		return false;
	for (; position != _data + _size; ++position)
		*position = position[1];
	--_size;
	return true;
}
