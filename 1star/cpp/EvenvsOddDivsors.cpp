#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int x,f=0,g=0;
        cin>>x;

        for(int i=1;i<x+1;i++){
            if(x%i==0){
                if(i%2==0){
                    f++;
                }else{
                    g++;
                }
            }
        }

        if(f<g){
            cout<<-1<<endl;
        }else if(f==g){
            cout<<0<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}
    