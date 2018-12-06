#include<stdio.h>
#include<stdlib.h>
int* called_function(int *x);
int main(int argc, char const *argv[])
{
    /* code */
    int t1 = 10;
    int *t2;
    t2 = called_function(&t1);
    printf("%d",t2);
    return 0;
}
int* called_function(int *x){
    int t2;
    int *t1;
    int *t3;
    t1 = x;
    t2 = 20;
    t3 = (int *)malloc(sizeof(int));
    t3 = *t1 + t2;
    return t3;
}
