#ifndef INTARRAY_H
#define INTARRAY_H

#include <cassert>

class IntArray {

private:
    int _capacity;
    int _size;
    int* _data;

    void resize();
    int* find(int value) const;

public:
    void printData() const;
    bool remove(int value);

    //Método construtor default
    IntArray() {
        _capacity = 0;
        _size = -1;
        _data = nullptr;
    }

    //Método construtor
    IntArray(int capacity)
    {
        assert(capacity > 0);
        _capacity = capacity;
        _size = 0;
        _data = new int[capacity];
    }

    //Método destrutor
    ~IntArray() {
        delete[]_data;
    }

    //Insere elemento inteiro no array
    void add(int value) {
        if (_size + 1 == _capacity)
            resize();
        _data[_size] = value;
    }

    //Verifica se contem o valor
    auto contains(int value) const
    {
        return find(value) != nullptr;
    }

    //Retorna o tamanho de _data contando o zero
    auto size() const
    {
        return _size;
    }

    //Deleta todas as informações do objeto
    void clear()
    {
        delete[]_data;
        _data = nullptr;
        _size = _capacity = 0;
    }

};

#endif
