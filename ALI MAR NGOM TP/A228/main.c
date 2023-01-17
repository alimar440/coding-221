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
    return sum(t,n-1) + t[n-1];
    }
int dicho(int t[] ,int n, int reche ,int droite , int gauche){
    int milieu = (droite + gauche ) / 2;
     if (t[milieu]== reche)
        return milieu ;
     else
        if(gauche<=droite){
           if(t[milieu]<reche) {
              return dicho(t, milieu + 1 , reche , droite , milieu+1 ) ;
            }
           else
              return dicho(t,milieu - 1 , reche , milieu -1 , gauche );

        }
}
int main()
{
    int n ,i ,tab[100],rech,position,somm ;
    int mili ,t ;
    printf("donner la taille \n");
    scanf("%d",&n);
    for(i = 0 ; i<=n ; i++)
       tab[i]= i+2  ;
    affiche(tab,n);
    somm = sum(tab,n);
    printf("\nla somme est  %d \n ",somm);
    printf("Quel nombre Chercher vous ?\n") ;
    scanf("%d",&rech) ;
    int recherche = dicho(tab,n,rech,n,0);
    printf(" trouver a la position  %d ",recherche-1);
    return 0 ;
}
