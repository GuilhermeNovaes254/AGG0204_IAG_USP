#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#define grau2rad 3.141592/180

int main(){
 int n;
 float sing_ang, ang;
 
 printf("Entre com o angulo:");
 n = scanf("%f", &ang);
 sing_ang = sin(ang*grau2rad);
 printf("o seno do angulo %f e' %f    ;  n = %d\n ", ang,sing_ang,n);
 system("pause"); 
 
 return 0;   
}
