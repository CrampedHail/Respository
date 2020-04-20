#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

void stringlower(int len,char a[len] )
{
    int i;
    for(i=0;i<len;i++)
    {
        a[i]=tolower(a[i]);
    }
}

int main(int argc, const char * argv[])
{
    printf("     ---ZADANIE 1---\n");
    char s1[6],s2[8],s3[10];
    printf(" Podaj tablice s1=");
    scanf("%s", s1);
    fflush(stdin);
    printf(" Podaj tablice s2=");
    gets(s2);
    fflush(stdin);
    printf(" Podaj tablice s3=");
    fgets(s3, 10, stdin);
    fflush(stdin);
    
    
    printf("     ---ZADANIE 2---\n");
    char s4[5],s5[5]="1234",s6[5],s7[8]="tekst";
    strcpy(s4, s5);
    strcpy(s6,s7+2);
    printf("s6=%s\ns7=%s\n",s6,s7);
    
    
    printf("     ---ZADANIE 3---\n");
    char imie[21],nazwisko[10];
    printf(" Podaj imie: ");
    fgets(imie, 10, stdin);
    fflush(stdin);
    printf(" Podaj nazwisko: ");
    fgets(nazwisko, 10, stdin);
    fflush(stdin);
    
    stringlower(10,imie);
    stringlower(10,nazwisko);
    
    imie[0]=toupper(imie[0]);              //Używając systemu macOS nie miałem możliwości
    nazwisko[0]=toupper(nazwisko[0]);      //używania funkcji strlwr
    
    printf("Imie: %s",imie);
    imie[strlen(imie)-1]=32;        //Zamieniam znak konca linii na spacje w zmiennej 'imie'
    printf("Nazwisko: %s", nazwisko);
    strcat(imie, nazwisko);
    imie[strlen(imie)-1]=32;        //Zamieniam znak konca linii na spacje w zmiennej 'imie'
    
    printf("Imie i nazwisko: %s\n",imie);
    
    
    
    printf("     ---ZADANIE 4---\n");
    char lan1[10],lan2[4],z,*p;
    int pozycja;
    printf("Podaj lancuch znakow: ");
    fgets(lan1, 10, stdin);
    fflush(stdin);
    printf("Podaj szukany znak: ");
    scanf("%c",&z);
    fflush(stdin);
    printf("Podaj szukany lancuch: ");
    fgets(lan2, 4, stdin);
    fflush(stdin);
    
    if(strchr(lan1, z))
    {
      
    }
    else
    {
        
    }
    if(strstr(lan1, lan2))
    {
        
    }
    else
    {
        
    }
    
    
    
    printf("     ---ZADANIE 5---\n");
    char a[20],b[20];
    int c;
    printf("Podaj 1 lancuch: ");
    scanf("%s",a);
    fflush(stdin);
    printf("Podaj 2 lancuch: ");
    scanf("%s",b);
    fflush(stdin);
    c=strcmp(a, b);
    if(c>0) printf("%s\n%s\n",b,a);
    else if (c==0) printf("%s (lanuchy sa identyczne)",a);
    else printf("%s\n%s\n",a,b);
    
    
    
    
    
    
    
    return 0;
}
