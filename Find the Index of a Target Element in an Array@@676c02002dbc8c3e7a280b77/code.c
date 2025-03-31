// Your code here...
#include <stdio.h>

int searchindex(int arr , int size , int T){
    for(int i=0 ; i<size ; i++){
        if (i==T){
            return 1;
        }
        else{
            return -1;
        }
    }
}

int main(){
    int N; int size;
    scanf("%d %d",&N ,&size);
    int arr[];
    for(int j=0 ; j<=N ; j++){
        scanf("%d ", &arr[i]);
    }
    int T;
    scanf("%d", &T);
    int search= searchindex(arr, size, T);
}