#include <iostream>
using namespace std;

int main(){
    int n, p, q, k = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> p >> q;
        if (abs(p - q) >= 2)
            ++k;
    }
    cout << k;
}
