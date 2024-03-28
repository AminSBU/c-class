/* Another scanset example with ^ */
#include <stdio.h>

int main(void)
{
	char str[128];

	printf("Enter a string: ");
	scanf("%[^o]s", str);              // scan any string values before 'o'

	printf("You entered: %s\n", str);  // show string value until 'o' detected

	return 0;
}
