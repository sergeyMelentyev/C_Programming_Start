#include <stdio.h>
#include <stdlib.h>

void read_from_file(void);

/* 
	'r' open, read only
	'w' open or create, write from begining
	'a' open or create, add to the end
	'r+' open, read and add new
	'w+' open or create, write from begining
	'a+' open or create, add to the end
	'rb' 'wb'... binary flag
	'wx' 'wbx'... cancel access if file already in use
*/

void read_from_file(void) {
	int ch;
	FILE *fp;															// pointer to the data object with buffer information
	
	if ((fp = fopen("test.txt", "r")) != NULL)
		while ((ch = getc(fp)) != EOF)
			putchar(ch);
	else
		printf("Error while opening\n");
	
	if (fclose(fp) == 0)
		printf("*** File closed successfully ***\n");
	else
		printf("Error while closing\n");

}
void read_and_write(void) {

}
