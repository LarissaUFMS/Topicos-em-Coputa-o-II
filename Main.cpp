#include "IntArray.h"

int
main()
{
	IntArray a;
	IntArray* pa = new IntArray;

	for (int i = 1; i < 10; ++i)
		a.add(i);

	return 0;
}