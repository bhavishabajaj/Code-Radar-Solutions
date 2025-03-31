// Your code here...
#include <stdio.h>
void fibonacciSeries(int N){
    int a=0 , b=1, next;
    for(int i=0 ; i<=N ; i++){
        next=a+b;
        a=b;
        b=next;
    }
}
   