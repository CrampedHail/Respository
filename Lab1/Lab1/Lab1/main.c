#include<stdio.h>
#include<time.h>
#include<stdlib.h>


    void print2D(int n, int m, double tab[n][m])
    {

        int i, j;
        for(i=0;i<n;i++)
        {
            if(i==0) printf("tab=|");
            else printf("    |");
            for(j=0;j<m;j++)
            {
                printf(" %.2lf ",tab[i][j]);
                if(j==n-1) printf("|\n");
            }
        }
    }


    void read2D(int n, int m, double tab[n][m])
    {
        int i, j, k;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                do{
                    printf("tab[%d][%d]:", i, j);
                    k=scanf("%lf", &tab[i][j]);
                    if(!k) printf("Blad formatu\n");
                    fflush(stdin);
                }while(!k);
            }
        }
    }

    void rowSwap(int n, int m, double tab[n][m])
    {
        int row1, row2, k, i;
        do{
            printf("Podaj 1 wiersz do zamiany:");
            k=scanf("%d", &row1);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
        }while(!k || row1>2 || row1<0);
        do{
            printf("Podaj 2 wiersz do zamiany:");
            k=scanf("%d", &row2);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
        }while(!k || row2>2 || row2<0);
        for(i=0;i<n;i++)
        {
            double temp;
            temp=tab[row1][i];
            tab[row1][i]=tab[row2][i];
            tab[row2][i]=temp;
        }
    }

    void colSwap(int n, int m, double tab[n][m])
    {
        int col1, col2, k, i;
         do{
             printf("Podaj kolumne do zamiany:");
             k=scanf("%d", &col1);
             if(!k) printf("Blad formatu\n");
             fflush(stdin);
         }while(!k || col1>2 || col1<0);
         do{
             printf("Podaj kolumne do zamiany:");
             k=scanf("%d", &col2);
             if(!k) printf("Blad formatu\n");
             fflush(stdin);
         }while(!k || col2>2 || col2<0);

         for(i=0;i<n;i++)
         {
             double temp;
             temp=tab[i][col1];
             tab[i][col1]=tab[i][col2];
             tab[i][col2]=temp;
         }
    }


    void transpose2D(int n, int m, double tab[n][m])
    {
        int i, j;
        double temp;
        for(i=0;i<ceil(n/2);i++)
        {
            for(j=0;j<floor(m/2);j++)
            {
                temp=tab[i][j];
                tab[i][j]=tab[j][i];
                tab[j][i]=temp;
            }
        }
    }

    double det3x3(double tab[3][3])
    {
        double det,d[6];
        d[0]=(tab[0][0]*tab[1][1]*tab[2][2]);
        d[1]=(tab[0][1]*tab[1][2]*tab[2][0]);
        d[2]=(tab[0][2]*tab[1][0]*tab[2][1]);
        d[3]=(tab[0][2]*tab[1][1]*tab[2][0]);
        d[4]=(tab[0][0]*tab[1][2]*tab[2][1]);
        d[5]=(tab[0][1]*tab[1][0]*tab[2][2]);
        det=d[0]+d[1]+d[2]-d[3]-d[4]-d[5];
        return det;
    }


    void transform2Dto1D(int n, int m, int a[n][m], int b[n*m])
    {
        int i, j, l=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                b[l++]=a[i][j];
            }
        }
    }




    int main()
    {
        printf("              ---ZADANIE 1---\n");
        int n,m,i,j,k;

        do{
            printf("Podaj ilosc wierszy tablicy:");
            k=scanf("%d", &n);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
            printf("Podaj ilosc kolumn tablicy:");
            k=scanf("%d", &m);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
        }while(!k || n<=0 || m<=0);


        double tab[n][m];
        read2D(n, m, tab);
        print2D(n, m, tab);

        printf("              ---ZADANIE 2---\n");
        double sumR=0.0,sumC=0.0,sumD=0.0,t[3][3]={1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
        print2D(3, 3, t);
        int r, c;
        do{
            printf("Podaj wiersz do zsumowania:");
            k=scanf("%d", &r);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
        }while(!k || r>2 || r<0);
        do{
            printf("Podaj kolumne do zsumowania:");
            k=scanf("%d", &c);
            if(!k) printf("Blad formatu\n");
            fflush(stdin);
        }while(!k || c>2 || c<0);


        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(r==i) sumR=sumR+t[i][j];
                if(c==j) sumC=sumC+t[i][j];
                if(j==i) sumD=sumD+t[i][j];
            }
        }
        printf("Suma wybranego wiersza=%.2lf\n",sumR);
        printf("Suma wybranej kolumny=%.2lf\n",sumC);
        printf("Suma przekatnej=%.2lf\n",sumD);


        printf("              ---ZADANIE 3---\na)\n");
        
        colSwap(n, m, tab);
        print2D(n, m, tab);

        printf("b)\n");
        rowSwap(n, m, tab);
        print2D(n, m, tab);
        
        // Do podpunktu c i d użyłem tablicy z zadania 2 gdyż ona zawsze bedzie miała rozmiary 3x3
        printf("c)\n");
        transpose2D(n, m, t);
        print2D(n, m, tab);
        
        printf("d)\n");
        print2D(3, 3, t);
        double det=det3x3(t);
        printf("Wyznacznik=%.2lf\n",det);
        
        
        
        printf("              ---ZADANIE 4---\n");
        n=4;
        m=4;
        int a[n][m],b[n*m];
        srand(time(0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                a[i][j]=rand() %10;
            }
        }
        for(i=0;i<n;i++)
        {
            if(!i) printf("a=|");
            else printf("  |");
            for(j=0;j<m;j++)
            {
                printf(" %d ",a[i][j]);
            }
            printf("|\n");
        }
        transform2Dto1D(n, m, a, b);
        for(i=0;i<n*m;i++)
        {
            if(!i) printf("b=|");
            printf(" %d ", b[i]);
            if(i==(n*m)-1) printf("|\n");
        }
        
        
        

        return 0;
    }
