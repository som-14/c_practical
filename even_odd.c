#include <stdio.h>

int isEven(int n){
    if(n % 2 == 0){
        return 1;
    }
    
    return 0;
}

int main()
{
    if (isEven(8)) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}