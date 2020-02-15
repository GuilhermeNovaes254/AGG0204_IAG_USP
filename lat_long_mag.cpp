//Guilherme do Carmo Novaes NoUSP: 5916400
//separa os sismos por magnitudes

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int datajuliano(int mes, int dia, int ano);

int main(){
    
 int mes=0, dia=0, ano=0;
 float  mag=0 ,prof=0 ,lng=0 ,lat=0;

 while(scanf("%d %d %d %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7)
  if(mag > 5 && mag <= 6)
   printf("%f %f %f\n", lng,lat,mag);
 
 printf("\n");                  
 while(scanf("%d %d %d %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7)
  if(mag > 6 && mag <= 7)
   printf("%f %f %f\n", lng,lat,mag);  
 
 printf("\n");  
 while(scanf("%d %d %d %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7)
  if(mag > 7 && mag <= 8)
   printf("%f %f %f\n", lng,lat,mag);
 
 printf("\n"); 
 while(scanf("%d %d %d %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7)
  if(mag > 8 && mag <= 9)
   printf("%f %f %f\n", lng,lat,mag);
   
 printf("\n");  
 while(scanf("%d %d %d %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7)
  if(mag > 9)
   printf("%f %f %f\n", lng,lat,mag);
   
 return 0;
}   
