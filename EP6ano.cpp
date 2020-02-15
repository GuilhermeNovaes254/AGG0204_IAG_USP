/*Monta tabela energia ano*/
/*Arquivo de entrada sismos_novo.txt*/
/*Guilherme do Carmo Novaes  NoUSP: 5916400*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
int   mes=0, dia=0 , ano=827, anor=0;
float lat, lng,prof, mag;
double energia=0, energiar=0;
 
while(scanf("%d %d %d %f %f %f %f", &ano,&mes,&dia,&lat,&lng,&prof,&mag)==7){
  ano = ano - 1900;				
  energia = pow(10,(1.5*mag+4.8));
  
  if(anor == ano)
   energiar= energiar + energia;

  /*caso negativo*/
  else{
   printf("%d	%g\n",anor,energiar);
   energiar=0;
  }
   /*registra para comparação posterior*/
   anor = ano;
   energiar = energia;
 }
 printf("%d	%g",anor,energiar);
 return 0;	
}
