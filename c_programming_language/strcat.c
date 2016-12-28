#include <stdio.h>
/* */
void Strcat(char s[], char t[])
{
    int i, j;
    i = j = 0;

    for (; s[i] != '\0'; ++i)
        ;
    while ((s[i++] = t[j++]) != '\0') ;
}

int main() {
    
    char sBuff[40] = "love ";
    char tBuff[] = "xiaoqi";
    Strcat(sBuff,tBuff);

    printf("The string value after Strcat is %s.\n", sBuff);

    return 0;
}
