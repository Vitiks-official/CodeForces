#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sc, k = -2, mn = 100000, mx = -1;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> sc;
        if (sc < mn){
            k++;
            mn = sc;
        }
        if (sc > mx){
            k++;
            mx = sc;
        }
    }
    cout << k;
}
