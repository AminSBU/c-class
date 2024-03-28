// C program to illustrate the use of printf with width
// specifier
#include <stdio.h>
int main()
{
	int num;

	printf("enter your number: ");
	scanf("%d", &num);
	printf("\nyour number is: ");
	int num_length = printf("%d", num);
    printf("\n");
	printf("\nnumber of characters: %d", num_length);


	return 0;
}
