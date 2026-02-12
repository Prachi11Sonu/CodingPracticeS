#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution{
    public:
    int findMinDiff(vector<int>& arr,int m){
        int n=arr.size();
        if(m==0 || n==0){
            return 0;
        }
        if(m>n){
            return -1;
        }
        sort(arr.begin(),arr.end());
        int ans=INT_MAX;
        for(int i=0;i+m-1<n;i++){
           int diff=arr[i+m-1]-arr[i];
           ans=min(ans,diff);

        }
        return ans;

    }
};
int main(){
    Solution obj;
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<obj.findMinDiff(arr,m)<<endl;
}