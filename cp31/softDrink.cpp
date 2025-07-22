#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k * l;
    int requiredDrink = totalDrink / nl; 
    int totalLime = c * d;               
    int totalSalt = p / np;              

    cout << min(min(requiredDrink, totalLime), totalSalt) / n;

    return 0;
}
