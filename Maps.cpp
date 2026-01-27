#include <bits/stdc++.h>
using namespace std;
void mprint(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "bcd";//time complexty of this also depends on the key
    //its basically m.size()*log(n)
    m[3] = "cdc"; // every key is unique as we can't put 2 values in one
    m.insert({4, "afg"});
    map<int, string>::iterator i;
    mprint(m);
    auto it = m.find(6);
    if (it == m.end())
    {
        cout << "No real value" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    /*for(i=m.begin();i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;

    } this can be used to print the maps but here's
     new and better version of it*/

    return 0;
}
