#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    vector <int> v;
    for (int i = 1; i < 2000; ++i){
        if (i % 3 != 0 && i % 10 != 3)
            v.push_back(i);
    }
    cin >> t;
    while (t--){
        cin >> n;
        cout << v[n - 1] << "\n";
    }
}
