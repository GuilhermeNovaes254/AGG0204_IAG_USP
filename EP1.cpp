/*Guilherme do Carmo Novaes NoUSP: 5916400*/
/*EP1 - Descobre o maior sismo */

#include<stdio.h>
#include<stdlib.h>

int main(){
 float mes, dia ,ano ,mag ,prof ,lng ,lat,//Variaveis responsaveis pela linha a ser analizada
       mesr, diar, anor, magr=0, profr, lngr, latr;//Variaveis que anexam a linha correspondente a maior magnitude registrada


 while(scanf("%f %f %f %f %f %f %f",&ano, &mes, &dia,&lng ,&lat,&prof,&mag)==7){

      //compara a linha registrada com a anterior,
      // registra se for de magnitude maior que o anterior
      if(mag > magr){
          magr  = mag;
          mesr  = mes;
          diar  = dia;
          anor  = ano;
          magr  = mag;
          profr = prof;
          lngr  = lng;
          latr  = lat;
          }


 }//while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&mag ,&prof ,&lng ,&lat)==7){

 printf("A maior magnitude registrada eh = %f \n",magr);
 printf("Os dados da maior linha registrada sao:\n");
 printf("%f %f %f %f %f %f %f\n", mesr, diar ,anor ,magr ,profr ,lngr ,latr);
 system("pause");
 return 0;
}
