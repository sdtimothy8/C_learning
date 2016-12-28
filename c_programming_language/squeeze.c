#include <stdio.h>

void squeeze(char s[], int c)
{
    int i,j;
    for (i = j = 0; s[i] != '\0'; ++i)
        if (s[i] != c)
            s[j++] = s[i];

    s[j] = '\0';
}


int includeChar(char s[], int c)
{
    int find = 0;
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        if (s[i] == c)
            find = 1;

    return find;
}

void squeeze_s( char s[], char r[] )
{
    int i,j;
    for (i = j = 0; s[i] != '\0'; ++i)
        if (0 == includeChar(r, s[i]))
            s[j++] = s[i];

    s[j] = '\0';
}

int main()
{
    char charBuff[] = "hello world";
    squeeze(charBuff, 'l');
    printf("The string value after squeeze is %s.\n", charBuff);

    char sBuff[] = "hello world";
    char rBuff[] = "ol";
    squeeze_s(sBuff, rBuff);
    printf("The string value after squeeze_s is %s.\n", sBuff);

    return 0;
}
