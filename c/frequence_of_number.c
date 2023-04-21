#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

#define MAX 40001
int numeros[MAX];
int num[MAX];

int main(int argc,char *argv[]){
 int n,x;
 scanf("%d",&n);

 for(x=0;x<MAX;x++)numeros[x]=0;
 for(x=0;x<n;x++){
  scanf("%d",&num[x]);
 }
 for(x=0;x<n;x++){
  numeros[num[x]]++;
 }
 for(x=0;x<MAX;x++){
  if(numeros[x]!=0)
   printf("%d aparece %d vez(es)\n",x,numeros[x]);
 }
 return 0;
}
