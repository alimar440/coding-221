#include <stdio.h>
#include <stdlib.h>

void affiche (int t[] , int n )
{
    if (n){
    affiche(t , n - 1);
    printf ("%d  ",t[n]);}
    }
int sum(int t[] ,int n){
    if (n==0)
        return t[0];
    return sum(t,n-1) + t[n];
    }
int main()
{
    int n ,i ,tab[100],rech,position,somm;
    printf("donner la taille ");
    scanf("%d",&n);
    for(i = 0 ; i<=n ; i++)
       tab[i]= i  ;
    affiche(tab,n);
    somm = sum(tab,n);
    printf("\n %d ",somm);
    printf("Quel nombre Chercher vous ?\n") ;
    scanf("%d",&rech) ;
    int trouve =0 ;
    int droit = n;
    int gauche = 0;
    while(trouve) {
         int milieu = (gauche + droit )/ 2 ;
        if (tab[milieu] == rech ){
           trouve = 1 ;
           position = milieu ;}
        else
            if(tab[milieu]<rech)
                gauche = milieu + 1 ;
            else
                droit = milieu - 1 ;
    }
    if(trouve == 1)
        printf("trouver \n le nombre se trouve a la position %d \n",position);
    else
        printf("le nombre ne se trouve pas dans le tableau");

    return 0;
}
