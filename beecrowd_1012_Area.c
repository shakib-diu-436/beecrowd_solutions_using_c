#include<stdio.h>
int main(){
    float A,B,C,triangle,radius,trapezium,square,ractangle;
    scanf("%f %f %f",&A, &B, &C);
    triangle = (A*C)/2;
    radius = 3.14159*C*C;
    trapezium = ((A+B)/2)* C;
    square = B*B;
    ractangle = A*B;
    printf("TRIANGULO: %.3f\n",triangle);
    printf("CIRCULO: %.3f\n",radius);
    printf("TRAPEZIO: %.3f\n",trapezium);
    printf("QUADRADO: %.3f\n",square);
    printf("RETANGULO: %.3f\n",ractangle);
    return 0;
}
