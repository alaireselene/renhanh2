#include <iostream>
using namespace std;

int main(){
    int a, b, v, c = 0;
    cin >> a >> b >> v;
    int check = a;
    while (check < v)
    {  
        check -= b;
        c++;
        check += a;
    }
    cout << c + 1;
    return 0;
}