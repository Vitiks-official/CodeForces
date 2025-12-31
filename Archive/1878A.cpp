#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, a;
    cin >> t;
    while (t--){
        cin >> n >> k;
        bool flag = false;
        while (n--){
            cin >> a;
            if (a == k)
                flag = true;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
