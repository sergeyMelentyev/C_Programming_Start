#include <stdio.h>
#include "recursionCall.h"												// gcc plainOld.c recursionCall.c
#include "curl_data.h"													// gcc plainOld.c curl_data.c $(pkg-config --libs --cflags libcurl) -o a.out

void arraySample(void);													// function prototype
void pointerSample(void);

int main(int argc, char const *argv[]) {
//	curl_test();
	pointerSample();
//	arraySample();
//	recursionCall(1);
//	recursionTailCall(1);
	return 0;
}

void arraySample(void) {												// function declaration
	int x, y, z;														// local scope variable
	x = (y = 3, (z = ++y + 2) + 5);										// x = 11

	int daysOne[] = {1, 2, [4] = 5, 6, 7, [0] = 0};						// array init {0, 2, 0, 0, 5, 6, 7}
	int daysTwo[2][3] = {{1, 2}, {3, 4}};								// array init {{1, 2, 0}, {3, 4, 0}}
	int daysThree[2][3] = {1, 2, 3, 4};									// array init {{1, 2, 3}, {4, 0, 0}}

	daysOne == &daysOne[0];												// true
	int getThirdData = * (daysOne + 2);									// Get third value from array == getThirdData[3]
	int addValue = *daysOne + 2;										// Add value to the first element == getThirdData[0] + 2	
}

void pointerSample(void){
	int urn[] = {100, 200, 300, 400, 500};
	int *p1, *p2, *p3;
	p1 = urn;															// Указатель на начало массива
	p2 = &urn[2];														// Указатель на третий элемент массива

	const int * pd = urn;												// Адрес на начало, содержимое ячейки менять нельзя
	pd++;																// Адрес на 2й элемент, содержимое ячейки менять нельзя
	int * const pdd = urn;												// Адрес на начало, сдвигать его нельзя, можно менять сожержание ячейки
	*pdd = 0;															// Адрес на начало, сдвигать его нельзя, сожержание изменено
	const int * const ppd = urn;										// Адрес на начало, сдвигать его нельзя, содержимое менять нельзя

	printf("На какой адрес ссылается p1, какое значение по этому адресу, какой адрес у самого p1\n");
	printf("p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);
	
	printf("Инкрементирование указателя\n");
	p1++;
	printf("p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);

	printf("Сложение значения int с указателем\n");
	printf("p1 + 3 = %p, *(p1 + 3) = %d\n", p1 + 3, *(p1 + 3));

	printf("Декрементирование указателя\n");
	printf("Исходное значение p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);
	p1--;
	printf("Конечное значепние p1 = %p, *p1 = %d, &p1 = %p\n", p1, *p1, &p1);

	printf("Вычитание одного указателя из другого\n");
	printf("p2 = %p, p1 = %p, p2 - p1 = %td\n", p2, p1, p2 - p1);
}
