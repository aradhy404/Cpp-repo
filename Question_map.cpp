#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    map<string,int> m;
    for(int i = 0;i<x;i++){
        string y;
        cin>>y;
        m[y]++;
        // insert -> it nerver overwrites the code second time it got input it will ignore it
        //m[y]++ if there's no value it gives 0 but when there will be a value it retruns 1 and so on.
        
    }
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
