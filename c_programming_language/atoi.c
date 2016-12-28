#include <stdio.h>

int my_atoi(char s[])
{
    int i, sign, result;

    /* remove the extra spaces in the forward */
    for (i = 0; isspace(s[i]); ++i)
        ;
    /* Get the sign value based on '+' or '-' */
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    /* Do transfer for the main part */
    for (result = 0; isdigit(s[i]); ++i)
        result = result * 10 + (s[i] - '0');

    return result * sign;
}

int main() {
    
    char sBuff[] = "    -34670";
    int result = my_atoi(sBuff);
    printf("The result is %d after transfer.\n", result);

    return 0;
}
