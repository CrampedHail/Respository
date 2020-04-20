#include <stdio.h>

int main()
{
    int tab[5];
    int k,i;
    for(i=0;i<5;i++)
    do{
    k=scanf("%d",&tab[i]);
    }while(k==0);

    int *ptab;
    ptab=&tab;
    
    system("cls");
    
    for(i=0;i<5;i++,ptab++)
    {
    printf(" %d ",*ptab);
    }

}
