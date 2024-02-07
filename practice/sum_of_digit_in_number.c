// COUNT NUMBER OF DIGITS IN AN INTEGER AND SUM OF DIGITS
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n = 654289,rem, sum = 0,count = 0;
    while (n != 0){
        rem = n%10;
        sum += rem;
        n /= 10;
        count ++;
    }
    printf("Digit in number is : %d\n", count);
    printf("Sum : %d",sum);
    return 0;
}