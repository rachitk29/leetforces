#include <iostream>
using namespace std;

int main() {
    int num;

    while (true) {
        cin >> num;  

        if (num == 1999) {
            cout << "Correct" << "\n";  
            break;
        } else {
            cout << "Wrong" << "\n";  
        }
    }

    return 0;
}
