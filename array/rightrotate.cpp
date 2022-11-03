#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,5,6,7,8,9,1,3,4};
int n=10;
int i=0;
arr[0]=arr[n-2];
arr[1]=arr[n-1];

for(int i=2;i<n-2;i++){
    arr[i]=arr[i];
}
return 0;
}