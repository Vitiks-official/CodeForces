#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, c = 1;
    cin >> n;
    vector <int> v(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    for (int i = 1; i < n; ++i){
        if (v[i] != v[i - 1])
        c++;
    }
    cout << c;
}
