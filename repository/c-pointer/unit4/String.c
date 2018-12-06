#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    /* char str [5] = "word";
    for(int i = 0; i < 5; i++){
        printf("%c\n",str[i]);
    } */
    char *str = "Hello";
    char *cstr = str;
    for (int i = 0; i < 5; i++)
    {
        printf("%c - %p - %p\n", *cstr,cstr,&str);
        cstr++;
    }
    return 0;
}
