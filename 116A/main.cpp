#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,a,b,c=0,s=0;
    cin>>n;

    while(n--){
        cin>>a>>b;
        c+=b-a;
        if(c>s) s=c;
    }

    cout<<s;

    return 0;
}


