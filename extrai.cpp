#include<stdio.h>
#include<stdlib.h>

int main(){
 float mes, dia ,ano ,mag ,prof ,lng ,lat;

 while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7){
  printf("%f %f\n",lng,lat);     
 } 
 
 return 0;
}
