#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, a;
    cin >> t;
    while (t--){
        cin >> n;
        int ms = 0, s = 0;
        while (n--){
            cin >> a;
            if (a == 0)
                ++s;
            else{
                ms = max(ms, s);
                s = 0;
            }
        }
        cout << max(ms, s) << "\n";
    }
}
