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

        int k;
        cin>>k;
        int n[k],l,count=0;
        cin>>l;
        for(int i=0;i<k;i++){
            cin>>n[i];
        }
        for(int j=0;j<k;j++){
            n[j] = n[j]+l;
            if(n[j]%7==0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
    