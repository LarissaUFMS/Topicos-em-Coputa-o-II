#pragma once
//Diretiva de guarda
#ifndef --IntArray.h
#define --IntArray.h

#endif

class IntArray {
	//Boas prática: atributo privado inicia com '_'
	private: //Classe os atributos são privados por default enquanto struct são publicos por default
		int _capacity;
		int _size;
		int* _data;

		void resize();
		int* find(int value) const;

	public:
		//Método contrutor
		IntArray()
		{
			_capacity = _size = 0;
			_data = nullptr; //nulptr uma palavra reservada que significa ponteiro nulo
		}

		//Método contrutor
		IntArray(int capacityy)
		{
			assert(capacity > 0);
			_capacity = capacity;
			_size = 0;
			_data = new int[capacity];
		}

		//Método destrutor
		~IntArray()//Destrutor é caracterizado inserir o símbolo antes'~' 
		{
			delete[]_data;
		}

		//Insere elemento no array
		void add(int value)
		{
			if (_size == _capacity)
				resize();
			_data[_size++] = value;
			
		}

		//Verifica se contem o valor
		auto contains(int value) const
		{
			return find(value) != nullptr;
		}

		/*-------------------------------------------*/

		bool remove(int value);

		/*-------------------------------------------*/

		auto size() const
		{
			return _size;
		}

		void clear()
		{
			delete[]_data;
			_data = nullptr;
			_size = _capacity = 0;
		}

};