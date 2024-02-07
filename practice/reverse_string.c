// REVERSE THE STRING

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char s[] = "ecnirp";
    int len = 0;
    char temp;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("length %d \n", len);
    
    printf("String is : %s\n", s);
    for (int i=0; i< len/2; i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("Reversed string is : %s", s);
    return 0;
}