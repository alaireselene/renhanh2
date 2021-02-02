// Completed
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    char check;
    int b;
    cin >> a >> b;
    check = a[a.length() - 1];
    if (check == '0' || check == '1' || check == '5' || check == '6')
        cout << check;
    else{
        switch (check)
        {
        case '2':
            if (b % 4 == 1)
                cout << 2;
            else if (b % 4 == 2)
                cout << 4;
            else if (b % 4 == 3)
                cout << 8;
            else
                cout << 6;
            break;
        case '3':
            if (b % 4 == 1)
                cout << 3;
            else if (b % 4 == 2)
                cout << 9;
            else if (b % 4 == 3)
                cout << 7;
            else
                cout << 1;
            break;
        case '4':
            if (b % 2 == 1)
                cout << 4;
            else
                cout << 6;
            break;
        case '7':
            if (b % 4 == 1)
                cout << 7;
            else if (b % 4 == 2)
                cout << 9;
            else if (b % 4 == 3)
                cout << 3;
            else
                cout << 1;
            break;
        case '8':
            if (b % 4 == 1)
                cout << 8;
            else if (b % 4 == 2)
                cout << 4;
            else if (b % 4 == 3)
                cout << 2;
            else
                cout << 6;
            break;
        case '9':
            if (b % 4 == 1)
                cout << 9;
            else
                cout << 1;
            break;
        default:
            break;
        }
    }
    return 0;
}