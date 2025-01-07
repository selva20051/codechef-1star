#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int x;
        cin>>x;

        if(x%5==0){
            if((x-((x/10)*10))!=0){
                cout<<(x/10)+1<<endl;
            }else{
                cout<<x/10<<endl;
            }
        }else{
            cout<<-1<<endl;
        }
        

    }
    return 0;
}
    