#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution{
    public:
    void LongestConsecutiveSequence(vector<int>& arr){
        int n=arr.size();
        if(n==0) return;
        sort(arr.begin(),arr.end());
        int longest=1;
        int current=1;
        int start=arr[0];
        int bestStart=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                continue;
            }
            else if(arr[i]==arr[i-1]+1){
                current++;
            }
            else{
                if(current>longest){
                    longest=current;
                    bestStart=start;
                }
                current=1;
                start=arr[i];
            }
        }
        if(current>longest){
            longest=current;
            bestStart=start;
        }
        cout<<"Longest consecutive sequence: "<<endl;
        for(int i=0;i<longest;i++){
            cout<<bestStart+i<<" ";        
        }
        cout<<"\nLength: "<<longest<<endl;

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
    obj.LongestConsecutiveSequence(arr);
    return 0;
}
