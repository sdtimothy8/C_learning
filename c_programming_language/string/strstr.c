#include <stdio.h>
#include <string.h>

int main() {

    FILE* fp;
    char buff[64];
    const char* name = "xiaoqi";
    const char* fileName = "test.txt";
    
    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Can't open the file, file not exist.\n");
        return -1;
    }

    while (NULL != fgets(buff, sizeof(buff), fp))
        if (strstr(buff, name))
            printf( "Find '%s' in the file\n", name );

    fclose(fp);
    return 0;
}
