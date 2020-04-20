#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void Add()
{
double a,b,c,k;
do{
printf("a=");
k=scanf("%lf",&a);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
do{
printf("b=");
k=scanf("%lf",&b);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
c=a+b;
printf("%.2lf+%.2lf=%.2lf\n",a,b,c);
}
void Subtract()
{
double a,b,c,k;
do{
printf("a=");
k=scanf("%lf",&a);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
do{
printf("b=");
k=scanf("%lf",&b);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
c=a-b;
printf("%.2lf-%.2lf=%.2lf\n",a,b,c);
}
void Multiply()
{
double a,b,c,k;
do{
printf("a=");
k=scanf("%lf",&a);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
do{
printf("b=");
k=scanf("%lf",&b);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
c=a*b;
printf("%.2lf*%.2lf=%.2lf\n",a,b,c);
}
void Devide()
{
double a,b,c,k;
do{
printf("a=");
k=scanf("%lf",&a);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
do{
printf("b=");
k=scanf("%lf",&b);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
c=a/b;
printf("%.2lf/%.2lf=%.2lf\n",a,b,c);
}
void Residue()
{
double a,b,c,k;
do{
printf("a=");
k=scanf("%lf",&a);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
do{
printf("b=");
k=scanf("%lf",&b);
if(!k) printf("Blad formatu \n");
fflush(stdin);
}while(!k);
c=fmod(a,b);
printf("%.2lf | %.2lf=%.2lf\n",a,b,c);
}
int main()
{
int button;
do{
printf("Wybierz akcje:\n+ Dodawanie\n- Odejmowanie\n* Mnozenie\n/ Dzielenie\n| Reszta z dzielenia\n");
button=getch();
switch(button)
{
case 43:
{
Add();
break;
}
case 45:
{
Subtract();
break;
}
case 42:
{
Multiply();
break;
}
case 47:
{
Devide();
break;
}
case 37:
{
Residue();
break;
}
}
}while(button!=27);
return 0;
}
