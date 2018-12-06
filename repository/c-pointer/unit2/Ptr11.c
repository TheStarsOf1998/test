#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int arr[4] = {1, 2, 3, 4};
    int(*ptr_arr)[4];
    int i;
    int *ptr = arr;
    ptr_arr = &arr;
    for (i = 0; i < 4; i++)
    {
        printf("Address of array = %p\n", arr + i);
    }
    printf("\n");
    printf("Value at = %d\n", *(ptr_arr[0] + 1));
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        printf("Value at %p = %d\n", (ptr_arr[0] + i), *(ptr_arr[0] + i));
    }
    return 0;
}
