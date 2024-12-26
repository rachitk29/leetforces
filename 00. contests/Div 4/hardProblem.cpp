#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;    
    cin>>t;
    while(t--){
        long long m, a, b, c;
        cin >> m >> a >> b >> c;
        long long val = min(m,a) + min(m,b);
        cout << min(2*m, val + c) << "\n";
    }
    return 0;
}