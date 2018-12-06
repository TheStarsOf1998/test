#include<string.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    char *str = "Hello pointer";
    printf("%c\n",*str);
    printf("%s\n",str);
   // printf("address meomary = %p str Address = %p Value is -> %s",str,&str,str);
    return 0;
}
