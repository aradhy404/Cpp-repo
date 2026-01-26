#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printvec(vector<int>v){
    for(int i = 0; i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int x;
    cin>>x;
    vector<int> v;
    int n;
    for(int i = 0; i<x;i++){
        cin>>n; 
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    printvec(v);
        return 0;
}
