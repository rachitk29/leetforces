// C++ program to find if the array can be divided into
// three segments by finding first two segments

#include <iostream>
#include <vector>
using namespace std;

// function to return the index pair of equal sum segments
vector<int> findSplit(vector<int> &arr) {
    vector<int> res;
    int total = 0;

    for (int ele : arr)
        total += ele;

    // If the total sum is not divisible by 3,
    // it's impossible to split the array
    if (total % 3 != 0) {
        res = {-1, -1};
        return res;
    }

    // Keep track of the sum of current segment
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        currSum += arr[i];

        // If the valid segment is found, store its index
        // and reset current sum to zero
        if (currSum == total / 3) {
            currSum = 0;
            res.push_back(i);

            // If two valid segments are found and third non
            // empty segment is possible, return the index pair
            if (res.size() == 2 && i < arr.size() - 1)
                return res;
        }
    }
  
    // If no index pair is possible
    res = {-1, -1};
    return res;
}

int main() {
    vector<int> arr = {1, 3, 4, 0, 4};
    vector<int> res = findSplit(arr);

    cout << res[0] << " " << res[1];

    return 0;
}