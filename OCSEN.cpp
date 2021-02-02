// I hate this code, it take looooong time.
// Completed
#include <iostream>
using namespace std;

int main(){
    int a, b, v;
    cin >> a >> b >> v;
    if (a < b)
        return 0;
    else {
        int check = a, c = 0;
        while (check < v)
        { 
            check -= b;
            c++;
            check += a;
        }
        cout << c + 1;        
    }
    return 0;
}