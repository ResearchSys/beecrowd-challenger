#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 21

typedef struct {
 char nome[TAM];
 int pontos,gols_marcados,vitorias; 
} times;

int compara(const void *p1,const void *p2){
 times *i=(times *)p1,*j=(times *)p2;
 if(i->pontos > j->pontos){
  return -1;
 }else if(i->pontos < j->pontos){
  return 1;
 }else{
  if(i->vitorias > j->vitorias){
   return -1;
  }else if(i->vitorias < j->vitorias){
   return 1;
  }else{
   if(i->gols_marcados > j->gols_marcados){
    return -1;
   }else if(i->gols_marcados < j->gols_marcados){
    return 1;
   }else{
    return 0;
   }
  }
 }
}

int main (int argc,char *argv[]){
 int t, g, g1, g2,numtest;
 int cont,y,x;

 char t1[TAM], t2[TAM];
 scanf("%d",&numtest);
 for(x=0;x<numtest;x++){
  scanf("%d %d",&t,&g);
  if (t == 0 && g == 0)
  break;

  times time[t];
  
  for (cont=0; cont<t; cont++){
   scanf(" %s",time[cont].nome);
   time[cont].pontos = 0;
   time[cont].gols_marcados = 0;
   time[cont].vitorias=0;
  }

  for (cont=0; cont<g; cont++){
   scanf("%d %s %d %s",&g1,t1,&g2,t2);
   
   for(y=0;y<t;y++){
    if(strcmp(time[y].nome,t1)==0){
     time[y].gols_marcados+=g1;
     if (g1 > g2){
      time[y].pontos += 3;
      time[y].vitorias++;
     }else if(g1==g2){
      time[y].pontos += 1;
     }else{
      time[y].pontos += 0;
     }
    }
    if(strcmp(time[y].nome,t2)==0){
     time[y].gols_marcados+=g2;
     if (g1 < g2){
      time[y].pontos += 3;
      time[y].vitorias++;
     }else if(g1==g2){
      time[y].pontos += 1;
     }else{
      time[y].pontos += 0;
     }
    }
   }
  }
  
  qsort(time,t,sizeof(time[0]),compara);
  
  for(cont=0;cont<t;cont++){
   printf("%s\n",time[cont].nome);
  }
 }
 return 0;
}
