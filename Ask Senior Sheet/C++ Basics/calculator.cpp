#include <iostream>
using namespace std;

int main() {
    int A, B;
    char op;
    // Take input in the format A operator B (e.g., 7+54)
    cin >> A >> op >> B;

    if(op == '+') {
        cout << A + B << endl;
    } else if(op == '-') {
        cout << A - B << endl;
    } else if(op == '*') {
        cout << A * B << endl;
    } else if(op == '/') {
        if (B != 0) {
            cout << A / B << endl;
        } 
    }

    return 0;
}
