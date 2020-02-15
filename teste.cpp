/*Guilherme do Carmo Novaes NoUSP: 5916400  */
/*teste -  separa a magnitude de sismos conforme intervalo definido */

#include <stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
 float mes=0, dia=0 ,ano=0 ,mag=0 ,prof=0 ,lng=0 ,lat=0;

FILE *m56; 
FILE *m67;
FILE *m78;
FILE *m89;
FILE *m9;

m56 = fopen ("m56.txt","w");
m67 = fopen ("m67.txt","w");
m78 = fopen ("m78.txt","w");
m89 = fopen ("m89.txt","w");
m9  = fopen ("m9.txt","w");


 while(scanf("%ld %ld %ld %f %f %f %f", &ano, &mes ,&dia ,&lat ,&lng,&prof, &mag)==7){
  
  if(  mag > 5  &&  mag <= 6  )
   fprintf(m56,"%f %f %f\n", lng,lat, mag);
   
  if(  mag > 6  &&  mag <= 7  )
   fprintf(m67,"%f %f %f\n", lng,lat, mag);
   
  if(  mag > 7  &&  mag <= 8  )
   fprintf(m78,"%f %f %f\n", lng,lat, mag);
   
  if(  mag > 8  &&  mag <= 9  )
   fprintf(m89,"%f %f %f\n", lng,lat, mag);
   
  if(  mag > 9  )
   fprintf(m9,"%f %f %f\n", lng,lat, mag);
}// while(scanf("%f %f %f %f %f %f %f", &mes, &dia ,&ano ,&lat, &lng, &prof, &mag )==7)

fclose (m56);
fclose (m67);
fclose (m78);
fclose (m89);
fclose (m9);

 return 0;
}
