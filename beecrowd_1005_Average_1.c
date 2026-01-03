#include<stdio.h>
int main(){
    float A;
    scanf("%f",&A);
    float B;
    scanf("%f",&B);
    float X = ((A*3.5)+(B*7.5))/(3.5+7.5);
    printf("MEDIA = %.5f\n", X);
    return 0;
}
