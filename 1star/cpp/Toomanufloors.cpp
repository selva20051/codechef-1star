#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int x,y,floorx,floory;
        cin>>x>>y;
        floorx = x/10;
        floory = y/10;
        if(x%10==0){
            floorx--;
        }
        if(y%10==0){
            floory--;
        }
        cout<<abs(floorx-floory)<<endl;
    }
    return 0;
}
    