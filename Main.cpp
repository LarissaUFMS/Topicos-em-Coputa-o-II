#include "IntArray.h"

int main() {
	IntArray a;

	for (int i = 1; i < 11; i++)
		a.add(i);
	a.remove(4);
	a.printData();
	return 0;
}
