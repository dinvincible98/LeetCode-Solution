#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverse(string s)
{
    vector<string> list;
    for(int i=0;i<s.size()-1;++i)
    {
        for(int j=i+1;j<s.size();++j)
        {
            if(s[j]==' ')
            {
                list.push_back(s.substr(i,j-i));
                i=j;
                break;
            }
            if(j==s.size()-1)
            {
                list.push_back(s.substr(i,j-i+1));
                i=j;
                break;
            }
        }
    }
    // cout<<list[list.size()-1]<<endl;


    string res;
    for (int i=list.size()-1;i>=0;i--)
    {
        res += list[i]+' ';
    }
    res.pop_back();
    return res;
}

int main()
{
    string s = "I am a 22 years Old and I am  A master student";
    string res = reverse(s);

    cout<<res<<endl;
    return 0;
}