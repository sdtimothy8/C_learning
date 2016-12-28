#include <stdio.h>
/*
 * @brief: search the value.
 * @param a[]: the sorted int values
 * @param n: the number of the value
 * @param x: the value to be searched
 * */
int binsearch(int a[], int n, int x)
{
    int left, right, mid;
    left = mid = 0;
    right = n - 1;

    while (left <= right) /* NOTE: Here must be <= NOT < */
    {
        mid = (left + right) / 2;
        if (x > a[mid])
        {
            left = mid + 1;    
        }
        else if (x < a[mid])
        {
            right = mid - 1;
        }
        else
            return mid;
    }

    return -1;
}

int main() {
    
    /*int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};*/
    int a[] = {1, 2, 3, 4};
    int searchVal = 1;
    int result = binsearch(a, 4, searchVal);
    printf("The search value '%d' %s found.\n", searchVal, (result != -1)? "is":"isn't");

    return 0;
}
