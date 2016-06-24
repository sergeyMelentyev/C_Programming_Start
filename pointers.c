#include <stdio.h>
#include "pointers.h"

void pointerSample(void) {
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

void pointerMatrix(void) {
	int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
	int (* pz)[2];
	pz = zippo;

	printf("pz = %p, pz + 1 = %p\n", pz, pz + 1);

	printf("zippo = %p, zippo + 1 = %p\n", zippo, zippo + 1);
	printf("zippo[0] = %p, zippo[0] + 1 = %p\n", zippo[0], zippo[0] + 1);
	printf("*zippo = %p, *zippo + 1 = %p\n", *zippo, *zippo + 1);
	printf("zippo[0][0] = %d\n", zippo[0][0]);
	printf("*zippo[0] = %d\n", *zippo[0]);
	printf("**zippo = %d\n", **zippo);
	printf("zippo[2][1] = %d\n", zippo[2][1]);
	printf("*(*(zippo + 2) + 1) = %d\n", *(*(zippo + 2) + 1));

/*
	zippo[m][n] == *(*(zippo + m) + n);
	pz[m][n] == *(*(pz + m) + n);
*/
}
