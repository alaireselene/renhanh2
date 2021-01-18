#include <iostream>
using namespace std;

int max(int &a, int &b){
    int ans;
    if (a >= b)
        ans = a;
    else
        ans = b;
    return ans;
}
int main(){
    int a[3][2]; // y va x
    for (int i = 0; i < 3; i++){
        for (int k = 0; k < 2; k++){
            cin >> a[i][k];
        }
    }
    // a[a][b]
    // a[0][0] va a[0][1] la khung
    // a[1][0] va a[1][1] la tranh 1
    // a[2][0] va a[2][1] la tranh 2
    for (int i = 0; i < 3; i++){
        if (a[i][0] < 0 || a[i][0] < 0 || a[i][1] < 0 || a[i][1] < 0)
            return 0;
    }

    if (a[1][0] * a[1][1] + a[2][0] * a[2][1] <= a[0][0] * a[0][1]){
        for (int i = 1; i < 3; i++){
            if (a[i][0] > max(a[0][0], a[0][1])){
                cout << "NO";
                return 0;
            }
            if (a[i][1] >  max(a[0][0], a[0][1])){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}