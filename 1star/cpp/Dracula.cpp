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

        float n;
        cin>>n;

        if((n/7)<floor(n/7)+0.15){
            cout<<floor(n/7)<<endl;
        }else{
            cout<<ceil(n/7)<<endl;
        }

    }
    return 0;
}
    