#include <stdio.h>
#include<math.h>
#define N 5
void wczyt1D(int r, int tab[r])
{
    int i,k;
    for(i=0;i<r;i++)
    {
        do{
            printf("Podaj tab[%d]=",i);
            k=scanf("%d",&tab[i]);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
        }while(!k);
    }
}

void druk1D(int r, int tab[r])
{
    int i;
    for(i=0;i<r;i++)
    {
        printf("tab[%d]=%d\n",i,tab[i]);
    }
}

unsigned int silnia(unsigned int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}

double pierw5(double x)
{
    x=pow(x,1.0/5.0);
    return x;
}

double suma(int r, int tab[r])
{
    int i;
    double s=0;
    for(i=1;i<=r;i++)
    {
        s+=pierw5(tab[i-1])/silnia(i);
    }
    return s;
}



int main()
{
    printf("      ---ZADANIE 1---\n");
    int x[N];
    double s;
    wczyt1D(N,x);
    s=suma(N,x);
    printf("Suma=%.2lf",s);
    
    
    
    return 0;
}
