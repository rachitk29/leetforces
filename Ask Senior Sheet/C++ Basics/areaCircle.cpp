#include <iostream>
#include <iomanip> 
using namespace std;

// const double pi = 3.141592653; 

int main() {
    double r;
    cin >> r;

    double pi = 3.141592653; 
    cout << fixed << setprecision(9);
    cout << pi * r * r;
}
