#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//char* foo(void);
//int str_length(char *str);
//char *str_cat(char *deststr, char *srcstr);
char *join1(char *, char *);
int main(int argc, char const *argv[])
{
    /* code */
    /* char* m = foo();
    printf("printing local value of function foo ==> %s\n",m);
    char arrstr[10] = "Hello";
    char* ptr = arrstr;
    printf("value ptr is %c Address is %p\n",*ptr,ptr);
    while(*ptr != '\0'){
        printf("%p -----%c\n",ptr,*ptr);
        ptr++;
    } */
    //printf("Value is %c\n",arrstr[0]);
    /* char *strs = "Hello";
    printf("Strs String Length Is %d", str_length(strs)); */
    char *deststr = "zhao-";
    char *srcstr = "jun";
    // char* a = srcstr;
    // char* b = deststr;
    printf("%s", join1(deststr, srcstr));

    return 0;
}
char *foo(void)
{
    char *str = "String";
    //printf("%p\n",&str);
    //printf("%p",str);
    return str;
}
int str_length(char *str)
{
    int string_length = 0;
    char *ptr = NULL;
    ptr = str;
    while (*ptr != '\0')
    {
        string_length++;
        ptr++;
    }
    return string_length;
}
// error
/* char *str_cat(char *deststr, char *srcstr)
{

    char *dtemp;
    //dtemp = (char *)realloc(dtemp, 100);
    dtemp = deststr;
    char *stemp = srcstr;
    //reach till end of the deststr
    while (*dtemp != '\0')
    {
        dtemp++;
    }
    while (*srcstr != '\0')
    {
        *dtemp = *srcstr;
        dtemp++;
        stemp++;
    }
    return dtemp;
} */
/*����һ�����ı��ַ���a,b, ͨ��malloc�����ɵ������ַ���c, ���ؾֲ�ָ�����*/
char *join1(char *a, char *b)
{
    char *c = (char *)malloc(strlen(a) + strlen(b) + 1); //�ֲ���������malloc�����ڴ�
    if (c == NULL)
        exit(1);
    char *tempc = c; //���׵�ַ������
    while (*a != '\0')
    {
        *c++ = *a++;
    }
    while ((*c++ = *b++) != '\0')
    {
        ;
    }
    //ע�⣬��ʱָ��c�Ѿ�ָ��ƴ��֮����ַ����Ľ�β'\0' !
    return tempc; //����ֵ�Ǿֲ�malloc�����ָ����������ں������ý�����free֮
}
