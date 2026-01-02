#include<stdio.h>
int main(){
   float sum;
   int code,product;
   float amount;
   scanf("%d %d %f",&code,&product,&amount);

   int code1,product1;
   float amount1;
   scanf("%d %d %f",&code1,&product1,&amount1);

   sum = (product*amount)+(product1*amount1);
   printf("VALOR A PAGAR: R$ %.2f\n",sum);
}
