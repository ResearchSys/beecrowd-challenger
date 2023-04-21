#include <cstdio>
#include <cstring>
#include <cmath>
 
int main(){
    int n, soma;
 
    while(scanf("%d", &n) && n){
        long long int m[n], soma;
 
        for(int i = 0; i < n; ++i) scanf("%lld", &m[i]);
 
        for(int i = n-2; i >= 0; --i){
            for(int j = n-1; j > i; --j){
                m[i] += m[j];
            }
        }
        soma = 0;
        for(int i = 0; i < n; ++i) soma += m[i];
 
        printf("%lld\n", soma);
    }
}
