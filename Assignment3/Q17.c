#include<stdio.h>

int main(){
    int side1 , side2 , side3;

    printf("Enter a number\n");
    scanf("%d" , &side1);
    printf("Enter a number\n");
    scanf("%d" , &side2);
    printf("Enter a number\n");
    scanf("%d" , &side3);

    if(side1 != 0 && side2 != 0 && side3 != 0){
        printf("it's a valid Triangle\n");
    }
    else{
        printf("not a valid Triangle\n");
    }

    return 0;
}


// *****
// ** **
// *   *