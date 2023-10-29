#include <bits/stdc++.h>
using namespace std;

//Maximum profit by buying and selling a share at most twice

int maxprofit(int price[], int n){
    int *profit = new int[n];
    for(int i = 0; i<n; i++){
        profit[i] = 0;
    }
    int max_price = price[n -1];
    for(int i = n-2; i>=0; i--){
        if(price[i]>max_price){
            max_price = price[i];
        }
        profit[i] = max(profit[i+1], max_price - price[i]);
    }
    int min_price = price[0];
    for(int i = 1; i<n; i++){
        if(price[i] < min_price){
            min_price = price[i];
        }
        profit[i] = max(profit[i-1], profit[i] + (price[i] - min_price));
    }
    int result = profit[n-1];
    return result;
}


int main(){
    int n;
    cin>>n;
    int arr[n];     //Array of prices
    for(int i =0;i<n;i++){
        int data;
        cin>>data;
        arr[i] = data;
    }
    cout<<"Max profit = "<<maxprofit(arr,n);
    return 0;
}
