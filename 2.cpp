// This thing need to be fix
// By Sean

#include <iostream>
using namespace std;

int main(){
    int a[3][2]; // y va x
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 2; k++){
            cin >> a[i][k];
        }
    }
    // a[y][x]
    // a[0][0] va a[0][1] la toa do cua quan Phao
    // a[1][0] va a[1][1] la toa do cua quan Dich
    // a[2][0] va a[2][1] la toa do cua quan thu 3
    for (int i = 0; i < 3; i++){
        if (a[i][0] < 0 || a[i][0] > 9 || a[i][1] < 0 || a[i][1] > 8)
            return 0;
    }
    int c = 0; // Bien dem
    if (abs(a[0][0] - a[2][0]) != 0)
        c++;
    if (abs(a[0][1] - a[2][1]) != 0)
        c++;
    if (abs(a[2][0] - a[1][0]) != 0)
        c++;
    if (abs(a[2][1] - a[1][1]) != 0)
        c++;
    cout << c << endl;
}