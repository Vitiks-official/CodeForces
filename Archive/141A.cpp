#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2, s3;
    cin >> s1 >>s2 >> s3;
    multiset <char> ms1, ms2;
    for (char x: s1 + s2)
        ms1.insert(x);
    for (char x: s3)
        ms2.insert(x);
    if (ms1 == ms2)
        cout << "YES";
    else
        cout << "NO";
}
