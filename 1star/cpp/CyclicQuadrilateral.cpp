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

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if((a+c)==180 && (b+d)==180){
            cout<<"yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
    