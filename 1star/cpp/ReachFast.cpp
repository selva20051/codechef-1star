#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<algorithm> 
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        float a,b,k;
        cin>>a>>b>>k;

        if(a==b){
            cout<<0<<endl;
        }else if(a<b){
            cout<<ceil((b-a)/k)<<endl;
        }else{
            cout<<ceil((a-b)/k)<<endl;
        }

    }
    return 0;
}
    