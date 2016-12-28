#include <stdio.h>
#include <ctype.h>

/*
 *1. How to handle 0x and 0X
 *2. How to handle a-f
 *3. How to handle A-F
 *4. How to handle no meaningful input.
 * */

int htois(char s[]) {
    
    int i, n;
    n = 0;

    for (i = 0; s[i] != '\0'; ++i) 
    {
        if (isdigit(s[i]))
        {
            n = n * 16 + (s[i] - '0');
        }
        else
        {
            int lower_c = tolower(s[i]);
            if (lower_c == 'x')
                continue; /* Ignore the 0x or OX in the beginning */
            else if (lower_c >= 'a' && lower_c <= 'f')
            {
                n = n * 16 + (10 + s[i] - 'a');
            }
        }
    }

    return n;
}

int main() {
    
    /* Basic test1 */
    char buffer1[] = "0x2f";
    int result1 = htois(buffer1);

    /* Basic test2 */
    char buffer2[] = "0Xa0f";
    int result2 = htois(buffer2);

    printf( "String is %s, value is %d\n", buffer1, result1 );
    printf( "String is %s, value is %d\n", buffer2, result2 );

    return 0;
}
