#include <stdio.h>

double obliczSRI(double *pa, double *pb)
{
    double x = *pa + *pb;
    double y = *pa - *pb;
    double z = *pa * *pb;
    *pa=x;
    *pb=y;
    return z;
}

int main()
{
    double a = 2.2;
    double b = 6.4;
    double c = obliczSRI(&a,&b);
    printf("a=%lf\n b=%lf\n c=%lf\n",a,b,c);
}
