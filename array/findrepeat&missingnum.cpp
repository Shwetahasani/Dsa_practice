#include<iostream>
using namespace std;
int main(){
int arr[]={3,3,4,7,8,9};
int n=6;
for(int i=0;i<n;i++){
int j=i+1;
if(arr[i]=arr[j+1]){
    cout<<arr[i];
}
}
return 0;
}