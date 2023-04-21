#include <stdio.h>

int main(){
 int larg[24];
 int cheg[24];
 int comp[24];
 int fim, n, aux,x,y;
 
 while(scanf("%d",&n) != EOF){
  fim = 0;
  for(aux=0;aux<n;aux++){
   scanf("%d", &larg[aux]);
  }
  aux = 0;
  for(aux=0;aux < n;aux++){
   scanf("%d", &cheg[aux]);
  }
  for(x = 0; x < n; x++){
   for(y = 0; y < n; y++){
    if(larg[x] == cheg[y]){
     comp[y] = x + 25;
    }
   }
  }
  for(x = 0; x < n; x++){
   for(y = x+1; y < n; y++){
    if(comp[x] > comp[y]){
     aux = comp[y];
     comp[y] = comp[x];
     comp[x] = aux;
     fim++;
    }
   }
  }
  printf("%d\n",fim);
 }
 return 0;
}

