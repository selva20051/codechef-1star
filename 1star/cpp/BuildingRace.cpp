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

        float a,b,x,y;
        cin>>a>>b>>x>>y;

        if((a/x)>(b/y)){
            cout<<"Chefina"<<endl;
        }else if((a/x)==(b/y)){
            cout<<"Both"<<endl;
        }else{
            cout<<"Chef"<<endl;
        }

    }
    return 0;
}
    