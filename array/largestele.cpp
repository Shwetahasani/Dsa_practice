// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;
// int largest(int num[],int n){
//     sort(num,num+n);
//     return num[n-1];
// }
// int main(){
// int n;
// cin>>n;
// int arr[100];
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<largest(arr,n);
// return 0;
// }








// 2nd approach using 'max' variable



#include<iostream>
using namespace std;
int sort(int num[],int n){
    int maxi=max(num[0],num[1]);
    for(int i=2;i<n;i++){
        if(maxi<num[i]){
            maxi=num[i];
        }
    }
    return maxi;
}
int main(){
int arr[7]={2,5,6,9,7,6,3};
cout<<sort(arr,7);


return 0;
}