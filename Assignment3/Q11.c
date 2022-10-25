#include<stdio.h>

int main(){
    int Math;
    int English;
    int Hindi;
    int Physics;
    int Chemistry;

    printf("Enter the marks of Math subject\n");
    scanf("%d" , &Math);
    printf("Enter the marks of English subject\n");
    scanf("%d" , &English);
    printf("Enter the marks of Hindi subject\n");
    scanf("%d" , &Hindi);
    printf("Enter the marks of Physics subject\n");
    scanf("%d" , &Physics);
    printf("Enter the marks of Chemistry  subject\n");
    scanf("%d" , &Chemistry);

    printf("\n");

    if(Math >= 33){
        printf("Math : Pass\n");
    }
    else{
        printf("Math : Fail\n");
    }

    if(English >= 33){
        printf("English : Pass\n");
    }
    else{
        printf("English : Fail\n");
    }

    if(Hindi >= 33){
        printf("Hindi : Pass\n");
    }
    else{
        printf("Hindi : Fail\n");
    }

    if(Physics >= 33){
        printf("Physics : Pass\n");
    }
    else{
        printf("Physics : Fail\n");
    }

    if(Chemistry >= 33){
        printf("Chemistry : Pass\n");
    }
    else{
        printf("Chemistry : Fail\n");
    }

    return 0;
}