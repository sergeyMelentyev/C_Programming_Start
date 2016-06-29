#include <stdio.h>
#include <string.h>
#include "struct.h"

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void struct_first(void) {
	struct book library[MAXBKS];										// array of structs of type book

/*
	library[0].title, library[0].author, library[0].value 				// first book
	library[1].title, library[1].author, library[1].value 				// second book
	...
	library[9].title, library[9].author, library[9].value 				// last book
*/

	int count = 0;
	int index;

/*
	struct book library = {												// struct init
		.title = "C Prime",
		.author = "Prata",
		49.99
	};
*/	

	printf("Enter book name\n");
	printf("Press enter at the beginning in order to end\n");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0') {
		printf("Enter author name\n");
		s_gets(library[count].author, MAXAUTL);
		printf("Enter price\n");
		scanf("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			printf("Enter next book name\n");
	}
	if (count > 0) {
		printf("Your book catalog:\n");
		for (index = 0; index < count; index++)
			printf("%s author %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
	} else
		printf("There are no books\n");
}

char *s_gets(char *st, int n) {
	char *retail_value;
	char *find;
	retail_value = fgets(st, n, stdin);
	if (retail_value) {
		find = strchr(st, '\n');
		if (find)
			*find = '\0';
		else 
			while (getchar() != '\n')
				continue;
	}
	return retail_value;
}

const char *msgs[5] = {
	" Any start text here",
	"Any more text here",
	"and more text here",
	"and and once more text here",
	"the end"
};

struct names {															// struct declaration
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;												// internal struct declaration
	char favfood[LEN];
	char job[LEN];
	float income;
};

void struct_second(void) {
	struct guy fellow = {												// struct init
		{ "Sergey", "Melentyev" },
		"Bylon",
		"C/C++ programmer",
		118112.00
	};
	printf("Dear %s,\n", fellow.handle.first);
	printf("%s %s\n", msgs[0], fellow.handle.first);
	printf("%s %s\n", msgs[1], fellow.job);
	printf("%s\n", msgs[2]);
	printf("%s %s %s", msgs[3], fellow.favfood, msgs[4]);
	if (fellow.income > 100000.00)
		puts("!!");
	else
		puts("!");
	printf("%30s %s\n", " ", "See you soon.");
}
