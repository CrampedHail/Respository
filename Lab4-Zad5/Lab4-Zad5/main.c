#include <stdio.h>

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

int sumInd(int r, int a[r],int ind1,int ind2)
{
    int i,sw=0,si=0;
    for(i=0;i<r;i++)
    {
        sw+=a[i];
        if(i>ind1 && i<ind2) si+=a[i];
    }
    int tab[2]={sw,si};
    return &tab[0];
}

int main()
{
    int x[5],y[6];
    int *px,*py;
    wczyt1D(5, x);
    wczyt1D(6, y);
    
    px = sumInd(5,x,1,4);
    printf("Suma wszystkich elementów=%d   Suma z zakresu ineksow=%d",*px,*px+1);
    py = sumInd(6,y,0,3);
    printf("Suma wszystkich elementów=%d   Suma z zakresu ineksow=%d",*py,*(py)+1);
    
    return 0;
}
