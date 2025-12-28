#include <iostream>
#include <string>
using namespace std;

int main(){
    int k = 1, n;
    string s;
    cin >> n >> s;
    for (int i = 1; i < s.size(); ++i){
        if (s[i] != s[i - 1])
            k++;
    }
    cout << s.size() - k;
}
