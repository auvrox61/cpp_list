#include<bits/stdc++.h>
using namespace std;

int main(){
    list<string>fruits={"Apple","Banana","Cherry"};
    fruits.front()="Guava";
    fruits.back()="Grape";
    for(string frt:fruits){
        cout<<frt<<endl;
    }
    return 0;
}