#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, n, ns = "";
    cin >> s >> n;
    for (int i = 0; i < s.size(); ++i){
        if (s[i] == n[i])
            ns += '0';
        else
            ns += '1';
    }
    cout << ns;
}
