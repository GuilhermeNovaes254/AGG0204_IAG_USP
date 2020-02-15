/*Guilherme do Carmo Novaes NoUSP: 5916400 */
/*EP2 - Calcula a data Juliana e ve a diferença de dias entre 2 datas*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define diainicial 1720982L

int main(){

  long int  data1, data2, dia1, mes1, ano1, dia2, mes2, ano2, res;

  //Entrada do dados via usuario
  printf("Entre com a data 1 (dia mes ano):\n");
  scanf("%ld %ld %ld",&dia1,&mes1,&ano1);

  printf("Entre com a data 2 (dia mes ano):\n");
  scanf("%ld %ld %ld",&dia2,&mes2,&ano2);
  
  //Calcula o dia Juliano para as datas, segundo algoritimo dado
  if(mes1==1 || mes1==2){
   ano1 = ano1 - 1 ;
   mes1 = mes1 + 13;
  }

  else if (mes1>2)
   mes1 = mes1 + 1;
   
   
  if(mes2==1 || mes2==2){
   ano2 = ano2 - 1 ;
   mes2 = mes2 + 13;
  }

  else if(mes2>2)
   mes2 = mes2 + 1;
   
   
  
  data1 = (long int) floor(365.25*ano1) + (long int) floor(30.6001*mes1) + dia1 + diainicial;
  data2 = (long int) floor(365.25*ano2) + (long int) floor(30.6001*mes2) + dia2 + diainicial;
  
  //Calcula a diferença entre as datas calculadas anteriormente
  res   = data1 - data2;
  res   = fabs(res);


  printf("A diferenca entre as datas e': %ld dias.\n",res);
  system("pause");
 return 0;
}
