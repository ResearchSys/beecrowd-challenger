#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int bubble_sort (int v[], int n);

int main(int argc, char *argv[]){
 int n=0,l=0,x=0,y=0,troca=0;
 scanf("%d",&n);
 for(x=0;x<n;x++){
  scanf("%d",&l);
   int num[l];
   for(y=0;y<l;y++){
    scanf("%d",&num[y]);
    
   }
  troca=bubble_sort(num,l);
  printf("Optimal train swapping takes %d swaps.\n",troca);
 }
 return 0;
}

int bubble_sort (int v[], int n) {
    int k, j, aux,tr=0;

    for (k = 0; k < n - 1; k++) {
        for (j = 0; j < n - k - 1; j++) {
            if (v[j] > v[j + 1]) {
                aux          = v[j];
                v[j]     =v[j + 1];
                v[j + 1] = aux;
    tr++;
            }
        }
    }
 return tr;
}
