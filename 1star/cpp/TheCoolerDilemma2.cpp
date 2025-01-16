#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector> 
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int x,y;
        cin>>x>>y;

        cout<<floor((y-1)/x)<<endl;

    }
    return 0;
}
    