#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s;
    printf("Input number: ");
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for (int i = 0; s[i] != '\0'; i++)
    {
        // printf(" %c", s[i]);

        if (s[i] == ' ')
        {
            printf(" break\n ");
        }
        else
        {
            printf("%c", *(s + i));
        }
    }

    return 0;
}