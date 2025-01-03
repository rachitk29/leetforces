#include <iostream>
using namespace std;

void solve(int nums) {
    for (int i = 1; i <= nums; i++) {
        if (nums % i == 0) {
            cout << i << "\n";
        }
    }
}

int main() {
    int n;
    cin >> n;  
    solve(n);  
    return 0;
}
