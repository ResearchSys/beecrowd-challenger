#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
 char nome[51];
 char cor[16];
 char tam;
}camisa;

int comp(const void *p1,const void *p2){
 camisa *i=(camisa *)p1,*j=(camisa *)p2;
 int comp=strcmp(i->cor,j->cor);
 if(comp==0){
  if(i->tam>j->tam){
   return -1;
  }else if(i->tam<j->tam){
   return 1;
  }else{
   return strcmp(i->nome,j->nome);
  }
 }else{
  return comp;
 }
}


int main(int argc,char *argv[]){
 int n=0,x,c=0;
 while(1){
  scanf("%d",&n);
  if(n==0) break;
  if(c!=0) printf("\n");
  camisa cam[n];
  for(x=0;x<n;x++){
   while(getchar()!='\n');
   scanf("%[^\r\n]", &cam[x].nome);
   scanf("%s %c",&cam[x].cor,&cam[x].tam);
  }
  qsort(cam,n,sizeof(cam[0]),comp);
  for(x=0;x<n;x++){
   printf("%s %c %s\n",cam[x].cor,cam[x].tam,cam[x].nome);
  }
  c++;
 }
 return 0;
}
