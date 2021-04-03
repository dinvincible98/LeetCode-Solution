#include <iostream>
#include <string>
using namespace std;

void moveK(string &s,int k)
{
    for (int i=0;i<k+1;++i)
    {
        s+=s[i];
    }
    s.erase(0,k+1);
}

int main()
{
    string s = "5680apple";
    int k = 6;
    moveK(s,6);
    cout<<s<<endl;

    return 0;
}