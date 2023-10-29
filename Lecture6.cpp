#include <bits/stdc++.h>
using namespace std;

//Swaps required to bring all the numbers less than k together

int minswap(int *arr, int n, int k){
    int count = 0;
    for(int i = 0;i<n; i++){
        if(arr[i]<= k){
            count++;
        }
    }
        int bad = 0;
        for(int i = 0; i<count; i++){
            if(arr[i]>k){
                bad++;
            }
        }
        int ans = bad;
        for(int i = 0, j = count; j<n;i++, j++){
            if(arr[i]>k){
                bad++;
            }
            if(arr[j]>k){
                bad++;
            }
            ans = min(ans,bad);
        }
    return ans;
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
    int x;
    cin>>x;
    cout<<"MINIMUM SWAPS required: "<<minswap(arr, n, x);
    return 0;
}
