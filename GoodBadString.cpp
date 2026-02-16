#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    bool isVowel(char ch){
        ch=tolower(ch);
        return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    int isGoodBad(string s){
        int v=0;
        int c=0;
        for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                v++;
                c=0;
            }
            else if(s[i]=='?'){
                v++;
                c++;
            }
            else{
                c++;
                v=0;
            }
            if(v>5 || c>3) return 0;
        }
        return 1;
    }
};
int main(){
    Solution obj;
    string s;
    cout<<"Enter a string:";
    cin>>s;
    //int result=obj.isGoodBad(s);
    if(obj.isGoodBad(s)){
        cout<<"Good String"<<endl;
    }
    else{
        cout<<"Bad String"<<endl;
    }
}