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

        int coin,q,r;
        cin>>coin;
        q = coin/5;
        r = coin%5;
        cout<<(q*4)+r<<endl;
    }
    return 0;
}
    