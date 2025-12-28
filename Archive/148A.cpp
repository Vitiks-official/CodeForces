#include <iostream>
#include <vector>
using namespace std;

int main(){
    int k, l, m, n, d, c = 0;
    cin >> k >> l >> m >> d >> n;
    vector <int> v(n, 0);
    for (int i = k; i <= n; i += k)
        if (v[i - 1] == 0){
            v[i - 1] = 1;
            c++;
        }
    for (int i = l; i <= n; i += l)
        if (v[i - 1] == 0){
            v[i - 1] = 1;
            c++;
        }
    for (int i = m; i <= n; i += m)
        if (v[i - 1] == 0){
            v[i - 1] = 1;
            c++;
        }
    for (int i = d; i <= n; i += d)
        if (v[i - 1] == 0){
            v[i - 1] = 1;
            c++;
        }
    cout << c;
}
