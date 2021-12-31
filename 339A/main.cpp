#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    sort(s.begin(), s.end());

    int size=s.size();
    for(int i=0; i<size;i++) {
        if (s[i] != '+') {
            cout << s[i];
            if (i + 1 < size) cout << '+';
        }
    }

    return 0;
}
