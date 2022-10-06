#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i = 0, j = 0, st=-1, en=-1, currSum = 0;

    while (j < n && (currSum + arr[j]) <= sum) {
        currSum += arr[j];
        j++;
    }
    if (currSum == sum) {
        cout << (i+1) << " " << j << endl;
        return 0;
    }
    while (j < n) {
        currSum += arr[j];
        while (currSum > sum) {
            currSum -= arr[i];
            i++;
        }
        if (currSum == sum) {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << endl;
    return 0;
}