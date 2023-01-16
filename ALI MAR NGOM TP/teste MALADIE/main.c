#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3,m4,s,n,p;

    printf("SALUT CHER PATIENT VEUILLEZ NOUS INDIQUER VOS SYMPTOMES\n");
    printf("1 : mal de tête\n 2 : fièvre\n 3 : nausées\n 4 : éternuement\n 5 : terminé\n");

    m1 = 0;    m2 = 0;    m3 = 0;    m4 = 0;    s = 0;

     do{
        do {
       printf("entrer votre choix : \n ");
        scanf("%d",&n);}
        while (n<=0 || n>5);

        switch (n) {
    case 1 :
        m1 = 1 ; break;
    case 2 :
        m2 = 1 ; break;
    case 3 :
        m3 = 1 ; break;
    case 4 :
        m4 = 1 ; break;
    case 5 :
        s = 1 ; break; }
    }
    while ( s != 1 );

    p = m1 + m2 + m3 + m4 ;
    printf("\n------------------------------------------ \n");
    if ( p == 4 )
        printf("\n DAGUA CORONA \n");

    else {
        if ( m2 == 1) {
             if (m1 == 1)
                 if(m3 == 1) {
                         printf(" vous avez la Typhoïde"); s  = 2 ; }
                 else if(m4 == 1 ) {
                         printf("vous avez le Palu");   s  = 2 ; }
                          else
                         printf("Appeler un medecin\n");
             else if (m3 == 1)
                      if(m4 == 1)
                         printf("vous avez la Malaria");
                      else
                         printf("Appeler un medecin\n");
        }
        else
            if(m1 == 1)
                 if(m3 == 1)
                      if(m4 == 1)
                         printf("vous avez la Grippe");
                       else
                         printf("Appeler un medecin\n");
                 else
                         printf("Appeler un medecin\n");
            else
                         printf("Appeler un medecin\n");

    }
    return 0;
}
