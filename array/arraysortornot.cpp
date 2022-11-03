#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool arraysort(int arr[],int n){
     for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
    if(arr[i]>arr[j])
        return false;}
    }

     return true;


}
int main(){
int arr[5]={2,3,6,7,8};
int ans=arraysort(arr,5);
if(ans){
cout<< "true"<<" ";}
else {
    cout<<"false"<<" ";
}
return 0;
}