#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

bool cycle(vector<string> s)
{
    map<char,int> mp;

    // for (int i=0;i<s.size();++i)
    // {
    //     for (int j=0;i<s[i].size();++j)
    //     {
    //         if(i==s.size()-1)
    //         {
    //             if(j==0)    mp[s[i][j]]++;
    //             break;
    //         }
    //         if (j==0)
    //         {
    //             mp[s[i][j]]++;
    //         }
    //     }  
    // }
    for(auto str:s)
    {
        for(auto c:str)
        {
            if(c==str[0])   mp[c]++;
        }
    }
    for(auto str:s)
    {
        // if(str==s[s.size()-1])  break;
        for(auto c:str)
        {
            if(c==str[str.size()-1]) mp[c]--;
        }
    }

    for(auto it:mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    // for (int i=0;i<s.size();++i)
    // {
    //     for (int j=0;i<s[i].size();++j)
    //     {
    //         if(i==s.size()-1)
    //         {
    //             // if(j==0)    mp[s[i][j]]++;
    //             break;
    //         }
    //         if (j==s[i].size()-1)
    //         {
    //             mp[s[i][j]]--;
    //         }
    //     }  
    // }
    int count=0;
    for(auto it:mp)
    {
        if(it.second==1)
        {
            count+=1;
        }
    }

    if(count==1)    return true;
    return false;


}


int main()
{
    int n;
    cin>>n;
    string s;
    vector<string> list;
    for(int i=0;i<n;++i)
    {
        while(cin>>s)
        {
            list.push_back(s);
            if(getchar()=='\n') break;
        }
    }
    // for(int i=0;i<list.size();++i)
    // {
    //     cout<<list[i]<<endl;
    // }

    bool res = cycle(list);
    cout<<"Cycle result: "<<res<<endl;

    return 0;
}