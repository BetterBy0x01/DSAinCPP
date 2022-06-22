//BRUTE FORCE O(N^3)
// #include <iostream>
// #include <climits>
// using namespace std;

// int main() {
//     int n, currSum = 0, maxSum = INT_MIN;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     } 
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             for (int k = i; k <= j; k++) {
//                 currSum += a[k];
//             }
//             maxSum = max(maxSum, currSum);
//             currSum = 0;
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }

// OPTIMISED O(N^2)
// CUMULATIVE SUM /PREFIX SUM APPROACH
// https://youtu.be/pVS3yhlzrlQ for better explanation

// DO IT AGAIN

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int currSum[n+1];
//     currSum[0] = 0;

//     for (int i = 1; i <= n; i++) {
//         currSum[i] = currSum[i-1] + arr[i-1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 1; i <= n; i++) {
//         int sum = 0;
//         maxSum = max(maxSum, currSum[i]);
//         for (int j = 0; j < i; j++) {
//             sum = currSum[i] - currSum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum << endl;

//     return 0;
// }

// USING KADANE'S ALGORITHM O(N)         -- OPTIMAL

//DO IT AGAIN

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i]; 
//     } 
//     int currSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         currSum += arr[i];
//         if(currSum < 0) {
//             currSum = 0;
//         }
//         maxSum = max(currSum, maxSum);
//     }
//     cout << maxSum << endl;
//     return 0;
// }

// Maximum circular subarray sum
// Max subarray sum = total sum of array - sum of non-contributing elements (because if contributing elemnts are wraping then the non-contributing elements would be non-wrapping)
// to get sum of non-constributing elements first make the negative no. positive & vice versa for each element in the array.
// then apply kadane's algorithm

#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (currentSum < 0) {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(arr, n);
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }
    wrapSum = totalSum + kadane(arr, n);

    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}


