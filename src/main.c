#include <stdio.h>

int is_even(int num)
{
    if (num % 2 == 0) {
       return 1; 
    }else{
        return 0;
    }
}


int main()
{
    int num;
    int parimp;
    
    printf("Ingrese un numero\n");
    scanf("%i", & num);
    
    parimp = is_even(num);

    if(parimp == 1){
        printf("El numero es par\n");
    }else{
        printf("El numero es impar\n");
    }

    return 0;
}