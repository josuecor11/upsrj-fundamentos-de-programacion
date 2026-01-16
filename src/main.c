#include <stdio.h>

float area(float l){
    float are = l * l;
    return are;
}

float volumen(float l){
    float volume = l * l * l;
    return volume;
}

int main(int argc, char *argv)
{
    float l = 0;
    
    printf("Ingrese la medida del lado del cuadrado\n");
    scanf("%f", &l);
    
    float a = area(l);
    float v = volumen(l);

    printf("El area de el cuadrado es de : %f \nEl volumen del cubo es de : %f\n", a, v);

    return 0;
}