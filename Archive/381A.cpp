#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s = 0, d = 0;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 0; i < n; ++i){
        if (i % 2 == 0){
            if (v[0] > v[v.size() - 1]){
                s += v[0];
                v.erase(v.begin());
            } else {
                s += v[v.size() - 1];
                v.erase(prev(v.end()));
            }
        } else {
            if (v[0] > v[v.size() - 1]){
                d += v[0];
                v.erase(v.begin());
            } else {
                d += v[v.size() - 1];
                v.erase(prev(v.end()));
            }
        }
    }
    cout << s << ' ' << d;
}
