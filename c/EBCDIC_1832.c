#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int otoi(char octal[]);

int main() {
 char octal[5],c;
 int dec;
 while(scanf("%s",octal)!=EOF){
  dec=otoi(octal);
  switch(dec){
  case 64: printf(" ");break;
  case 129: printf("a"); break;
  case 130: printf("b"); break;
  case 131: printf("c"); break;
  case 132: printf("d"); break;
  case 133: printf("e"); break;
  case 134: printf("f"); break;
  case 135: printf("g"); break;
  case 136: printf("h"); break;
  case 137: printf("i"); break;
  case 145: printf("j"); break;
  case 146: printf("k"); break;
  case 147: printf("l"); break;
  case 148: printf("m"); break;
  case 149: printf("n"); break;
  case 150: printf("o"); break;
  case 151: printf("p"); break;
  case 152: printf("q"); break;
  case 153: printf("r"); break;
  case 162: printf("s"); break;
  case 163: printf("t"); break;
  case 164: printf("u"); break;
  case 165: printf("v"); break;
  case 166: printf("w"); break;
  case 167: printf("x"); break;
  case 168: printf("y"); break;
  case 169: printf("z"); break;
  case 193: printf("A"); break;
  case 194: printf("B"); break;
  case 195: printf("C"); break;
  case 196: printf("D"); break;
  case 197: printf("E"); break;
  case 198: printf("F"); break;
  case 199: printf("G"); break;
  case 200: printf("H"); break;
  case 201: printf("I"); break;
  case 209: printf("J"); break;
  case 210: printf("K"); break;
  case 211: printf("L"); break;
  case 212: printf("M"); break;
  case 213: printf("N"); break;
  case 214: printf("O"); break;
  case 215: printf("P"); break;
  case 216: printf("Q"); break;
  case 217: printf("R"); break;
  case 226: printf("S"); break;
  case 227: printf("T"); break;
  case 228: printf("U"); break;
  case 229: printf("V"); break;
  case 230: printf("W"); break;
  case 231: printf("X"); break;
  case 232: printf("Y"); break;
  case 233: printf("Z"); break;
  case 240: printf("0"); break;
  case 241: printf("1"); break;
  case 242: printf("2"); break;
  case 243: printf("3"); break;
  case 244: printf("4"); break;
  case 245: printf("5"); break;
  case 246: printf("6"); break;
  case 247: printf("7"); break;
  case 248: printf("8"); break;
  case 249: printf("9"); break;
  }
  c=getchar();
  if(c==13||c==10)
   printf("\n");
 }
 printf("\n");
 return 0;
}

int otoi(char octal[]){
 int dec,res=0,i=0;
 dec = atoi(octal);
 while(dec!=0){
  res=res+(dec%10)*pow(8,i++);
  dec=dec/10;
 }
 return res;
}
