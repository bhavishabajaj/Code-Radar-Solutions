// Your code here...
#include <stdio.h>
void bubblesort(){
    int temp;
    for(i=0; i<n-1,i++){
        for(j=0;j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
            temp= arr[j];
            arr[j] = arr[j+1];
            arr[j+1]= temp
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
// }