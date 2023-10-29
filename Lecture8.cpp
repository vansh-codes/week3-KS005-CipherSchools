#include <bits/stdc++.h>
using namespace std;

//Merging overlapping intervals and return non merging

vector<vector<int>> mergi(vector<vector<int>>& intervals){
    vector<vector<int>> res;
    if(intervals.size() == 0){
        return res;
    }
    sort(intervals.begin(), intervals.end(), [](vector<int>&a, vector<int> &b){
        return a[0] < b[0];
    });
    vector<int> curr = intervals[0];
    for(int i = 0; i<intervals.size();i++){
        if(curr[1]<intervals[i][0]){
                res.push_back(curr);
                curr = intervals[i];
        }
        else{
            curr[1] = max(curr[1], intervals[i][1]);
        }
    }
    res.push_back(curr);
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n);
    for(int i = 0; i<n; i++){
       int data1, data2;
       cout<<"Enter range"<<i<<" element 1: ";
        cin>>data1;
        v[i].push_back(data1);
        cout<<"Enter range"<<i<<" element 2: ";
        cin>>data2;
        v[i].push_back(data2);
    }
    vector<vector<int>>r;
    r = mergi(v);
    for(int i = 0; i<n; i++){
        cout<<"["<<r[i][0]<<","<<r[i][1]<<"]"<<endl;
    }
    return 0;
}
