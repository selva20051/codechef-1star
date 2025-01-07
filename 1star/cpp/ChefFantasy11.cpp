#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include <algorithm> 
using namespace std;


long long fact(int n){
    long facto = 1;
    for(int i = 1;i<=n;i++){
        facto*=i;
    }
    return facto;
}

int main(){

    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        cout<<(fact(n)/(fact(n-2)))<<endl;

    }
    return 0;
}
    