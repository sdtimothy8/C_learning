#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main()
{
    int count = 1;
    int child;
    printf("Before create son, the father's count is :%d\n", count);
    child = vfork();
    if (0 == child)
    {
        int i;
        for (i = 0; i < 20; ++i)
        {
            printf("This is son, the i is %d\n", i);
            ++count;
            if (18 == i)
                exit(1);
        }
    }
    else
    {
        printf("After son, this is father, his pid is: %d and the count is: %d, and the child is: %d\n", getpid(), count, child);
    }

}
