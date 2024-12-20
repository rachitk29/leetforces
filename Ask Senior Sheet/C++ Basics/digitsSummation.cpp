#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
   
    // we use long long becuase in the problem is mention that Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).
    long long a, b;
    cin >> a >> b;
    int aLast = a % 10;
    int bLast = b % 10;
    
    int sum = aLast + bLast;
    cout << sum << "\n";

}


