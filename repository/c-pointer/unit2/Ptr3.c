#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int i = 0;
    int data = 321;
    int *iptr;

    char *cptr;
    iptr = &data;
//    cptr = (char *)&data;
    cptr = (char *)iptr;

    printf("value of data = %d hex value = %x\n", data, data);
    printf("address of data = %p\n", &data);
    printf("Integer pointer pointer at %p  Value of Integer pointer %x\n", iptr,*iptr);
    printf("Character pointer pointer at %p  Integer pointer Character pointer %x\n", cptr,*cptr);
    printf("Printing addressof all the four bytes of variable int data \n");

    for (i = 0; i < 4; i++)
    {
        printf("%x --- %x --- %x --- %p --- %p --- %p --- %p --- %p\n", data,*cptr,*iptr,cptr,iptr,&data,&iptr,&cptr);
        cptr++;
    }
    return 0;
}
