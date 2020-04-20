#include <stdio.h>

void wczyt2D(int n,int tab[n][3])
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            do{
                printf("Podaj tab[%d][%d]=",i,j);
                k=scanf("%d",&tab[i][j]);
                if(!k) printf("Blad formatu\n");
                fflush(stdin);
            }while(!k);
        }
    }
}

void druk2D(int n, int tab[n][3])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("tab[%d][%d]=%d\n",i,j,tab[i][j]);
        }
    }
}

void wczyt2DC99(int n, int m, int tab[n][m])
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            do{
                printf("Podaj tab[%d][%d]=",i,j);
                k=scanf("%d",&tab[i][j]);
                if(!k) printf("Blad formatu\n");
                fflush(stdin);
            }while(!k);
        }
    }
}

void druk2DC99(int n, int m, int tab[n][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("tab[%d][%d]=%d\n",i,j,tab[i][j]);
        }
    }
}


int main()
{
    int xx[2][3],yy[3][3];
    wczyt2D(2, xx);
    wczyt2D(3, yy);
    druk2D(2, xx);
    druk2D(3, yy);
    
    int p[2][2],q[3][3];
    wczyt2DC99(2,2, p);
    wczyt2DC99(3,3, q);
    druk2DC99(2,2, p);
    druk2DC99(3,3, q);
    
    return 0;
}
