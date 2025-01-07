#include <algorithm> 
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int num[3];
        cin >> num[0] >> num[1] >> num[2];
        sort(num, num + 3);
        cout<<num[1]<<endl;
    }
    return 0;
}
    