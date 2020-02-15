/*Guilherme do Carmo Novaes NoUSP:5916400 */
/*coloca prrintf no arquivo iag.kmz*/
#include<stdio.h>
#include<stdlib.h>

int main(){
   
 char linha[200];
    
    while(gets(linha)!=NULL){
     printf("printf(\"%s\\n\");\n",linha);
    }
    
 return 0;   
}
