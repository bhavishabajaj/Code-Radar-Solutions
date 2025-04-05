#include <stdio.h>
int main(){
    int num ; int c=2;
    scanf("%d", &num);
    while(c*c <= num){
        if(num%c==0){
            printf("NOt Prime");
            break;
        }
        else{
            printf("Prime");
        }
    }
}