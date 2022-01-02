#include <bits/stdc++.h>

using namespace std;

int main() {
    int l,b,r=0;
    cin>>l>>b;

    while(l<=b) {
        l=l*3;
        b=b*2;
        r++;
    }

    cout<<r;

    return 0;
}
