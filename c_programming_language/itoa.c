#include <stdio.h>
#include "reverse.h"
/*
 * 1.  
 * 2. 
 * */
void my_itoa(int n, char s[])
{
    int num;
    int bit;
    int i;

    num = n;
    i = 0;

    do {
        bit = num % 10;
        s[i] = '0' + bit;
        num = num / 10;
        ++i;
    }
    while (num > 0);

    reverse(s);
}

void itoa(int n, char s[])
{
   int sign;
   int i;
   i = 0;
   sign = 1;
   if (n < 0)
   {
       n *= -1;
       sign = -1;
   }

   do {
       s[i++] = n % 10 + '0';
   }
   while ((n /= 10) > 0);

   if (-1 == sign)
       s[i++] = '-';

   s[i] = '\0';

   reverse(s);
}

int main () {
    char buffer[64] = {0};
    int iValue = -1234;

    itoa(iValue, buffer);
    
    printf("After process the result string is %s\n", buffer);
    return 0;
}
