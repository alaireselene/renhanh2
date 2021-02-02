// Completed
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (b >= 60 || c >= 60)
        return 0;
    if (c == 59)
    {
        c = 0;
        b++;
    }
        else
            c++;
    if (b == 60) {
        b = 0;
        a++;
    }
    if (a == 24) {
        a = 0;
    }
    cout << a << " " << b << " " << c;
    return 0;
}