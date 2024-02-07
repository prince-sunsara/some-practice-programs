// CALCULATE POWER OF A NUMBER 

#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n = 2, p = 3, ans = 1;
    for (int i = 0; i < p; i++)
    {
        ans *= n;
    }
    printf("%d", ans);    
    return 0;
}