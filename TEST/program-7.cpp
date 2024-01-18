#include<bits/stdc++.h>
using namespace std;
bool find(string temp, char c){
    for(int i=0; i<temp.size(); i++){
        if(temp[i]==c){
            return true;
        }
        return false;
    }
}
int main()
{
    string s;
    cin>>s;
    int ans=0;
    set<char>st;
    string temp="";
    bool flag=false;
    for(int i=0; i<s.size(); i++){
        if(find(temp, s[i])==true){
            flag=true;
            if(ans<temp.size()){
                ans=temp.size();
            }
            temp="";
        }
        
        else temp+=s[i];

     }
     if(flag==false){
        cout<<s.size();
     }
     else cout<<ans<<endl;


    return 0;
}