#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define true 1
#define false 0
typedef int bool;

bool JeSuisUnSigneDePonctuation(char c)
{
    if (c == ',' || c == '.' || c == '!' || c == '?' || c == ';')
        return true;
    else
        return false;
}

bool JeSuisUnChiffre(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    else
        return false;
}

void lirePhrase(char maPhrase[])
{
    int longueur = strlen(maPhrase);
    int nbSignesPonctuation = 0;
    int nbChiffres = 0;
    int autres = 0;
    char lettres = 0;

    for (int i = 0; i < longueur; i++)
        {
            if (JeSuisUnSigneDePonctuation(maPhrase[i]))
               nbSignesPonctuation++;
           else
                if (JeSuisUnChiffre(maPhrase[i]))
                     nbChiffres++;
                else
                    if (isalpha(maPhrase[i]))
                        lettres++;
                    else
                        autres++;
        }
    printf("Longueur de la phrase : %d\n", longueur);
    printf("Nombre de signes de ponctuation : %d\n", nbSignesPonctuation);
    printf("Nombre de chiffres : %d\n", nbChiffres);
    printf("Nombre de lettres : %d\n", lettres);
    printf("Autres caractaires se trouvant dans la phrase : %d\n", autres);

}

int main()
{
    char maPhrase[100] ;
    printf("entrer une phrase \n");
    gets(maPhrase);
    lirePhrase(maPhrase);
return 0;
}

