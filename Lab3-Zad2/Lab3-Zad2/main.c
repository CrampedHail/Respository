#include <stdio.h>

int main()
{
int tab[10]={1,4,3,0,2,3,10,9,12,-32};
int *ptab,i;
ptab = &tab;
int max=*ptab;
int min=*ptab;

for(i=0;i<10;i++,ptab++)
{
    if(*ptab>max)
    max=*ptab;
    
    if(*ptab<min)
    min=*ptab;
}

printf("wartosc max:%d wartosc min:%d ",max,min);

}
