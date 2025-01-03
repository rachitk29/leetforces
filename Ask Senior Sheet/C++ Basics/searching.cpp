#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int X;
    cin >> X;

    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
    return 0;
}
