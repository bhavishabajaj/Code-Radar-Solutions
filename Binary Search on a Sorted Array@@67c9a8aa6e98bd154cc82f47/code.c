// Your code here...
#include <stdio.h>
int binarySearch(int arr[], int n ,int target){
    int high ; int low ; int mid;
    low = 0;
    high = size-1;
    while(low<=high){
    mid = (low+high)/2;
    if(target == arr[mid]){
        return mid;
    }
    if(target > mid){
        low= mid+1;
    }
    else{
        high= mid -1;
    }
    }
    return -1;
}