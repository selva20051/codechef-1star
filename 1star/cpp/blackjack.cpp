#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int a,b;
        int sum = 21;
        cin>>a>>b;
        sum -= a+b;
        if(sum>10 || sum<1){
            cout<<-1<<endl;
        }else{
            cout<<sum<<endl;
        }
    }
    return 0;
}