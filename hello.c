#include <stdio.h>
#include <string.h>

int main() 
{
/*
   int len = slen("I am string");
   printf("%d\n", len);
   int len2 = strlen("I am string");
   printf("%d\n", len2);
   int len3 = 'x';
   printf("%d\n", len3);
*/

    char c = 'd';
    char *str = "this is a ver long string";
    char ch[] = "this is a ver long string";

    printf("%c\n", c);
    printf("length of str:%d\n", strlen(str));
    printf("data str:%s\n", *str);
    printf("size of str:%d\n", sizeof(*str));
    printf("length of ch:%d\n", strlen(ch));
    printf("size of ch:%d\n", sizeof(ch));

}

int slen(char ch[])
{
    int i = 0;
    while (ch[i] != '\0')
        ++i;
    return i;
}
