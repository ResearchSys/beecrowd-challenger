#include<stdio.h>

int main(){
	int D[61], E[61];
	int i,N,M,r;
	char L;

        //enquanto existem valores sendo fornecidos
	while(scanf("%d", &N)>=0){
		r=0;
		//preenche os dois vetores com zeros
		for(i=0; i<61; i++){
			D[i] = 0;
			E[i] = 0;
		}
		//enquanto tiver botas (N > 0) faça
		while(N--){
			scanf("%d %c", &M, &L);
			if(L=='E') {
                            E[M]++;
                        } else {
                    	    D[M]++;
                        }
			if(E[M] && D[M]){
			    E[M]--;
			    D[M]--;
			    r++;
			}
		}
		printf("%d\n", r);
	}

	return 0;
}
