#include <stdio.h>

int main()
{
    char ch;
    printf("Input charachter: ");
    scanf("%c", &ch);
    printf("%c\n", ch);
    getchar();

    char wo[50];
    printf("Input word: ");
    scanf("%s", wo);
    printf("%s\n", wo);
    getchar();
    char sentenc[100];
    printf("Input sentence: ");
    scanf("%[^\n]", sentenc);
    printf("%s\n", sentenc);

    return 0;
}