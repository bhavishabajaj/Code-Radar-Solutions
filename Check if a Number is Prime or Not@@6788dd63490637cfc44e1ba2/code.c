#include <stdio.h>
int main(){
    int num ; int c=2;
    scanf("%d", &num);
    if(num<=1){
        printf("Not Prime");
        return 0;
    }
    while(c*c <= num){
        if(num%c==0){
            printf("Not Prime");
            return 0;
        }
        c++;
    }
    printf("Prime");
    return 0;
}