//Guilherme do Carmo Novaes 5916400
//EP12 - Cidades

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define FALSE 0
#define TRUE  1

/*****************************************************************************/
void HELP(void)
{
 printf("Esta e' a ajuda para uso deste programa\nA sintaxe esperada e':\n");
 printf("cidades -N[nome] -R[longmin]/[longmax]/[latmin]/[latmax]");
 printf(" -P[popmin]/[popmax] -A[altmin]/[altmax] \n");
 printf("Se o nome estiver no fomato XXX_YYY , escreva-o entre aspas\n\n");
}     


 
     
int main(int argc, char *argv[]){ 
    
 int i, j, k, N, cod1, cod2, alt, NADA=TRUE, ERRO=FALSE, PERMITE_N=FALSE, PERMITE_R=FALSE, PERMITE_A=FALSE, PERMITE_P=FALSE;
 
 long int  POPMIN, POPMAX, pop;
  
 float LONMIN=FALSE, LONMAX=FALSE, LATMIN=FALSE, LATMAX=FALSE, ALTMIN=FALSE, ALTMAX=FALSE, lon, lat;
       
 char temp[60], NOME[60], nome[60];
 
 
 FILE *arq;
 
 N=argc; N--;
/*****************************************************************************/
/* Leitura da Linha de comando */
 for(i=1; i<argc ; i++)
 {
  if(argv[i][0]=='-')
   {
    if(argv[i][1]=='\0')
    {
     HELP(); 
     ERRO=TRUE;
    }
           
    else           
     switch(toupper(argv[i][1]))
     {
      case 'H':{
                HELP(); 
                ERRO=TRUE;
                break;  
               }
               
      case 'N':{
                j=2;k=0; 
                /*************************/
                while(argv[i][j]!= '\0'){
                 temp[k]=toupper(argv[i][j]);
                 j++;k++;
                }
                
                temp[k]='\0';
                strcpy(NOME,temp);
                
                PERMITE_N=TRUE;
                break;
               
               }
                                   
      case 'R':{
                j=2;k=0;
                /*************************/
                while(argv[i][j]!='/'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
                
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                LONMIN=atof(temp);
                j++;k=0;
              
                /*************************/
                while(argv[i][j]!='/'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
              
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                LONMAX=atof(temp);
                j++;k=0;
               
                /*************************/
                while(argv[i][j]!='/'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
               
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                LATMIN=atof(temp);
                j++;k=0;
              
                /*************************/
                while(argv[i][j]!='\0'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
               
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                LATMAX=atof(temp);
                
                PERMITE_R=TRUE;
                break;
               }
               
      case 'P':{ 
                j=2;k=0;
                /*************************/
                while(argv[i][j]!='/'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
              
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                POPMIN=atol(temp);
                j++;k=0;
               
                /*************************/
                while(argv[i][j]!='\0'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
               
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                POPMAX=atol(temp);
               
                /*************************/
                PERMITE_P=TRUE;
                break;
               }
              
      case 'A':{ 
                j=2;k=0;
                /*************************/
                while(argv[i][j]!='/'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
               
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                ALTMIN=atof(temp);
                j++;k=0;
               
                /*************************/
                while(argv[i][j]!='\0'){
                 temp[k]=argv[i][j];
                 j++;k++;
                }
               
                argv[i][j]='\0';
                temp[k]=argv[i][j];
                ALTMAX=atof(temp);
                
                /*************************/
                PERMITE_A=TRUE;
                break;
               }
                                
               
     default :{ printf("ERRO : Comando -%s nao conhecido\n"); ERRO=TRUE ;HELP();break;}     
   }//switch
  }//if(argv[i][0]=='-')
 }//for  
/*Fim da leitura da linha de comando*/ 

/******************************************************************************/
/*Checa erros*/
 if(PERMITE_R==TRUE)//PERMITE_x serve para so' verificar se pedido na linha de comando
  if(LATMIN > LATMAX || LONMIN > LONMAX || LATMIN < -40 || LATMAX > 10 || LONMIN < -80 || LONMAX > -30){
   printf("Erro na opcao -R\n");HELP();
   printf("Sendo longmin>=-80; longmax<=-30; latmin>=-40; latmax<=10;\n\n\n");
   ERRO = TRUE;
  }
 
 if(PERMITE_P==TRUE)
  if(POPMIN > POPMAX || POPMIN < 0 || POPMAX < 0){
   printf("Erro na opcao -P\n\n");HELP();
   printf("Sendo popmin>popmax\n\n\n");
   ERRO = TRUE;
  }
 
 if(PERMITE_A==TRUE)
  if(ALTMIN > ALTMAX ){
   printf("Erro na opcao -A\n\n");HELP();
   printf("Sendo altmin>altmax\n\n\n");
   
   ERRO = TRUE;
  }
/*Fim da Checagem*/

/*****************************************************************************/
/*Procura no cidades.dos*/
if(ERRO == FALSE)
{
  arq = fopen("cidades.dos","r");
  
  while((fscanf(arq,"%f %f %d %d %d %ld %[^\n]", &lon, &lat, &cod1, &cod2, &alt, &pop, nome))==7)          
  {
                        
    nome[strlen(nome)-2]='\0';// para tirar os dois ultimos caracteres em branco do arquivo original
   
   
    
    //PERMITE_x serve para só procurar se pedido na linha de comando
    if(lon>=LONMIN && lon<=LONMAX && lat>=LATMIN && lat<=LATMAX && PERMITE_R==TRUE && N<2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    }
   
    if(alt>=ALTMIN && alt<=ALTMAX && PERMITE_A==TRUE && N<2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;             
    }
   
    if(pop>=POPMIN && pop<=POPMAX && PERMITE_P==TRUE && N<2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    }
                
    if((strcmp(nome,NOME)==0) && PERMITE_N==TRUE && N<2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;             
    }

    //-N & -R 
    if((strcmp(nome,NOME)==0) && PERMITE_N==TRUE && lon>=LONMIN && lon<=LONMAX && lat>=LATMIN && lat<=LATMAX && PERMITE_R==TRUE  && N>=2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;             
    }
              
    //-N & -A
    if((strcmp(nome,NOME)==0) && PERMITE_N==TRUE && alt>=ALTMIN && alt<=ALTMAX && PERMITE_A==TRUE && N>=2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    }
              
    //-N & -P
    if((strcmp(nome,NOME)==0) && PERMITE_N==TRUE && pop>=POPMIN && pop<=POPMAX && PERMITE_P==TRUE && N>=2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    }
              
    //-R & -A
    if(lon>=LONMIN && lon<=LONMAX && lat>=LATMIN && lat<=LATMAX && PERMITE_R==TRUE && alt>=ALTMIN && alt<=ALTMAX && PERMITE_A==TRUE && N>=2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    }
              
    //-P & -R
    if(lon>=LONMIN && lon<=LONMAX && lat>=LATMIN && lat<=LATMAX && PERMITE_R==TRUE && pop>=POPMIN && pop<=POPMAX && PERMITE_P==TRUE && N>=2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    }
              
    //-P & -A
    if(pop>=POPMIN && pop<=POPMAX && PERMITE_P==TRUE && alt>=ALTMIN && alt<=ALTMAX && PERMITE_A==TRUE && N>=2){
     printf("%f %f %d %d %d %ld %s\n",lon, lat, cod1, cod2, alt, pop, nome);  
     NADA = FALSE;
    } 
  }//while((fscanf...)  
 
 if(NADA == TRUE)
  printf("Nada foi encontrado no banco de dados\n");
  
 fclose(arq);
}//if(ERRO == FALSE)
/*Fim da Procura*/
 
 return 0;   
}    
