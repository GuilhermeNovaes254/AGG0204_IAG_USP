/*Guilherme do Carmo Novaes NoUSP: 5916400*/
/*EP1 - Descobre o maior sismo */

#include<stdio.h>
#include<stdlib.h>

int main(){

 float lon,lat,lonr,latr;
 int cod1,cod2,alt,cod1r,cod2r,altr;
 long int pop,popr;
 char nome[60],nomer[60];


while((scanf("%f %f %d %d %d %ld %[^\n]", &lon, &lat, &cod1, &cod2, &alt, &pop, nome))==7){

      //compara a linha registrada com a anterior,
      // registra se for de magnitude maior que o anterior
      if(pop < popr){
          latr  = lat;
          lonr  = lon;
          cod1r  = cod1;
          cod2r  = cod2;
          popr  = pop;
          altr = alt;
          strcpy(nomer,nome);
          }


 }//while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7){

 printf("A menor populacao registrada eh = %ld \n",popr);
 printf("Os dados da maior linha registrada sao:\n");
 printf("%f %f %d %d %d %ld %s\n\n", lonr, latr, cod1r, cod2r, altr, popr, nomer);
 system("pause");
 return 0;
}
