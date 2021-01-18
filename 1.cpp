#include <iostream>
using namespace std;

int main(){
    int y, x;
    cin >> y >> x;
    if (y <= 3 || y > 9 || x < 0 || x > 8)
        cout << -1;
    else{
        cout << y - 3 + x % 2 << endl;
        if (x == 0 || x == 1)
            cout << "A";
        else if (x == 2 || x == 3)
            cout << "B";
        else if (x == 4 || x == 5)
            cout << "C";
        else if (x == 6 || x == 7)
            cout << "D";
        else
            cout << "E";
    }
    return 0;
}