#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int x,y,d;
        cin>>x>>y>>d;

        if(abs(x-y)<=d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
    