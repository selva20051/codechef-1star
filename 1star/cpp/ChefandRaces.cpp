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

        int count= 2,a,b,x,y;
        cin>>a>>b>>x>>y;
        if (a ==x or a==y) count--;
        if (b ==x or b==y) count--;
        cout<<count<<endl;
    }
    return 0;
}