// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={3,4,5,6,7,8,9,1,3,4};
// int n=10;
// int temp[n];
// for(int i=2;i<n;i++){
// temp[i-2]=arr[i];


// }
// temp[n-1]=arr[0];
// temp[n-2]=arr[1];
// for(int i=0;i<n;i++){
//     cout<<temp[i]<<" ";
// }
// return 0;
// }
#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,5,6,7,8,9,1,6,4};
int n=10;
int k=2;
int temp[k];
for(int i=0;i<k;i++){
temp[i]=arr[n-k+i];


}

for(int i=n-k+1;i>=0;i--){
    temp[i+k]=arr[i];
    }
//     for (int i = n - k - 1; i >= 0; i--)
//   {
//     arr[i + k] = arr[i];
//   }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
//     for (int i = n - k - 1; i >= 0; i--)
//   {
//     arr[i + k] = arr[i];
//   }
return 0;
}



// 2nd approach--

// #include<iostream>
// using namespace std;
// int main(){
// int arr[]={3,4,5,6,7,8,9,1,3,4};
// int n=10;
// int temp=arr[0];
// for(int i=0;i<n-1;i++){
// arr[i]=arr[i+1];


// }
// arr[n-1]=temp;

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// return 0;
// }
