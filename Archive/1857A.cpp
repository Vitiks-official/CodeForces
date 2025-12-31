#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a;
    cin >> t;
    while (t--){
        cin >> n;
        int s = 0;
        while (n--){
            cin >> a;
            s += a;
        }
        if (s % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
