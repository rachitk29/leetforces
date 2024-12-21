#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    }

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}


/* #include<iostream>
using namespace std;

int main() {

    int num;
    cin >> num;
    int arr [num];
    
    int evenNum = 0, oddNum = 0, posNum = 0, negNum = 0;

    for(int i=0; i<num; i++){
        cin >> arr[i];

        if(arr[i] % 2 == 0) { 
            evenNum++;
        } else {
            oddNum++;
        }
        
        if (arr[i] > 0) {
            posNum++;
        } else if (arr[i] < 0) {
            negNum++;
        }

        cout << "Even : " << evenNum << "\n";
        cout << "Odd : " << oddNum << "\n";
        cout << "Positive : " << posNum << "\n";
        cout << "Negative : " << negNum << "\n";
    }
} */