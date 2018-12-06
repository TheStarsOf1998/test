#include <stdio.h>
#include <stdlib.h>
struct inner_node
{
    int in_a;
    int in_b;
};

struct node
{
    int *a;
    int *b;
    struct inner_node *inner_node;
};

int main(int argc, char const *argv[])
{
    /* code */

    /* printf("’‘ø°\n");
    for(int i = 0; i < 10; i++){
        printf("%d\n",i);
    } */

    /* int var = 20;
    printf("Address of variable \"var\" : %p",&var);
    printf("\n");
    printf("Address of variable \"var\" : %d",&var);
    struct node *p;
    printf("Size of pointer variable(struct node*) = %d\n",sizeof(struct p*)); */

    /* int x = 2;
    int *p = &x;
    printf("x = %p p = %p is %d",&x,&p,*p); */

    /* int num = 10;
    int *ptr = &num;
    int **mptr = &ptr;

    printf("Value of var num = %d\n", num);
    printf("Value of var num = %d\n", *ptr);
    printf("Value of var num = %d\n", **mptr);

    printf("\n");

    printf("Address of var num = %p\n", &num);
    printf("Address of var num = %p\n", ptr);
    printf("Address of var num = %p\n", *mptr);

    printf("\n");

    printf("Address of var ptr = %p\n", &ptr);
    printf("Address of var ptr = %p\n", mptr);
    printf("Address of var mptr = %p\n", &mptr); */

    /* int num1 = 10;
    int num2 = 20;
    int *const ptr1 = &num1;
    int *ptr2;
    num1 = 30;
    *ptr1 = 20;

    printf("Value stored at pionter = %d", *ptr1);

    printf("\n");
    printf("Address of var num = %p\n", &num1);
    printf("Address of var num = %p\n", ptr1); */

    int count = 1;
    int *ptr = (int *)malloc(sizeof(int) * count);

    //*ptr = 10;
    //printf("Address of var ptr = %p\n", ptr);
    printf("Address of var ptr = %p\n", &ptr);
    printf("Address of var ptr-> = %p\n", ptr);
    printf("Value of var ptr = %d\n", *ptr);
    free(ptr);
    //ptr = NULL;
    //*ptr = 20;
    printf("\n");
    printf("Address of var ptr = %p\n", &ptr);
    printf("Address of var ptr-> = %p\n", ptr);
    printf("Value of var ptr = %d\n", *ptr);

    return 0;
}
