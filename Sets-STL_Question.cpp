#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int c;
    cin>>c;
    set<int> s;
    for (int i = 0; i<c;i++){
        int j,y;
        cin>>j>>y;
       if(j==1){
        s.insert(y);
        }
        else if(j==2){
            s.erase(y);
        }
        else if(j==3){
            auto it = s.find(y);
            if((it) == s.end()){
                cout<<"No"<<endl;
            }
            else {
            cout<<"Yes"<<endl;
            }
            
    } 
    }
    return 0;
}



