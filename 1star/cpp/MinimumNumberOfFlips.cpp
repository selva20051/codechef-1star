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

        int n;
        cin>>n;
        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int count=0;
        if(n%2==0){

            for(int j=0;j<n;j++){
                if(a[j]==-1){
                    count++;
                }
            }

            if(count==(n/2)){
                cout<<0<<endl;
            }else{
                cout<<abs((n/2)-count)<<endl;
            }

        }else{
            cout<<-1<<endl;
        }

    }
    return 0;
}
    

