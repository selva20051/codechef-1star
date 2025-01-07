#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,count=0;
        cin>>n;
        int age[n];
        for(int i=0;i<n;i++){
            cin>>age[i];
        }
        
        for(int i=0;i<n;i++){
            if(age[i]<=60 && age[i]>=10){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
    