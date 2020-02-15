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
    case 1  : printf("jan/%d	%d\n",anor,sismo);break;
    case 2  : printf("fev/%d	%d\n",anor,sismo);break;
    case 3  : printf("mar/%d	%d\n",anor,sismo);break;
    case 4  : printf("abr/%d	%d\n",anor,sismo);break;
    case 5  : printf("mai/%d	%d\n",anor,sismo);break;
    case 6  : printf("jun/%d	%d\n",anor,sismo);break;
    case 7  : printf("jul/%d	%d\n",anor,sismo);break;
    case 8  : printf("ago/%d	%d\n",anor,sismo);break;
    case 9  : printf("set/%d	%d\n",anor,sismo);break;
    case 10 : printf("out/%d	%d\n",anor,sismo);break;
    case 11 : printf("nov/%d	%d\n",anor,sismo);break;
    case 12 : printf("dez/%d	%d\n",anor,sismo);break;
   }
   sismo=1;       
  }
   /*registra para comparação posterior*/
   mesr = mes;
   anor = ano;
 }	
 
 switch(mesr){
    case 1  : printf("jan/%d	%d\n",anor,sismo);break;
    case 2  : printf("fev/%d	%d\n",anor,sismo);break;
    case 3  : printf("mar/%d	%d\n",anor,sismo);break;
    case 4  : printf("abr/%d	%d\n",anor,sismo);break;
    case 5  : printf("mai/%d	%d\n",anor,sismo);break;
    case 6  : printf("jun/%d	%d\n",anor,sismo);break;
    case 7  : printf("jul/%d	%d\n",anor,sismo);break;
    case 8  : printf("ago/%d	%d\n",anor,sismo);break;
    case 9  : printf("set/%d	%d\n",anor,sismo);break;
    case 10 : printf("out/%d	%d\n",anor,sismo);break;
    case 11 : printf("nov/%d	%d\n",anor,sismo);break;
    case 12 : printf("dez/%d	%d\n",anor,sismo);break;
   }
   
 return 0;	
}
