#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int free;
        int s,x,y,z;
        cin>>s>>x>>y>>z;

        free = s-(x+y);

        if(free>=z){
            cout<<0<<endl;
        }else if(z<=x || z<=y || z<=free+x || z<=free+y){
            cout<<1<<endl;
        }else if(z<=max(x,y) || z>min(x,y)){
            cout<<2<<endl;
        }
    }
    return 0;
}
    