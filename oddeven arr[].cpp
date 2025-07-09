#include<iostream>
using namespace std;
int main(){
  int n,even=0,odd=0;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
  if(arr[i]%2==0){
    even+=1;
  }else
   odd+=1;
  }
   cout<<"Odd:"<<" "<<odd<<endl;
   cout<<"Even:"<<" "<<even;
   
    return 0;
}
