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

        int num,count=0;
        cin>>num;
        for(int i = 1;i<=num;i++){
            if(num%i==0){
                count++;
            }
        }
        if(count==2){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}
    