#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void interleave(char* str1, char* str2, char* str, int len)
{
    int i=0;

    //if both input strings reach null, print final string and return
    if(str1[0] == '\0' && str2[0] == '\0')
    {
        printf("%s\n", str-len);
        return;
    }

    if(str1[0] != '\0')
    {
        str[0] = str1[0];
        interleave(str1+1, str2, str+1, len);
    }
    if(str2[0] != '\0')
    {
        str[0] = str2[0];
        interleave(str1, str2+1, str+1, len);
    }
}

int main()
{
    char* str1 = "AB";
    char* str2 = "MNO";

    //get length of input strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1+len2;

    //allocate memory for output string
    char* str = (char*)malloc(len+1);
    memset(str, 0, len+1);

    interleave(str1, str2, str, len);
    return 0;
}
