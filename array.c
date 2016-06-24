#include <stdio.h>
#include "array.h"

void arraySample(void) {												// function declaration
	int x, y, z;														// local scope variable
	x = (y = 3, (z = ++y + 2) + 5);										// x = 11

	int daysOne[] = {1, 2, [4] = 5, 6, 7, [0] = 0};						// array init {0, 2, 0, 0, 5, 6, 7}
	int daysTwo[2][3] = {{1, 2}, {3, 4}};								// array init {{1, 2, 0}, {3, 4, 0}}
	int daysThree[2][3] = {1, 2, 3, 4};									// array init {{1, 2, 3}, {4, 0, 0}}

	daysOne == &daysOne[0];												// true
	int getThirdData = * (daysOne + 2);									// Get third value from array == getThirdData[3]
	int addValue = *daysOne + 2;										// Add value to the first element == getThirdData[0] + 2

	printf("Array sample\n");
}
