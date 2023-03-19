#include <stdio.h>

int main()
{
	char ch = 'a';

	printf("Lowercase Alphabets: \n");
	while (ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");

	return 0;
}
