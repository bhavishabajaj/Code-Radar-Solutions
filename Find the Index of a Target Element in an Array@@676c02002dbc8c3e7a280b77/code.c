// Your code here...
#include <stdio.h>

int searchindex(int arr[] , int size , int T){
    for(int i=0 ; i<size ; i++){
        if (arr[i]==T){
            return i;
        }
    }
    return -1;
}

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int j=0 ; j<N ; j++){
        scanf("%d", &arr[j]);
    }
    int T;
    scanf("%d", &T);
    int search= searchindex(arr, N, T);
    printf("%d",search);
    
}