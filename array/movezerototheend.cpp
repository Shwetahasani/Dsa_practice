// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={0,4,0,6,7,0,9,1,6,4};
// int n=10,j=0;
// int temp[n];
// for(int i=0;i<n;i++){
//     if(arr[i]!=0){
//         temp[j]=arr[i];
//         j++; 
//         }
// }
// while(j<n)
// {temp[j]=0;
// j++;
// }
//        for(int i=0;i<n;i++){
//         cout<<temp[i]<<" ";
//     }

// return 0;
// }





#include<bits/stdc++.h>

using namespace std;
void zerosToEnd(int arr[], int n) {

  //finding first zero occurrence
  int k = 0;
  while (k < n) {
    if (arr[k] == 0) {

      break;
    } else {
      k = k + 1;
    }
  }

  //finding zeros and immediate non-zero elements and swapping them
  int i = k, j = k + 1;

  while (i < n && j < n) {
    if (arr[j] != 0) {
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;

    }

    j++;

  }
  for (i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] ={ 1,2,3,0,4,1,0,3};
  zerosToEnd(arr, 8);
}