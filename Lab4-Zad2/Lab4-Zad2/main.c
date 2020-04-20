#include <stdio.h>

void zamien(int *px,int *py)
{
    int temp;
    temp=*px;
    *px=*py;
    *py=temp;
}

int main()
{
    int x=1,y=3,a=2,b=4;
    printf("Przed zmiana: x=%d  y=%d\n",x,y);
    zamien(&x, &y);
    printf("Po zmianie:   x=%d  y=%d\n",x,y);
    
    
    printf("Przed zmiana: a=%d  b=%d\n",a,b);
    zamien(&a, &b);
    printf("Po zmianie:   a=%d  b=%d\n",a,b);
    
    return 0;
}
