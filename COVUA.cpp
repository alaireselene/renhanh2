// Unknown but maybe completed
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, z, t;
    char ch;
    cin >> x >> y >> z >> t >> ch;
    if ( x < 1 || x > 8 || y < 1 || y > 8 || z < 1 || z > 8 || t < 1 || t > 8){
        return 0;
    }
    else{
        if(ch == 'H'){
            if (x == z || y == t || abs (x - z) == abs (y - t)){
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else if (ch == 'X'){
            if (x == z || y == t){
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else if (ch == 'T'){
            if (abs (x - z) == abs (y - t)){
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else if (ch == 'M'){
            if ((abs (x - z) == 2 && abs (y - t) == 1) || (abs (x - z) == 1 && abs (y - t) == 2)){
                cout << "YES";
            }
            else
                cout << "NO";
        }
        else
            return 0;
    }
    return 0;
}