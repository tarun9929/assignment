#include<stdio.h>

int main(){
    
    
    int i = 1;

    while(i < 1000){
        int n;
        int digit = 0;
        n = i;

        int arm = i;
        while(n != 0){
            int c = n % 10;
            digit = digit + (c * c * c);
            n = n / 10;
        }

        if(arm == digit){
            printf("%d " , arm);
        }

        i++;
    }

    return 0;
}