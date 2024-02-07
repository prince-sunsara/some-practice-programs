// PRINT NUMBER IN A GIVEN RANGE

#include <stdio.h>

int isPrime(int num){
    for (int i = 2; i < num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

void main(){
    int n = 12, m = 40;
    for (int i = n; i <= m; i++) {
        if(isPrime(i)){
            printf("%d ", i);
        }
    }
}