#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> Findduplicates(vector<int>& arr){
        int n=arr.size();
        vector<int> freq(n+1,0);
        vector<int> ans;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
            if(freq[arr[i]]==2){
                ans.push_back(arr[i]);

            }
        }
        return ans;
    }
};
int main(){
    Solution obj;
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> result =obj.Findduplicates(arr);
    if(result.empty()){
        cout<<"No duplicates";
    }
    else{
        cout<<"Duplicates: ";
        for(int x: result){
            cout<<x<<" ";
        }
    }
    return 0;



}