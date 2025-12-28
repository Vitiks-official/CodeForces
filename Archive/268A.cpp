#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, h, a, k = 0;
    cin >> n;
    vector <int> hv(n), av(n);
    for (int i = 0; i < n; ++i){
        cin >> h >> a;
        hv[i] = h;
        av[i] = a;
    }
    for (auto x: hv)
        k += count(av.begin(), av.end(), x);
    cout << k;
}
