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

        vector<int> num;
        int n,alice,bob;
        for(int i = 0;i<6;i++){
            cin>>n;
            num.push_back(n);
        }

        sort(num.begin(),num.begin()+3);
        sort(num.begin()+3,num.end());

        alice = num[1]+num[2];
        bob = num[4]+num[5];

        if(alice==bob){
            cout<<"Tie"<<endl;
        }else if(alice>bob){
            cout<<"Alice"<<endl;
        }else{
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}
    