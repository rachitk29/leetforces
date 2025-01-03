#include <iostream>
using namespace std;

#define ll long long

int main() {
    ll k, s;
    cin >> k >> s;

    int cnt=0;

    for(int x=0; x<=k; x++) {
        for(int y=0; y<=k; y++) {
            ll z = s-(x+y);

            if(z>=0 && z<=k) {
                cnt++;
            }
        }
    }
    cout << cnt;
}
