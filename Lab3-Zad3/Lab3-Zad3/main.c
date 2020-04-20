#include <stdio.h>

int main()
{
int tab[10]={1,4,3,0,2,3,10,9,12,-32};
int *ptab,i,j;
ptab = tab;
int temp;

for(i=0;i<10;i++)
{
    for(j=0;j<9;j++)
    {
        if(*(ptab+j)>*(ptab+j+1))
        {
        temp = *(ptab+j);
        *(ptab+j)=*(ptab+j+1);
        *(ptab+j+1)=temp;
        }
    }

}

for(i=0;i<10;i++)
{
    printf(" %d ",*(ptab+i));
}


}
