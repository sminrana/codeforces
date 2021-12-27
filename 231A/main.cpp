#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c,k = 0,input = 0;

    cin>>input;

    while(input--) {
        cin>>a>>b>>c;

        if ((a + b + c) > 1) k++;
    }

    cout << k;

    return 0;
}
