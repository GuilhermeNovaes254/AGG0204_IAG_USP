/*Monta tabela mes ano sismos*/ 
/*Arquivo de entrada sismos_novo.txt*/
/*Guilherme do Carmo Novaes  NoUSP: 5916400*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	
int   mes=13, dia=0 , ano=3000, sismo=0, anor=0,mesr;
float lat, lng,prof, mag;
 
while(scanf("%d %d %d %f %f %f %f", &ano,&mes,&dia,&lat,&lng,&prof,&mag)==7){
  ano = ano - 1900;			
								
  if(mesr == mes)
   sismo++;

  /*caso negativo*/
  else{
   switch(mesr){
    case 1  : printf("%d.1	%d\n",anor,sismo);break;
    case 2  : printf("%d.2	%d\n",anor,sismo);break;
    case 3  : printf("%d.3	%d\n",anor,sismo);break;
    case 4  : printf("%d.4	%d\n",anor,sismo);break;
    case 5  : printf("%d.5	%d\n",anor,sismo);break;
    case 6  : printf("%d.6	%d\n",anor,sismo);break;
    case 7  : printf("%d.7	%d\n",anor,sismo);break;
    case 8  : printf("%d.8	%d\n",anor,sismo);break;
    case 9  : printf("%d.9	%d\n",anor,sismo);break;
    case 10 : printf("%d.10	%d\n",anor,sismo);break;
    case 11 : printf("%d.11	%d\n",anor,sismo);break;
    case 12 : printf("%d.12	%d\n",anor,sismo);break;
   }
   sismo=1;       
  }
   /*registra para comparação posterior*/
   mesr = mes;
   anor = ano;
 }	
 
 switch(mesr){
    case 1  : printf("%d.1	%d\n",anor,sismo);break;
    case 2  : printf("%d.2	%d\n",anor,sismo);break;
    case 3  : printf("%d.3	%d\n",anor,sismo);break;
    case 4  : printf("%d.4	%d\n",anor,sismo);break;
    case 5  : printf("%d.5	%d\n",anor,sismo);break;
    case 6  : printf("%d.6	%d\n",anor,sismo);break;
    case 7  : printf("%d.7	%d\n",anor,sismo);break;
    case 8  : printf("%d.8	%d\n",anor,sismo);break;
    case 9  : printf("%d.9	%d\n",anor,sismo);break;
    case 10 : printf("%d.10	%d\n",anor,sismo);break;
    case 11 : printf("%d.11	%d\n",anor,sismo);break;
    case 12 : printf("%d.12	%d\n",anor,sismo);break;
   }
   
 return 0;	
}
