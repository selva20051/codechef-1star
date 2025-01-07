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

        float h,x,y,count=1;
        cin>>h>>x>>y;
        h = h-y;
        if(h<=0){
            cout<<1<<endl;
        }else{
            cout<<ceil(h/x);
            count += ceil(h/x);
            // cout<<count<<endl;
        }

    }
    return 0;
}
    