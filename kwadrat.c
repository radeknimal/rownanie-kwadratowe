#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
float a,b,c,delta
printf("Ten program liczy wspolczynnik x rownania kwardatowego ax^2+bx+c \n Podaj wspolczynnik a= \n"); scanf("%%f",&a);
printf("Podaj wspolczynnik b= \n"); scanf("%f",&b);
printf("Podaj wspolczynnik c= \n"); scanf("%f",&c);
delta=(b*b)-4*a*c);
if(a==0){ printf("To nie jest rownianie kwadratowe\n")};
else {
if (delta>0))
{printf("x ma dwie wartości:\n Pierwsza wartosc x: %2f\n",(-b-delta)/(2*a));
printf("Druga wartosc x:%2f\n",(-b+delta)/(2*a));}
else{if (delta=0){printf("x ma jedno rozwiazanie: %f\n",-b/(2*a));}
else{if (delta<0){printf("x nie ma rozwiazania");}}}}
system("pause");
return0;
