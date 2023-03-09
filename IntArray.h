#pragma once
//Diretiva de guarda
#ifndef --IntArray.h
#define --IntArray.h

#endif

class IntArray {
	//Boas pr�tica: atributo privado inicia com '_'
	private: //Classe os atributos s�o privados por default enquanto struct s�o publicos por default
		int _capacity;
		int _size;
		int* _data;

		void resize();
		int* find(int value) const;

	public:
		//M�todo contrutor
		IntArray()
		{
			_capacity = _size = 0;
			_data = nullptr; //nulptr uma palavra reservada que significa ponteiro nulo
		}

		//M�todo contrutor
		IntArray(int capacityy)
		{
			assert(capacity > 0);
			_capacity = capacity;
			_size = 0;
			_data = new int[capacity];
		}

		//M�todo destrutor
		~IntArray()//Destrutor � caracterizado inserir o s�mbolo antes'~' 
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