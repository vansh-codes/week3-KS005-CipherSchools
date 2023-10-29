#include <bits/stdc++.h>
using namespace std;

//To find the maximum product in the array

long long maxproduct(int *arr, int n){
    long long int maxp = INT_MIN, prod = 1;
    for(int i = 0; i<n; i++){
        prod *= arr[i];
        maxp = max(maxp, prod);
        if(prod == 0){
            prod = 1;
        }
    }
    prod = 1;
    for(int i = n-1; i>=0; i--){
        prod *= arr[i];
        maxp = max(maxp, prod);
        if(prod == 0){
            prod = 1;
        }
    }
    return maxp;

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum product of array: "<<maxproduct(arr,n);
    return 0;
}
