//Guilherme do Carmo Novaes 5916400
//EP11 ( EP10 + linha de comando )

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define TRUE 1
#define FALSE 0


float calcula(float X, float Y, float T, float *C){
 float  P1=0,P2=0,P3=0,P4=0,P5=0,P6=0,P7=0,RES=0;

 P1  = C[0]+C[1]*Y+C[2]*X+C[3]*T+C[4]*X*X+C[5]*X*Y+C[6]*X*T+C[7]*Y*Y;
 P2  = C[8]*Y*T+C[9]*T*T+C[10]*X*X*X+C[11]*X*X*Y+C[12]*X*X*T;
 P3  = C[13]*X*Y*Y+C[14]*X*Y*T+C[15]*X*T*T+C[16]*Y*Y*Y+C[17]*Y*Y*T;
 P4  = C[18]*Y*T*T+C[19]*X*X*X*X+C[20]*X*X*X*Y+C[21]*X*X*X*T;
 P5  = C[22]*X*X*Y*Y+C[23]*X*X*Y*T+C[24]*X*X*T*T+C[25]*X*Y*Y*Y;
 P6  = C[26]*X*Y*Y*T+C[27]*Y*Y*Y*T+C[28]*X*Y*T*T;
 P7  = C[29]*Y*Y*Y*Y+C[30]*Y*Y*T*T;
 RES = P1 + P2 + P3 + P4 + P5 + P6 + P7;

 return RES;
}


