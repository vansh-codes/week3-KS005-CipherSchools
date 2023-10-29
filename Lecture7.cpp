#include <bits/stdc++.h>
using namespace std;

//Minimum number of jumps that we can take to end of elements and if can't reach return -1
//can't jump if 0

int minJumps(int arr[], int n){
    if(n<= 1){
        return 0;
    }
    if(arr[0] == 0){
        return -1;
    }
  
    int maxreach = arr[0];
    int step = arr[0];
    int jump = 1;
    int i = 1;
    for(i = 1; i<n; i++){
        if(i == n-1){
            return jump;
        }
        maxreach = max(maxreach, i+arr[i]);
        step--;
        if(step == 0){
            jump++;
            if(i>= maxreach){
                return -1;
            }
            step = maxreach-i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        arr[i] = data;
    }

    cout<<"Minimum jumps "<<minJumps(arr, n);
    return 0;
}
