#include<iostream>
using namespace std;
int main(){
int arr[]={2,4,6,1,1,3,1,1,1};
int n=9;
int cnt=0,maxi=0;
for(int i=0;i<n;i++)
{
if(arr[i]==1){
    cnt++;
}
else{cnt=0;
}
maxi=max(maxi,cnt);
}
cout<<maxi;
return 0;
}