#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k, n;
    cin >> k;
    for (int i = 0; i < k; ++i){
        cin >> n;
        int n1 = n / 1000, n2 = n % 1000;
        if (n1 / 100 + n1 / 10 % 10 + n1 % 10 == n2 / 100 + n2 / 10 % 10 + n2 % 10)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}
