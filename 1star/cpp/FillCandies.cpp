#include<iostream>
#include<cmath>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    while(t--){
        float n,k,m,bag;
        cin>>n>>k>>m;
        bag = k*m;
        cout<<ceil(n/bag);
    }
    return 0;
}