#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in,*out;
	int cnt;
	char str[100];
	int err1,err2;

	err1 = fopen_s(&in, "C://c_code/HW7/P18/welcome.txt", "r");
	err2 = fopen_s(&out, "C://c_code/HW7/P18/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s", str,100);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}