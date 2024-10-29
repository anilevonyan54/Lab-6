#include <iostream>

using namespace std;

int findMissingNumber(int nums[], int n) {
    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int n = 6; 
    int nums[] = {1, 2, 3, 5, 6};

    int missingNumber = findMissingNumber(nums, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}
