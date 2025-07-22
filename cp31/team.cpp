#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int solvableCount = 0;
    
    for(int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;
        
        if(petya + vasya + tonya >= 2) {
            solvableCount++;
        }
    }
    
    cout << solvableCount;
    return 0;
}
