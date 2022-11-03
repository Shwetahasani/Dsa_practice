#include<iostream>
using namespace std;
int main(){
int arr[]={3,4,5,6,7,8,9,1,6,4};
int n=10;
 int l;
int k=4;
for(int i=0;i<n;i++){
    if(arr[i]==k){
         l=i;
    }
}
cout<<l;
return 0;
}