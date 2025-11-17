#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>a={1,4,7,3,0,2};
    list<int>b={5,9,6,1,8,2};
    a.sort();
    a.unique();
    for(int aS:a){
        cout<<aS<<" ";
    }
    cout<<endl;
    b.sort();
    b.unique();
    for(int bS:b){
        cout<<bS<<" ";
    }
    cout<<endl;
    b.merge(a);
    for(int bM:b){
        cout<<bM<<" ";
    }
    return 0;
}