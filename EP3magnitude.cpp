/*Guilherme do Carmo Novaes NoUSP: 5916400  */
/*EP3profundidade - separa a profundidade de sismos conforme intervalo definido */

#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define prof1 600 /* define inicio do intervalo a ser analizado*/
#define prof2 700 /* define o final do intervalo a ser analizado*/

int main(){
 float mes=0, dia=0 ,ano=0 ,mag=0 ,prof=0 ,lng=0 ,lat=0;

 while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&lat, &lng, &prof, &mag )==7){
  /* registra a profundidade do intervalo analizado*/
  if(  prof > prof1  &&  prof <= prof2  )
   printf("%f %f %f\n", lng,lat, prof);             
 } //while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&lat, &lng, &prof, &mag )==7)
 
 return 0;
}
