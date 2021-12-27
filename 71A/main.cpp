//
//  main.cpp
//  71A
//
//  Created by sminrana@outlook.com.
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    while(cin >> s){
        cout << (s.size()> 10 ? s[0] + to_string(s.size() - 2) + s[s.size() - 1] : s) << "\n";
    }

    return 0;
}
