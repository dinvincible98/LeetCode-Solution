#include <iostream>
#include <map>
#include <string>
using namespace std;

bool isSub(const string s1,const string s2)
{
    if(s2.size()>s1.size()) return false;
    map<char,int> mp;
    for (auto c:s1)
    {
        mp[c]++;
    }
    for (auto c:s2)
    {
        mp[c]--;
    }
    int cnt = 0;
    for(auto it:mp)
    {

        if(it.second==1)    cnt++;
    }

    int diff = s1.size()-s2.size();
    if(cnt == diff)    return true;
    return false;
}


int main()
{

    string s1 = "AABCD";
    string s2 = "CABD";
    bool res = isSub(s1,s2);
    cout<<res<<endl;

    return 0;
}