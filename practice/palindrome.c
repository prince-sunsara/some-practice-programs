// NUMBER IS PALINDROME OR NODE

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n = 2121, rev = 0;
    int  original_n = n;
    while (n != 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    printf("reversed number = %d\n", rev);

    if(rev == original_n){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }
    
    return 0;
}