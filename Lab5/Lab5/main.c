#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
#include<curses.h>
#include<string.h>

int main()
{
    char c;
    printf("         ---ZADANIE 1---\n");
    printf("Scanf() Podaj znak: ");
    fflush(stdin);
    scanf("%c",&c);
    printf("Podany znak: %c\n",c);
    printf("Getchar() Podaj znak: ");
    fflush(stdin);
    c=getchar();
    printf("Podany znak: %c\n",c);
    printf("Getch() Podaj znak: ");
    fflush(stdin);
    c=getch();
    printf("Podany znak: %c\n",c);
    
    
    printf("         ---ZADANIE 2---\n");
    int i;
    for(i=32;i<=255;i++)
    {
        if(i==32) printf("___________\n");
        else printf("+---------+\n");
        if (i>=32 && i<=99) printf("| %c |  %d |\n",i,i);
        else printf("| %c | %d |\n",i,i);
        if(i==255) printf("-----------\n");
    }
    
    
    printf("         ---ZADANIE 3---\n");
    printf(" W %ca%ccuchu znak%cw mog%c si%c znale%c%c znaki drukowalne i kody steruj%cce",136,228,162,165,169,171,134,165);
    
    
    
    printf("         ---ZADANIE 4---\n");
    char z;
    printf("Podaj znak: ");
    scanf("%c",&z);
    fflush(stdin);
    printf("Znak jest alfanumeryczny: ");
    if(isalnum(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest litera: ");
    if(isalpha(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest sterujący: ");
    if(iscntrl(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest cyfra dziesietna: ");
    if(isdigit(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak ma reprezentacje graficzna: ");
    if(isgraph(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest mala litera: ");
    if(islower(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest drukowalny: ");
    if(isprint(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest znakiem interpunkcyjnym: ");
    if(ispunct(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest znakiem bialym: ");
    if(isspace(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest duza litera: ");
    if(isupper(z)) printf("prawda\n");
    else printf("falsz\n");
    printf("Znak jest cyfra szesnastkowa: ");
    if(isxdigit(z)) printf("prawda\n");
    else printf("falsz\n");
    
    
    
    printf("         ---ZADANIE 5---\n");
    char mala,duza;
    do{
        printf("Podaj mala litere: ");
        scanf("%c",&mala);
        fflush(stdin);
        if(!islower(mala)) printf("To nie jest mala litera\n");
        fflush(stdin);
    }while(!islower(mala));
    
    printf("Mala litera: %c -> toupper() -> %c\n",mala,toupper(mala));
    
    do{
        printf("Podaj duza litere: ");
        scanf("%c",&duza);
        fflush(stdin);
        if(!isupper(duza)) printf("To nie jest duza litera\n");
        fflush(stdin);
    }while(!isupper(duza));
    
    printf("Duza litera: %c -> tolower() -> %c\n",duza,tolower(duza));
    
    
    printf("         ---ZADANIE 6---\n");
    char haslo[5]={"pwsz"},wpisane[5];
    int niepoprawne=1;
    for(i=0;i<3;i++)
    {
        printf("Podaj haslo: ");
        scanf("%s",wpisane);
        fflush(stdin);
        niepoprawne=strcmp(haslo, wpisane);
        if(!niepoprawne) {printf("Wpisano poprawne haslo\n");break;}
        else printf("Wpisano niepoprawne haslo\n");
    }
    if(niepoprawne)
    {
        printf("Wykorzystano wszystkie próby na wpisanie hasla - nie uzyskano dostępu\n");
    }
    else
    {
        printf("Uzyskano dostep\n");
    }
    
    
    printf("         ---ZADANIE 7---\n");
    int ch;
    while ((ch=getchar())!=EOF);    
    {
        printf("Podany znak: %c",ch);
    }
    
    printf("         ---ZADANIE 8---\n");
    while ((printf("\n"),ch=getchar())!=EOF)
    {
        if(isdigit(ch)||isalpha(ch)) printf("\n%c",toupper(ch));
        
    }
    
    
    
    return 0;
}
