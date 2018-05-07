#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
char s[50];
scanf("%s", s);

    for(int i = 0; i < strlen(s); i++)
    {
       printf("%c", toupper(s[i]));
    }
    printf("\n");
}
