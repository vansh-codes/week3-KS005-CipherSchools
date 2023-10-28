#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
  int i=-1;, j = n;
  while(i<j){
    while(I<=n-1 && arr[i]>0){
      i++;
    }
    while(j>=0 && arr[j]<0){
      j--;
    }
    if(i<j){
      swap(arr[i],aarr[j]);
    }
}

  if(i==0 || i==n){
    return;
  }

  int k=0;
  while(k<n && i<n){
    swap(arr[k],arr[i]);
    i++;
    k+=2;
  }
}

void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    cout<<endl;
  }

int main(){
  int n;
  cin>>n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  cout<<"Given array is: ";
  printArray(arr,n);

  cout<<"Rearranged Array: ";
  rearrange(arr,n);
  printArray(arr,n);
  return 0;
}
