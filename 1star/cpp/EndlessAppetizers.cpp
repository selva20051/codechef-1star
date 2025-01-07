#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include <algorithm> 
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        float x,y,r,extra,total;
        cin>>x>>y>>r;

        extra = r/30;
        total = x+extra;
        cout<<ceil(total/y)<<endl;
    }
    return 0;
}
    