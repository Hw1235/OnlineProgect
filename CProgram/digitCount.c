#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *s;
    printf("input Stinrg: ");

    s = malloc(1024 * sizeof(char));
    scanf("%s", s);
    s = (char *)realloc(s, strlen(s) + 1);

    int count[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count[s[i] - '0'] += 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d", count[i]);
    }

    return 0;
}