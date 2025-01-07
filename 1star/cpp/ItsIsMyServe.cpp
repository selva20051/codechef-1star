#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,total,count=0;
        cin>>p>>q;
        total = p+q;
        for(int i = 0;i<=total;i+=2){
            count+=1;
        }
        if(count%2==0){
            cout<<"BOB"<<endl;
        }else{
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}