/*Guilherme do Carmo Novaes NoUSP: 5916400  */
/*EP3magnitude -  separa a magnitude de sismos conforme intervalo definido */

#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define mag1 8 /* define inicio do intervalo a ser analizado*/
#define mag2 9 /* define o final do intervalo a ser analizado*/

int main(){
 float mes=0, dia=0 ,ano=0 ,mag=0 ,prof=0 ,lng=0 ,lat=0;

 while(scanf("%ld %ld %ld %f %f %f %f", &ano, &mes ,&dia ,&lat ,&lng,&prof, &mag)==7){
 /* registra a magnitude do intervalo analizado*/
  if(  mag > mag1  &&  mag <= mag2  )
   printf("%f %f %f\n", lng,lat, mag);
}// while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&lat, &lng, &prof, &mag )==7)

 return 0;
}
