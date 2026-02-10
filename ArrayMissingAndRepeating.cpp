#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    vector<int> findMissingRepeating(vector<int>& arr){
        int n=arr.size();
        vector<int> freq(n+1,0);
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        int repeating=-1,missing=-1;
        for(int i=0;i<=n;i++){
            if(freq[i]==2){
                repeating=i;
            }
            else if(freq[i]==0){
                missing=i;
            }
        }
        return {repeating,missing};

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
    vector<int> result=obj.findMissingRepeating(arr);
    cout<<"Repeating: "<<result[0]<<endl;
    cout<<"Missing: "<<result[1]<<endl;
    return 0;
}
