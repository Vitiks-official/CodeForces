#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    bool flag = false;
    cin >> t;
    for (int i = 0; i < t; ++i){
        flag = false;
        cin >> n;
        vector <int> v(n);
        for (int j = 0; j < n; ++j)
            cin >> v[j];
        sort(v.begin(), v.end());
        for (int j = 1; j < n; ++j){
            if (abs(v[j] - v[j - 1]) > 1){
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}
