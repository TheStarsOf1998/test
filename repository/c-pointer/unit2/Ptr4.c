#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int data[4] = {1,2,3,4};
    int *iptr1;
    int *iptr2;
    int val;
    iptr1 = &data[0];
    iptr2 = &data[1];
    val = iptr2 - iptr1;
    printf("%p.......%p\n",&iptr1,iptr1);
    printf("%p.......%p\n",&iptr2,iptr2);
    printf("DIstance between the two address = %d\n",val);
    return 0;
}
