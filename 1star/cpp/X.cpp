#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x<y){
            cout<<x<<endl;
        }else{
            cout<<(x/y)+x%y<<endl;
        }
    }
    return 0;
}