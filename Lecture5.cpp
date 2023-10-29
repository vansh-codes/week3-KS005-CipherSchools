#include <bits/stdc++.h>
using namespace std;

//finding the next permutation
//In place algorithm:  No extra space needed

void nextper(vector<int>&nums){
    if(nums.size() == 1){
        return;
    }
    int id;
    for(int i = nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            id = i;
            break;
        }
    }
    if(id<0){
        reverse(nums.begin(),nums.end());
    }
    else{
        int id2 = 0;
        for(int i = nums.size()-1;i>=0;i--){
            if(nums[i]>nums[id]){
                id2 = i;
                break; 
            }
        }
        swap(nums[id],nums[id2]);
        reverse(nums.begin()+id+1,nums.end());
    }
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    nextper(arr);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
