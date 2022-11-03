#include<iostream>

using namespace std;
int secondlargest(int arr[],int n){
int largest=INT_MIN,secondlargest=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    }
    else if((arr[i]<secondlargest)&&(arr[i]<largest)){
        secondlargest=arr[i];

    }
}
return secondlargest;
}
int main(){
int arr[7]={2,3,4,4,6,7,8};
cout<<secondlargest(arr,7);
return 0;
}