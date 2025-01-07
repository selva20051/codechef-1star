#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,a,b,count=0;
        cin>>n>>a>>b;

        for(int i=1;i<=n;i++){
            if(i%2==0){
                count += a;
            }else{
                count += b;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
    