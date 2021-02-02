#include <bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> y1 >> x1; // Quan Phao
    cin >> y2 >> x2; // Quan Dich
    cin >> y3 >> x3; // Quan Trung gian
    int count = 0;
    if ((x1 == x2 && x1 == x3) || (y1 == y2 && y1 == y3)){
        cout << 1;
        return 0;
    }
    if (x2 == x3){ // Thang hang ngang
        if (abs(y1 - y3) + abs(y2 - y3) == abs(y1 - y2)){ // Nam giua
            ++count;
        }
        else
            count += 2;
        cout << count + 1 << endl;
        return 0;
    }
    if (y2 == y3){ // Thang hang doc
        if (abs(x1 - x3) + abs(x2 - x3) == abs(x1 - x2)){ // Nam giua
            ++count;
        }
        else
            count += 2;
        cout << count + 1 << endl;
        return 0;        
    }
        cout << -1;
    return 0;
}