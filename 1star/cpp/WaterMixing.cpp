#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a==b){
            cout<<"Yes"<<endl;
        }else if (a<b){
            if((b-a)<=x){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }else{
            if((a-b)<=y){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
    