int main(int argc, char *argv[]){

 int i,j,k;

 float Dlon,Dlat,LATMIN,LATMAX,LONMIN,LONMAX,dia,mes,ano,F,D,I,lon,lat,data,epoca,
       CI95[]={-10.006583388,1.689987698,-0.774009842,-0.285142172,-0.019128983,-0.009799375,-0.009567729,0.011464555,-0.002605504,-0.002096450,0.000312138,-0.000219761,0.000242536,0.000496757,-0.000091865,0.000053931,-0.000405449,0.000154646,-0.000008095,0.000006410,-0.000010497,0.000004395,0.000012169,-0.000004039,0.000003870,0.000004229,0.000006854,0.000002329,0.000000852,-0.000004956,0.000002066},
	   CD95[]={-13.990855321,-0.178276825,-0.737983503,-0.160172410,0.009037327,0.012042122,0.003918684,0.005522720,.000274259,0.000315750,0.000251143,0.000150791,0.000184300,0.000099212,0.000162457,0.000047993,-0.000059871,0.000100456,0.000002292,-0.000002239,-0.000005053,-0.000003229,0.000000395,-0.000000564,0.000001007,-0.000002915,-0.000000630,-0.000000021,0.000000906,0.000000163,0.000001464},
       CF95[]={24224.659636207,183.996795632,-35.021288453,-37.400009238,3.361550943,-2.981093399,1.003467787,8.095907512,-1.375229967,0.254272806,0.012792782,-0.144525770,0.036415624,-0.144366979,0.009647616,0.001985112,-0.016962150,-0.052733877,0.016506825,-0.000018715,0.003236118,-0.000039060,0.000779251,0.002273586,0.000208493,0.000610764,-0.000407288,0.000612531,0.000483826,-0.000656300,0.000567275};

 int quer_declinacao=FALSE, quer_inclinacao=FALSE, quer_intensidade=FALSE, tem_arquivo=FALSE;
 char temp[20],saida[50];

 FILE *arq;


 for(i=1; i<argc; i++){
  if(argv[i][0]=='-')
   switch(argv[i][1]){
    case 'R': {//Regiao]
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
              
               
                LATMIN = LATMIN + 15;
                LONMIN = LONMIN + 55;
  
                LATMAX = LATMAX + 15;
                LONMAX = LONMAX + 55;
  
               break;
              }//case 'R':


    case 'P': {//Passo
               j=2;k=0;
               /*************************/
               while(argv[i][j]!='/'){
                temp[k]=argv[i][j];
                j++;k++;
               }
              
               argv[i][j]='\0';
               temp[k]=argv[i][j];
               Dlon=atof(temp);
               j++;k=0;
               
               /*************************/
               while(argv[i][j]!='\0'){
                temp[k]=argv[i][j];
                j++;k++;
               }
               
               argv[i][j]='\0';
               temp[k]=argv[i][j];
               Dlat=atof(temp);
               
               /*************************/
               break;
              }//case 'I':


    case 'Y': {//Data
               j=2;k=0;
               /*************************/
               while(argv[i][j]!='/'){
                temp[k]=argv[i][j];
                j++;k++;
               }
     
               argv[i][j]='\0';
               temp[k]='\0';
               dia=atof(temp);
               j++;k=0;
    
               /*************************/
               while(argv[i][j]!='/'){
                temp[k]=argv[i][j];
                j++;k++;
               }
    
               argv[i][j]='\0';
               temp[k]=argv[i][j];
               mes=atof(temp);
               j++;k=0;
               
               /*************************/
               while(argv[i][j]!='\0'){
                temp[k]=argv[i][j];
                j++;k++;
               }
              
               argv[i][j]='\0';
               temp[k]=argv[i][j];
               ano=atof(temp);
               /*************************/

               data  = (ano)+(((30.6*(mes-1))+dia)/365.25);
               epoca = data - 1990.0;

               break;
              }//case 'Y':

    case 'S': {strcpy(saida,&argv[i][2]); tem_arquivo=TRUE; break;}//arquivo de saida

    case 'E':{
           switch(argv[i][2]){
             case 'F':{
                        quer_intensidade=TRUE;   
                        printf("intensidade escolhida\n"); 
               
                        break;}

              case 'D':{
                        quer_declinacao=TRUE; 
                        printf("declinacao escolhida\n");     
                        break;}

              case 'I':{
                        quer_inclinacao=TRUE;
                        printf("inclinacao escolhida\n");
                        break;}
              
              default:{
                        printf("Erro: \"%s\" Opcao nao conhecida\n",argv[i][2]); break;}  
              }break;}//case 'E':


    default : {printf("Erro: \"%s\" Opcao nao conhecida\n",argv[i][1]); break;}
   }

  else
   printf("Erro: nao sei o que eh %s\n", argv[i][0]);

 }//for
 
if (tem_arquivo==TRUE){ 
 arq = fopen(saida,"w+");
 if (quer_intensidade==TRUE)
 {
  for( lon = LONMIN  ; lon <= LONMAX ; lon = lon + Dlon )
   for( lat = LATMIN ; lat <= LATMAX ; lat = lat + Dlat ){
    F = calcula(lon,lat,epoca,CF95);
    fprintf(arq,"%f %f %f %f %f %f %f\n",(lon-55),(lat-15),data,dia,mes,ano,F);                     
  } 
 }
 
                      
 if (quer_declinacao==TRUE)
 {
  for( lon = LONMIN  ; lon <= LATMAX ; lon = lon + Dlon )
   for( lat = LATMIN ; lat <= LATMAX ; lat = lat + Dlat ){
    D = calcula(lon,lat,epoca,CD95);
    fprintf(arq,"%f %f %f %f %f %f %f\n",(lon-55),(lat-15),data,dia,mes,ano,D);                    
  }                    
 } 
 
 if (quer_inclinacao==TRUE)
 {
  for( lon = LONMIN  ; lon <= LATMAX ; lon = lon + Dlon )
   for( lat = LATMIN ; lat <= LATMAX ; lat = lat + Dlat ){
    I = calcula(lon,lat,epoca,CI95);
    fprintf(arq,"%f %f %f %f %f %f %f\n",(lon-55),(lat-15),data,dia,mes,ano,I);                    
  }
 }                     
 fclose(arq);
}
 
 return 0;
}
