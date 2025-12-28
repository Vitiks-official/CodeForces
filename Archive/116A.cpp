#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, a, b, mp = 0, p = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a >> b;
        p -= a;
        p += b;
        mp = max(mp, p);
    }
    cout << mp;
}
