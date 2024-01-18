#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number[]={2,4,5,3,1,6,8,9,7};
    int target_sum=10;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if(number[i]+number[j]==target_sum){
                cout<<"("<<number[i]<<","<<number[j]<<")";
                
            }
        }
    }
    return 0;
}