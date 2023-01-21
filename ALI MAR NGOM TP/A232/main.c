#include <stdio.h>
#include <stdlib.h>

int remplicage (int t[] , int n){
    for(int i = 0 ; i<n ; i++)
        scanf("%d",t[i]);
    }

void tri_a_bulle(int n , int t[]){
  int dernier = n-2 ;
  int temp ;
  while (dernier>0){
    for(int i=0;i<=n-1;i++)
       if (t[i]>t[i+1]){
             temp = t[i+1];
            t[i+1] = t[i] ;
            t[i] = temp ;  }
    dernier--; }
  }

void insert( int t[] , int *n , int val){
    for(int i = 0 ; i<n ; i++){
        if(t[i]<val && t[i+1]>val) {
            for(int j = i+1 ; j<=n ; j++)
                t[n-j] = t[n-j-1];
            t[i+1] = val ;
        }
    }
    n = n + 1 ;
}


