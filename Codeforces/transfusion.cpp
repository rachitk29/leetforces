#include <iostream>
#include <vector>
using namespace std;

bool canMakeEqual(vector<int>& a) {
    int n = a.size();
    long long sum = 0;
    
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    
    if (sum % n != 0) {
        return false;
    }
    
    int target = sum / n;
    long long currDiff = 0;
    
    for (int i = 0; i < n; ++i) {
        currDiff += a[i] - target;
        
        if (currDiff < 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (canMakeEqual(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

/* 

1 4 2 1 = 8 / 4

1-4 = -3
4-4 = 0-3 = -3
2-4 = -2 - 3 = -5
1-4 = -3 - 5 = -8

*/