#include <cstdio>

using namespace std;   
int main(){
    int s, b, l ,r;
    int left[1000100], right[1000100];
      
    while(scanf("%d %d", &s, &b) && s){
        for(int i = 0; i <= s; ++i) {
            left[i] = i - 1;
            right[i] = i + 1;
        }
        for(int i = 0; i < b; i++) {
            scanf("%d %d", &l, &r);
            if(left[l] < 1) printf("*");
            else printf("%d", left[l]);
              
            if(right[r] > s) printf(" *\n");
            else printf(" %d\n", right[r]);
   
            left[right[r]] = left[l];
            right[left[l]] = right[r];
        }
        printf("-\n");
    }
    return 0;
}
