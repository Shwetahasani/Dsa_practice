#include<iostream>
using namespace std;
void removedupli(int arr[],int n){
    int j=0;
for(int i=0;i<n-1;i++){
    
        if(arr[i]!=arr[j]){
            arr[j]=arr[i];
            j++;
            }

}
arr[j]=arr[n-1];
for(int i=0;i<j+1;j++){
  cout<<arr[i]<<" ";
}

}
int main(){
int arr[7]={2,4,6,6,7,8,9};
removedupli(arr,7);
return 0;
}