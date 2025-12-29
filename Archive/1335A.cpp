#include <iostream>
using namespace std;

int main(){
    long long t, n;
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> n;
        if (n % 2)
            cout << n / 2 << "\n";
        else
            cout << n / 2 - 1 << "\n";
    }
}
