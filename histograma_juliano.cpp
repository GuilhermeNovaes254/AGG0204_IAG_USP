//Guilherme do Carmo Novaes NoUSP: 5916400
//Plota histograma com a distribuição do numero de sismos por dia

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long int datajuliano(long int mes,long int dia,long int ano);

int main(){

 long int dataj=0, datajr=0, J111900=0;
 long int sismo=0 ,mes=0, dia=0, ano=0;
 float  mag=0 ,prof=0 ,lng=0 ,lat=0;

 J111900 = datajuliano(1,1,1900);

 while(scanf("%ld %ld %ld %f %f %f %f", &ano, &mes ,&dia ,&lng ,&lat,&prof, &mag)==7){

   ano   = (ano + 1900);
   dataj = (datajuliano(mes,dia,ano) - J111900);//problema está aqui
  
   //procura se já tem algum sismo registrado na mesma data
   //caso positivo


    if(dataj == datajr)
        sismo++;

   //caso negativo
    else{
        printf("%ld %ld\n",datajr,sismo);
        sismo=1;
        }

   //registra para comparação posterior
   datajr = dataj;

  }
 return 0;
}



/**************************************************************************/
long int datajuliano (long int mes,long int dia,long int ano)
{
 long int dataj=0;

 if(mes==1 || mes==2){
    mes = mes + 13;
 }

 else{
    mes++;
    ano--;
   }

 dataj =(long int) floor(365.25*ano) + (long int) floor(30.6001*mes) + dia + 1720982;
 
 return dataj;
}
