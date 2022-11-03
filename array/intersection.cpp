#include<iostream>
using namespace std;
void intersection(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m&&j<n){
        if(arr1[i]<arr2[j]){
            i++;

}
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;

        }
    
}}
int main(){
int arr1[]={3,4,5,5,5,7};
int arr2[]={3,5,6,6,7};
int m=6;
int n=5;
intersection(arr1,arr2,m,n);

return 0;
}