#include<bits/stdc++.h>
using namespace std;

vector<int> Solution(vector<int>v){
    vector<int>arr;
    for(int i=0; i<v.size(); i++){
        if(v[i]%2==0){
            arr.push_back(v[i]);
        }
    }
    return arr;


}

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int>ans;
    ans = Solution(v);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}