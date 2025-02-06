#include <stdio.h>

int main(){
    char ch;
    scanf("%d",&ch);
    if(ischar(ch)){
        if(ch=='a' || ch=='e'|| ch=='i'|| ch=='o' || ch=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonnt");
        }
    }
    if(isdigit(ch)){
        printf("Digit");
    }
    else{
        printf("Special Charcter");
    }
}