#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:

//function to find if there exists a triplet in the array A[] which sums upto X
    bool find3number(int A[], int n, int x){
      sort(A, A+n);
      for(int i=0;i<n;i++){
        int y = x - A[i];
        int low = i+1, high = n-1;
        while(low<high){
          if(A[low] + A[high] == y){
            return 1;
          }
          else if(A[low] + A[high] > y){
            high--;
          }
          else if(A[low] + A[high] < y){
            low++;
          }
        }
      }
    return 0;
]
