#include<stdio.h>

void main(){
int n = 5;

//  STAR PATTERN 1
//  *
//  **
//  ***
//  ****
//  *****
// for (int i = 0; i < n; i++){
//     for(int j = 0; j <= i; j++){
//         printf("*");
//     }
//     printf("\n");
// }


//  STAR PATTERN 2
//      *
//     **
//    ***
//   ****
//  *****
// for (int i = 0; i < n; i++){
//     for (int j = 0; j <= n-i; j++){
//         printf(" ");
//     }
//     for (int k = 0; k <= i; k++){
//         printf("*");
//     }
//     printf("\n");
// }


//  STAR PATTERN 3
//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
for (int i = 0; i < n; i++){
    for (int j = 0; j < n - i; j++){
        printf(" ");
    }
    for (int k = 0; k <= i; k++){
        printf("* ");
    }
    printf("\n");
}


//  extra
//  *****
//  ****
//  ***
//  **
//  *
// for (int i = 0; i < n; i++){
//     for (int k = n-i; k > 0; k--){
//         printf("*");
//     }
//     printf("\n");
// }


//  STAR PATTERN 4
//  *****
//   ****
//    ***
//     **
//      *
// for (int i = 0; i < n; i++){
//     for (int j = 0; j < i; j++){
//         printf(" ");
//     }
//     for (int k = n-i; k > 0; k--){
//         printf("*");
//     }
//     printf("\n");
// }



//  STAR PATTERN 5
//  * * * *
//  *     *
//  *     *
//  * * * *
// for (int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++)
//         if (i == 0 || j == 0 || i == n-1 || j == n-1)
//             printf("*");
//         else
//             printf(" ");
//     printf("\n");
// }
}