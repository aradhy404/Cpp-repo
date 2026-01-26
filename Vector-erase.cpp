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
    int x,e,y,j;
    cin>>x;
   
    vector<int> v;
    int n;
    for(int i = 0; i<x;i++){
        cin>>n; 
        v.push_back(n);
    }
    cin>>e;
    v.erase(v.begin()+(e-1));
    cin>>y>>j;
    v.erase(v.begin()+(y-1),v.begin()+(j-1));
    cout<<v.size()<<endl;
    printvec(v);
        return 0;
}
