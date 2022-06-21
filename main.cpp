#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int main() {
  cout<<"enter the size: ";
  int n;
  cin>>n;
  int *arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  int *outp
  subset(arr,n);
  
}