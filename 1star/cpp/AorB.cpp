#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int a,b;
        cin>>a>>b;

        int a1,b1,a2,b2;
        b1 = 1000 - (b*4);
        a1 = 500 - ((a+b)*2);

        a2 = 500 - (a*2);
        b2 = 1000 - ((a+b)*4);

        if((a1+b1)>=(a2+b2)){
            cout<<a1+b1<<endl;
        }else{
            cout<<a2+b2<<endl;
        }
        
    }
    return 0;
}
    