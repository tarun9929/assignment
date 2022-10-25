#include<stdio.h>

int main(){
    int a , b , c;

    printf("Enter the value of a b and c\n");
    scanf("%d%d%d" , &a , &b , &c);

    int q = b * b - 4 * a * c;

    if(q > 0){
        printf("Real and distisct\n");
    }
    else if(q < 0){
        printf("Imagnary\n");
    }
    else{
        printf("Real and equal\n");
    }
}