#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s="This is a sample text. This is used for testing purposes";
    unordered_map<string, int>mp;
    //cout<<s;
    string temp="";
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            mp[temp]++;
            temp="";
        }
        else temp+=s[i];

    }
    mp[temp]++;
    temp="";
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            cout<<temp<<":"<<mp[temp]<<' ';
            temp="";
        }
        else temp+=s[i];

    }
    
    
    
    return 0;
}