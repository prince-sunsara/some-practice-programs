// FIND LARGEST ELEMENT IN ARRAY

#include<stdio.h>

int maximum(int arr[], int length){
    int max = 0;
    for (int i =0;i< length;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void main(){
    int arr[] = {1,2,3,4,5,22,7,8};

    int max = maximum(arr, 8);
    printf("%d\n",max);

    // length find 
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("%d",length);

}