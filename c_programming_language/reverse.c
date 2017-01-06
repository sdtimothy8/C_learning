#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
    int i;
    int j;
    int tmp;

    for (i = 0, j = strlen(s) - 1; i < j; ++i, --j)
    {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
}

#if 0
int main() {
    char buffer[] = "love";
    reverse(buffer);
    printf("The string after reverse is \"%s\"\n", buffer);

    return 0;
}
#endif
