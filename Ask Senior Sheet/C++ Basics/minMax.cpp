#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int minimum = min({num1, num2, num3});
    int maximum = max({num1, num2, num3});

    cout << minimum << " " << maximum << endl;

    return 0;
}


/* 

// without predefined function

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    // Finding the minimum
    int minimum = num1;
    if (num2 < minimum) {
        minimum = num2;
    }
    if (num3 < minimum) {
        minimum = num3;
    }

    // Finding the maximum
    int maximum = num1;
    if (num2 > maximum) {
        maximum = num2;
    }
    if (num3 > maximum) {
        maximum = num3;
    }

    cout << minimum << " " << maximum << endl;

    return 0;
}


 */