// Wrong in test 11
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a;
    cin >> a;
    if (a < 10)
        cout << a;
    else {
       int check = a / 10 * 3 + a % 10;
       a += check - a % 10;
       while (check >= 10){
           a += check / 3;
           check = check / 10 * 3 + check % 10;
           
       }
       cout << a;
    }
    
    return 0;
}