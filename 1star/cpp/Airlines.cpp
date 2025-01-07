#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        float x,n;
        cin>>x>>n;

        if((x*100)<=n){
            cout<<ceil((n-(x*100))/100)<<endl;
        }else{
            cout<<0<<endl;
        }

    }
    return 0;
}
    