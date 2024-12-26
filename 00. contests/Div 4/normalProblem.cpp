#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;
    cin.ignore(); 
    
    while (t--) {
        string str;
        getline(cin, str); 
        
        reverse(str.begin(), str.end()); 
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == 'p') {
                str[i] = 'q';
            } else if (str[i] == 'q') {
                str[i] = 'p';
            }
        }
        
        cout << str << "\n";
    }
}
