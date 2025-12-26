#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k, c = 0;
    cin >> n >> k;
    vector <int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (auto x: v)
        if (x >= v[k - 1] && x > 0)
            ++c;
    cout << c;
}
