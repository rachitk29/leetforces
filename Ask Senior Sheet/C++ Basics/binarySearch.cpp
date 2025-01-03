#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool binarySearch(const vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> array(n);
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    for (int i = 0; i < q; ++i) {
        int query;
        cin >> query;
        if (binarySearch(array, query)) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    return 0;
}
