#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1, *fptr2;
	int err1,err2;
	char ch;

	err1 = fopen_s(&fptr1, "C://c_code/HW7/P15/welcome.txt", "r");
	err2 = fopen_s(&fptr2, "C://c_code/HW7/P15/output.txt", "w");
	if ((fptr1 != NULL)&&(fptr2!=NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch,fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}