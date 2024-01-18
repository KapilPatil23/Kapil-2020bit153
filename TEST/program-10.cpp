#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==1 || n==0 ){
        return 1;
    }
    return n*fun(n-1);
    
}

int main()
{
    int n;
    cin>>n;
    int ans=fun(n);
    cout<<ans;
    
    return 0;
}