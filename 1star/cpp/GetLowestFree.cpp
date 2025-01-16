#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<algorithm>
#include<vector> 
using namespace std;

int main(){

    int t,n;
    cin>>t;
    while(t--){

        vector<int> cost;

        for(int i=0;i<3;i++){
            cin>>n;
            cost.push_back(n);
        }

        sort(cost.begin(),cost.end());
        
        cout<<cost[1]+cost[2]<<endl;

    }
    return 0;
}
    