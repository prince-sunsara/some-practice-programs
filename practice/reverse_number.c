// reverse a number

#include<stdio.h>

void main(){
    int n = 12345;
    int rem, rev=0;
    while(n){
        rem = n%10;
        rev = rev*10+ rem;
        n = n/10;
    }
    printf("%d",rev);
}