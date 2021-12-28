#include <iostream>

using namespace std;

int main() {
    int x,r=0;
    cin>>x;
    while(x--) {
        string s;
        cin>>s;
        if (s == "++X" || s == "X++") {
            r++;
        } else {
            r--;
        }
    }

    cout<<r;

    return 0;
}
