#include "IntArray.h"
#include <algorithm>

//métodos privados
void
IntArray::resize()
{
    ++_capacity;
    int* tempData = new int[_capacity];
    ++_size;
    std::copy(_data, _data + _size, tempData);
    delete[]_data;
    _data = tempData;
}

int*
IntArray::find(int value) const
{
    for(int i = 0; i <= _size; ++i){
        if(_data[i] == value)
            return _data + i;
    }
    return nullptr;
}

//métodos públicos

bool
IntArray::remove(int value)
{
    int* position = find(value);
    if(position == nullptr)
        return false;
    while(position != _data + _size)
        *position = *(++position);
    --_size;
    return true;
}
