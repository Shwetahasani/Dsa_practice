#include<bits/stdc++.h>

using namespace std;

int longestSubArrWithSumK_BF(int arr[], int n, int k) {
  int maxLength = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];
      if (sum == k)
        maxLength = max(maxLength, (j - i + 1));
    }

  }
  return maxLength;
}

int main() {

  int arr[] = {2,3,5,1,9};
  int n = sizeof(arr) / sizeof(arr[0]), k = 10;

  cout << "Length of the longest subarray with sum K is " << 
  longestSubArrWithSumK_BF(arr, n, k);

  return 0;
}