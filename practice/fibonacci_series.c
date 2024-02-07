// fibonacci series

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n1 = 0, n2 = 1, sum = 0;
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("%d ",n1);
    printf("%d ",n2);

    for(int i=2; i<n; i++){
        sum = n1+n2;
        printf("%d ",sum);
        n1 = n2;
        n2 = sum;
    }
    return 0;
}