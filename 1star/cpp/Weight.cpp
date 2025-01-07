#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        bool status = true;
        int w,arr[3];
        cin>>w>>arr[0]>>arr[1]>>arr[2];
        
        for(int i=0;i<3;i++){
            
            if(w==arr[i]){
                cout<<"Yes"<<endl;
                status = false;
                break;
            }
            if(w==arr[0]+arr[1]+arr[2]){
                cout<<"Yes"<<endl;
                status = false;
                break;
            }

            for(int j=0;j<3;j++){
                if(i!=j){
                    if(arr[i]+arr[j]==w){
                        cout<<"YEs"<<endl;
                        status = false;
                        break;
                    }else{
                        status = true;
                    }
                }
            }
            if(!status){
                break;
            }
        }
        if(status){
                cout<<"NO"<<endl;
            }
    }
    return 0;
}
    