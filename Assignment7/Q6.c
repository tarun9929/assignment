#include<stdio.h>

int main(){
    int i = 2;

    while(i <= 100){
        int n = i;

        int j = 2;

        while(j < n){
            if(n % j == 0){
                break;
            }
            j++;
        }

        if(j == n){
            printf("%d " , n);
        }


        i++;
    }

    return 0;
}