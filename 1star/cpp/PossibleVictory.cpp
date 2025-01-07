#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<algorithm> 
using namespace std;

int main(){

    int r,o,c,pos;
    cin>>r>>o>>c;

    pos = (20-o)*36;
    if((pos+c)>r){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}
    