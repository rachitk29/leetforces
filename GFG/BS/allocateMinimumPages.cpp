#include <iostream>
#include <algorithm>
using namespace std;

bool canAllocateBooks(int arr[], int n, int k, int maxPages) {
    int studentCount = 1;
    int pagesSum = 0;

    for (int i = 0; i < n; ++i) {
        pagesSum += arr[i];

        if (pagesSum > maxPages) {
            studentCount++;
            pagesSum = arr[i]; 
        }

        if (studentCount > k) 
            return false;
    }

    return true;
}
int findMinimumPages(int arr[], int n, int k) {

    // k == students
    if (n == 0 || n < k) return -1; 

    int totalPages = 0, maxBookPages = 0;
    for (int i = 0; i < n; ++i) {
        totalPages += arr[i];
        maxBookPages = max(maxBookPages, arr[i]);
    }

    int low = maxBookPages, high = totalPages;
    int result = -1;

    while (low <= high) {
        int midPages = low + (high - low) / 2;

        if (canAllocateBooks(arr, n, k, midPages)) {
            result = midPages;   
            high = midPages - 1; 
        } else {
            low = midPages + 1;  
        }
    }

    return result;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "Minimum pages each student has to read: " << findMinimumPages(arr, n, k) << endl;
    return 0;
}
