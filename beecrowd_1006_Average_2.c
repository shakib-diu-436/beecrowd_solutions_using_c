#include<stdio.h>
int main(){
    float A;
    scanf("%f",&A);
    float B;
    scanf("%f",&B);
    float C;
    scanf("%f",&C);
    float X = ((A*2)+(B*3)+(C*5))/(2+3+5);
    printf("MEDIA = %.1f\n", X);
    return 0;
}
