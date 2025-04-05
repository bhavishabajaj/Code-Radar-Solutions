// Your code here...
#include <stdio.h>
int main(){
    int num;
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