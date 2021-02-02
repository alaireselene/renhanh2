// Completed
// By Sean Nguyen
#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a % 14 <= 7)
        cout << 7 - a % 14 << " " << a % 14 << endl;
    else
        cout << a % 14 - 7 << " " << 14 - a % 14 << endl;
    return 0;
}