// Your code here...
#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1 || i==N || j==1 || j==N){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}