#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>nums={1,5,3,8,2,6,4,8,9};
    nums.sort();
    nums.unique();
    for(int n:nums){
        cout<<n<<" ";
    }
    return 0;
}