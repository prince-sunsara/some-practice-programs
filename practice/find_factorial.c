//  factorial find

#include <stdio.h>

void main(){
    int n = 10;
    int f = 1;

    for (int i =1; i<=n; i++){
        f *= i;
    }
    printf("%d",f);
}