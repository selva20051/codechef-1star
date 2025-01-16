#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector> 
using namespace std;

int main(){

    int t,degree=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int poly[n];

        for(int i = 0;i<n;i++){
            cin>>poly[i];
        }
        for(int i = 0;i<n;i++){
            if(poly[i]!=0){
                degree = i;
            }
        }    
        cout<<degree<<endl;
    }
    return 0;
}
    