#include<bits/stdc++.h>
using namespace std;
bool Solution(string s){
    int start=0, last=s.size()-1;
    while(start<last){
        if(s[start]!=s[last]){
            return false;
        }
        start++;
        last--;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    bool flag;
    flag = Solution(s);
    if(flag){
        cout<<"True";
    }
    else cout<<"False";


    return 0;
}