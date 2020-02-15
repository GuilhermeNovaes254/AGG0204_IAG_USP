/*Monta tabela mes ano sismos*/ 
/*Arquivo de entrada sismos_novo.txt*/
/*Guilherme do Carmo Novaes  NoUSP: 5916400*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
int   mes=13, dia=0 , ano=0, anor=0,mesr=0,i=1;
float lat, lng,prof, mag;
double energiar=0, energia=0;
 
while(scanf("%d %d %d %f %f %f %f", &ano,&mes,&dia,&lat,&lng,&prof,&mag)==7){
  ano = ano - 1900;		
  energia = pow(10,(1.5*mag+4.8));	
								
  if(mesr == mes)
   energiar = energiar + energia;

  /*caso negativo*/
  else{
   printf("%d %g\n",i,energiar);
   energia=0;    
   i++;   
  }
   /*registra para comparação posterior*/
   mesr = mes;
   anor = ano;
   energiar= energia;
 }	
 
 printf("%d %g",i,energiar);
   
 return 0;	
}
