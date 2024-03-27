// C Program to demonstrate the formatting methods.
#include <stdio.h>
int main()
{
    char str[] = "AminSBU";
    printf("%20s\n", str);      // 20 characters and right justify
    printf("%-20s\n", str);     // 20 characters and left justify
    printf("%20.5s\n", str);    // 20 characters and right justify, show 5 character in right
    printf("%-20.5s\n", str);   // 20 characters and right justify, show 5 character in left
    return 0;
}
