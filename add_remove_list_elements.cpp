#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string>fruits={"Apple","Banana","Cherry"};
    fruits.push_front("Guava");
    fruits.push_back("Grape");
    for(string frt:fruits){
        cout<<frt<<endl;
    }
    fruits.pop_front();
    fruits.pop_back();
    for(string frts:fruits){
        cout<<frts<<endl;
    }
    return 0;
}