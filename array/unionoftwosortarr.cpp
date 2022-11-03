// #include <bits/stdc++.h>
// using namespace std;
// vector<int >unioninsort(int arr1[],int n,int arr2[], int m){

// set<int>s;
// vector<int>uni1;
// for(int i=0;i<n;i++){
//     s.insert(arr1[i]);
// }
// for(int i=0;i<n;i++){
//     s.insert(arr2[i]);
// }
// for(auto &it :s)
// uni1.push_back(it);
// return uni1;
// }
// int main(){
// int arr1[]={2,5,6,7,9};
// int arr2[]={2,4,4,5,9};
// int n=5;
// int m=5;
// vector<int>union1=unioninsort(arr1,n,arr2,m);
// for(auto it:union1){
//     cout<<it<<" ";
// }

// return 0;
// }




// using poiner********************8

#include <bits/stdc++.h>
using namespace std;
void printunion(int arr1[],int arr2[],int m,int n){
int i=0,j=0;
while(i<m&& j<n){
    if(arr1[i]<arr2[j]){
        cout<<arr1[i]<<" ";
        i++;
    }
    else if(arr2[j]<arr1[i]){
      cout<<arr2[j]<<" ";
      j++;
     
    }
    else{
        cout<<arr2[j]<<" ";
    i++;
    j++;
    
    }
}
// while(i<m)
//     cout<<arr1[i++]<<" ";
  

// while(j<n)
//     cout<<arr2[j++]<<" ";
   

// }
 while (i < m){
        cout << arr1[i++] << " ";
 }
    while (j < n){
        cout << arr2[j++] << " ";}
}
int main(){
 int arr1[]={ 1, 2, 4, 5, 6};
int arr2[]={2, 3, 5, 7};
int n=4;
int m=5;

printunion(arr1,arr2,m,n);

return 0;
}