#include<bits/stdc++.h>
#define PI 3.14

using namespace std;

double raio(double diametro){
 return diametro/2;
}

int main(){
 
 double v, d, h, area;
 
 while(scanf("%lf%lf", &v, &d) != EOF){
 
  area = PI * raio(d) * raio(d);
  h = v / (PI * raio(d)  * raio(d));
  
  printf("ALTURA = %.2lf\n", h);
  printf("AREA = %.2lf\n", area);
  
 }
 
 return 0;
}
