#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v){
    for(int i =0;i<v.size();i++){
        //v.size()-> O(1)
        //v.size determines the current size of vector
        cout<<v[i]<<" ";
    }
cout<<endl;
}

int main(){
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        //vector<int> v(10);this will declare the vector of size 10 in which  all the values are 0 
        // if do this vector<int> v(10, 3) create a array of size in which all values are 3

        vector<int> v;
        v.pop_back();// this will remove the last values of vector and it's O(1)
        v.push_back(x);//O(1)

        //we put values in vector by push_back function
        vector<int> v1=v;
        //this copy the v1 vector and its time complexity is O(n)

    }
    printvec(v);
    
}
