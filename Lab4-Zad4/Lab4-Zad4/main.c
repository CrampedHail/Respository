#include <stdio.h>

 int *computeIR (int a,int b)
{
    int x[2]={a*b,a%b};
    
    return &x[0];
}


int main()
{
    printf("Iloraz=%d   Reszta=%d\n" ,*(computeIR(9,3)),*(computeIR(9,3)+1));
    printf("Iloraz=%d   Reszta=%d\n" ,*(computeIR(10,6)),*(computeIR(10,6)+1));

    return 0;
}
