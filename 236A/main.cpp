#include<bits/stdc++.h>

using namespace std;

int main() {
    set<char> s;
    string c;
    cin>>c;
    for(int i=0;i<c.size();i++)s.insert(c[i]);

    cout<<(s.size()%2?"IGNORE HIM!":"CHAT WITH HER!");

    return 0;
}
