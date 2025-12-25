#include <iostream>
using namespace std;

int main(){
    int n, f, s, t, k = 0;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> f >> s >> t;
        k += (f + s + t) / 2;
    }
    cout << k;
}
