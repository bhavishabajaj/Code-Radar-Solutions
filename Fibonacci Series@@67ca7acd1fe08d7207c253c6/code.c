// Your code here...
#include <stdio.h>
void fibonacciSeries(int n){
    int a=0 , b=1 , next;
    for(int i=0 ; i<n ; i++){
        next=a+b;
        a=b;
        b=next;
    }
}
   