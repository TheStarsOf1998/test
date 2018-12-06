#include <stdio.h>
#define BIG_ENDIAN 0
#define LITTLE_ENDIAN 1
int endian()
{
    short int word = 0x0001;
    char *byte = (char *)&word;
    return (byte[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}

int main(int argc, char const *argv[])
{
    /* code */
    int value;
    value = endian();
    printf("value = %d\n",endian());
    if (value == 1)
    {
        printf("the machine is Little Endian\n");
    }
    else
    {
        printf("the machine is Big Endian\n");
    }

    int values = 0x0102;
    // int *iptr = &values;
    char *cptr = (char *)&values;
    for (int j = 0; j < 4; j++)
    {
        // printf("Values--> %d Address is %p Value is %x\n", cptr, *cptr);
        // cptr++;
        printf("%p.....%d\n",cptr,cptr[j]);
        cptr++;
    }
    return 0;
}
