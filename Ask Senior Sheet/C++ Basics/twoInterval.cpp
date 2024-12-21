#include <iostream>
#include <vector>
using namespace std;

int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    if (r1 < l2 || r2 < l1) {
        cout << -1 << endl; 
        return 0;
    }

    int overlapStart = max(l1, l2);
    int overlapEnd = min(r1, r2);

    cout << overlapStart << " " << overlapEnd << endl;

    return 0;
}
