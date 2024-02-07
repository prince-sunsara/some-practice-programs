// C program to sum of  first n numbers in O(1)

#include<stdio.h>
void main(){
    int n;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);

    // for(int i=1;i<=n; i++){
    //     sum += i;
    // }

    sum = (n* (n+1))/2;

    printf("Sum of 0 to %d = %d", n , sum);
}