#include <stdio.h>
#include <string.h>
#include <malloc.h>
void freestring(char *arr[], int length);
int main(int argc, char const *argv[])
{
    /* code */
    char *arr[6];
    char tempstring[30];
    int i;
    for (i = 0; i < 6; i++)
    {
        // printf("\n");
        // printf("%p\n", arr[i]);
        printf("Insert data\n");
        scanf("%s", tempstring);
        arr[i] = (char *)malloc(sizeof(char) * (strlen(tempstring) + 1));
        strcpy(arr[i], tempstring);
        // printf("%p\n", &tempstring);
    }
    printf("Data in array\n");
    for (i = 0; i < 6; i++)
    {
        printf(" %d - %s - %p -%p\n", i, arr[i], arr[i],&arr[i]);
    }
    freestring(arr, 5);
    for (i = 0; i < 6; i++)
    {
        printf(" %d - %s - %p -%p\n", i, arr[i], arr[i],&arr[i]);
    }

    return 0;
}
void freestring(char *arr[], int length)
{
    int i;
    for (i = 0; i <= length; i++)
    {
        free(arr[i]);
        arr[i] = NULL;
    }
}
