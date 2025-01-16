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
        int n,a,b;
        cin>>n>>a>>b;

        cout<<(log2(n)*a)+((log2(n)-1)*b)<<endl;
    }
    return 0;
}
    