#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int num) {
        int reversed = 0;
        
        while (num > 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num /= 10;
        }
        
        return reversed;
    }
};

int main() {
    Solution solution;
    int num;
    cin >> num;

    int reversedNum = solution.reverse(num);  

    cout << reversedNum << endl;

    if (num == reversedNum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
