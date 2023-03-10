#include "IntArray.h"
#include <algorithm>

//métodos privados
void
IntArray::resize()
{
    ++_capacity;
    int* tempData = new int[_capacity];
    std::copy(_data, _data + _size - 1, tempData);
    delete[]_data;
    _data = tempData;

}

int*
IntArray::find(int value) const
{
    for(int i = 0; i <= _size; ++i){
        if(*(_data+i) == value)
            return _data + i;
    }
    return nullptr;
}

//métodos públicos

bool
IntArray::remove(int value)
{
    auto position = find(value);
    if(position == nullptr)
        return false;
    
}
