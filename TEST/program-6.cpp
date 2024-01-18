#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int numbers [9]={1,2,3,4,5,6,7,8,9};
    int target = 6;
    int start=0;
    int end=9;
    while(start<=end){
        int mid=end +(start-end)/2;
        if(numbers[mid]==target){
            cout<<"index of the targte "<< mid<<endl;
            break;
        }
        else if(numbers[mid]>target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    return 0;
}