#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, t = 240, c = 0;
    cin >> n >> k;
    t -= k;
    for (int i = 1; i <= n; ++i){
        if (t - 5 * i >= 0){
            c++;
            t -= 5 * i;
        } else
            break;
    }
    cout << c;
}
