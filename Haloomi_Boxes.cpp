#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n),sorted_arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sorted_arr[i]=arr[i];
        }
        sort(sorted_arr.begin(), sorted_arr.end());
        if(k==1){
            if(arr==sorted_arr){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}