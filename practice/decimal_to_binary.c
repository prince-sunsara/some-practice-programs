// CONVERT DECIMAL NUMBER TO BINARY NUMBER

#include <stdio.h>

void main(){
    int n = 12;
    int rem = 0;
    int arr[10];
    int i = 0;

    while(n){
        rem = n%2;
        arr[i] = rem;
        n = n/2;
        i++;
    }

    for (int j =  i-1; j >= 0; j--){
        printf("%d", arr[j]);
    }
}