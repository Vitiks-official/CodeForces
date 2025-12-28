#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, ma = 0, mi = 0;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i){
        cin >> v[i];
        if (v[ma] < v[i])
            ma = i;
        if (v[mi] >= v[i])
            mi = i;
    }
    if (ma > mi)
        cout << ma + (n - 2 - mi);
    else
        cout << ma + (n - 1 - mi);
}
