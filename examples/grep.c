#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 1000

int getmyline(char line[], FILE* filepointer, int max);
int strindex(char source[], char searchfor[]);

main(int argc, char **argv)
{
    char line[MAXLINE];
    FILE* fp;
    char* target;
    target = argv[1];

    printf("Opening file: %s \n", argv[2]);
    fp = fopen(argv[2], "r");
    if (fp == NULL)
        exit(EXIT_FAILURE);

    while (getmyline(line, fp, MAXLINE) > 0)
        if (strindex(line, target) >= 0) {
            printf("%s", line);
        }
    fclose(fp);

}

int getmyline(char s[], FILE* fp, int lim)
{
    int c, i;
    
    i = 0;
    char buf;
    while(--lim > 0 && fread(&buf, sizeof(char), 1, fp) > 0 && buf != EOF && buf != '\n')
        s[i++] = buf;
    if (buf == '\n')
        s[i++] = buf;
    s[i] = '\0';

    return i;
}

int strindex(char s[], char t[])
{
    int i, j, k;

    for (i=0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
