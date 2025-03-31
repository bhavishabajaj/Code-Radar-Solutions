// Your code here...
#include <stdio.h>
void fibonacciSeries(int n){
    for(int i=1 ; i<n ; i++){
        int a=0 , b=1, next;
        next=a+b;
        a=b;
        b=next;
    }
}
   