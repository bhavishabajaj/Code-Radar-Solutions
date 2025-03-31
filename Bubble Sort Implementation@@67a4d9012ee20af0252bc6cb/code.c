// Your code here...
#include <stdio.h>

void printArray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int n){
    int temp;
    for(int u=0; u<n-1 ; u++){
        for(int j=0 ; j<n-u-1; j++){
            if(arr[j]>arr[j+1]){
            temp= arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= temp;
            }
        }
    }
}
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int k=0 ; k< n; k++)
//     {
//     scanf("%d", &arr[k]);
//     }
//     bubblesort(arr , n);
//     printarray(arr,n);
    
// }