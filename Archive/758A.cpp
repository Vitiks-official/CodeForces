#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s = 0;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    int k = *max_element(v.begin(), v.end());
    for (auto x: v)
        s += k - x;
    cout << s;
}
