#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        float a,x,b,y;
        cin>>a>>x>>b>>y;

        if((a/x)>(b/y)){
            cout<<"ALICE"<<endl;
        }else if((a/x)==(b/y)){
            cout<<"EQUAL"<<endl;
        }else{
            cout<<"BOB"<<endl;
        }
    }
    return 0;
}