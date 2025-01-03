#include <iostream>
using namespace std;

void solve(int nums) {
    for (int i = 1; i <= nums; i++) {
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout <<"\n";
    }
}

int main() {
    int n;
    cin >> n;  
    solve(n);  
    return 0;
}
