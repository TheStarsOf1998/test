#include <stdio.h>
#include <string.h>
#include <malloc.h>
void freestrmemory(char **arr, int length);
int main(int argc, char const *argv[])
{
    /* code */
    char **arr = NULL;
    char tempstring[30];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Insert Data\n");
        scanf("%s", tempstring);
        if (arr == NULL)
        {
            arr = (char **)malloc(sizeof(char *));
        }
        else
        {
            arr = (char **)realloc(arr, sizeof(char *) * (i + 1));
        }
        arr[i] = (char *)malloc(sizeof(char) * (strlen(tempstring) + 1));
        strcpy(arr[i], tempstring);
        printf(" %p \n", &arr);
        printf("\n");
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d - %s -%p - %p - %p\n", i, arr[i], arr[i], &arr[i], &arr);
    }
    freestrmemory(arr, 5);
    for (i = 0; i < 6; i++)
    {
        printf("%d - %s -%p - %p - %p\n", i, arr[i], arr[i], &arr[i], &arr);
    }
    return 0;
}
void freestrmemory(char **arr, int length)
{
    int i;
    for (i = 0; i <= length; i++)
    {
        free(arr[i]);
        arr[i] = NULL;
    }
    free(arr);
    arr = NULL;
}
