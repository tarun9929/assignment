#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character\n");
    scanf("%c" , &ch);

    printf("%c\n" , ch);
    if(ch >= 'a' && ch <= 'z'){
        printf("LowerCase\n");
    }
    else if(ch >= 'A' && ch <= 'Z'){
        printf("UpperCase\n");
    }
    else if(ch >= '0' && ch <= '9'){
        printf("Digit\n");
    }
    else{
        printf("Special Character\n");
    }

    return 0;
}