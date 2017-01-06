#include <stdio.h>
#include <string.h>

void trim(char s[]) {
    int i;
    i = strlen(s) - 1;
    while (i >= 0)
    {
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            break;
        else
            s[i] = '\0';

        --i;
    }
}

int main() {
    
    char buffer[] = "love   ";
    trim(buffer);
    printf("The string value after trim is %s.\n", buffer);
    return 0;
}
