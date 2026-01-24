#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int x,y;
    cin>>x>>y;
    string word[10] = {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i = x;i<=y;i++){
        if(i>=1&&i<=9)
        cout<<word[i-1]<<endl;
        else cout << (i%2==0 ? "even" : "odd") << endl;
    }
    return 0;
}
