#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int err;
	int i = 0;

	err = fopen_s(&fptr, "C://c_code/HW7/P16/output.txt", "a");
	printf("�п�J�r��A��ENTER�䵲����J�G\n");
	while ((ch = _getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}