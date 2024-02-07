// find prime number 

#include <stdio.h>

int main(){
    int n;
    int isPrime = 1;
    printf("Enter number to check prime or not : ");
    scanf("%d", &n);

    for (int i=2; i<n; i++){
        if(n % i == 0){
           isPrime = 0;
        }
    }
    if(isPrime == 0){
        printf("Not Prime number");
    } else {
        printf("Prime number");
    }

    return 0;
}