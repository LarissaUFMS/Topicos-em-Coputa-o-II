#ifndef INTLINKEDLIST_H
#define INTLINKEDLIST_H

class IntLinkedList {
	private:
		int _node;
		IntLinkedList* _prox;

	public:
		//Método construtor
		IntLinkedList() {
			_node = 0;
			_prox = nullptr;
		}
		//Método contrutor
		IntLinkedList(int value) {
			_node = value;
			_prox = nullptr;
		}
		//Método destrutor
		~IntLinkedList() {
			IntLinkedList* current = this;
			IntLinkedList* temp;
			while (current != nullptr) {
				temp = current;
				current = current->_prox;
				delete temp;
			}
		}
		void add(int value) {
			IntLinkedList* newNode = new IntLinkedList(value);
			IntLinkedList* current = this;
			while (current->_prox != nullptr) {
				current = current->_prox;
			}
			current->_prox = newNode;
		}
};
#endif