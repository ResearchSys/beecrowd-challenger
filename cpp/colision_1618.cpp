#include <iostream>
 
using namespace std;
 
int main()
{
     int N;
     cin >> N;
     while(N!=0)
     {
         bool dentroArea=0;
         int Rx, Ry, Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
         cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy >> Rx >> Ry;
         if( Rx>=Ax && Ry>=Ay && Rx<=Bx && Ry>=By && Rx<=Cx && Ry<=Cy && Rx>=Dx && Ry<=Dy )
             dentroArea = 1;
         cout << dentroArea << endl;
         N--;
     }
    return 0;
}
