#include<stdio.h>

int HCF(int n1 , int n2 , int i){
    if(n1%i == 0 && n2 % i == 0){
        return i;
    }
    else{
        HCF(n1 , n2 , i-1);
    }
}

int main(){
    int n1 , n2;

    printf("Enter a number\n");
    scanf("%d" , &n2);
    printf("Enter a number\n");
    scanf("%d" , &n1);

    
    int H = HCF(n1 , n2 , n1); 

    printf("The HCF of %d and %d is %d" , n1 , n2 , H);

    return 0;
}