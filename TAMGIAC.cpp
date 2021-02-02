// Completed
#include <bits/stdc++.h>
using namespace std;

float area(int x1, int y1, int x2, int y2, int x3, int y3) 
{ 
   return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0); 
}

int main(){
    int a[4][2]; // x va y
    for (int i = 0; i < 4; i++){
        for (int k = 0; k < 2; k++){
            cin >> a[i][k];
        }
    }
    // a[x][y]
    // a[0][0] va a[0][1] la toa do cua A
    // a[1][0] va a[1][1] la toa do cua B
    // a[2][0] va a[2][1] la toa do cua C
    // a[3][0] va a[3][1] la toa do cua D

    float a1 = area(a[0][0], a[0][1], a[2][0], a[2][1], a[3][0], a[3][1]),
          a2 = area(a[0][0], a[0][1], a[1][0], a[1][1], a[3][0], a[3][1]),
          a3 = area(a[2][0], a[2][1], a[1][0], a[1][1], a[3][0], a[3][1]),
          aa = area(a[0][0], a[0][1], a[1][0], a[1][1], a[2][0], a[2][1]);
    if (a1 + a2 + a3 == aa)
        cout << 1;
    else
        cout << 0;
    return 0;
}