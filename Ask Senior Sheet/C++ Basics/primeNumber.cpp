#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false; 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false; 
    }
    return true; 
}

void prime(int nums) {
    for (int i = 2; i <= nums; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    prime(n);
    return 0;
}
