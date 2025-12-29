#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    for (int i = 0; i < t; ++i){
        cin >> n;
        set <int> s;
        if (n / 10000){
            s.insert(n / 10000 * 10000);
            n %= 10000;
        }
        if (n / 1000){
            s.insert(n / 1000 * 1000);
            n %= 1000;
        }
        if (n / 100){
            s.insert(n / 100 * 100);
            n %= 100;
        }
        if (n / 10){
            s.insert(n / 10 * 10);
            n %= 10;
        }
        if (n / 1){
            s.insert(n / 1 * 1);
            n %= 1;
        }
        cout << s.size() << "\n";
        for (auto x: s)
            cout << x << " ";
        cout << "\n";
    }
}
