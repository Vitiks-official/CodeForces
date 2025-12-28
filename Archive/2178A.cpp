#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> s;
        int c = count(s.begin(), s.end(), 'Y');
        if (c > 1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
}
