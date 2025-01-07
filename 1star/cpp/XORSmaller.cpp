#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,x=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        while(true){
            int count = 0;
            for(int k=0;k<n;k++){
                if((x^arr[k])<arr[k]){
                    if(x^arr[k]==0){
                        count++;
                       if(count==n){
                        cout<<arr[k]<<endl;
                        return 0;
                       }
                    }
                    count++;
                }
            }

            if(count==n){
                cout<<x<<count<<endl;
                break;
            }
            if(x>100000){
                cout<<0<<endl;
                break;
            }
            x++;
        }
    }
    return 0;
}
    