#include<iostream>
#include<string>
using namespace std;
string merge(string s1, string s2){
    string ans="";
    int i=0,j=0;
    while(i<s1.size() && j<s2.size()){
        ans+=s1[i];
        ans+=s2[j];
        i++;
        j++;
    }
    while(i<s1.size()){
        ans+=s1[i];
        i++;
    }
    while(j<s2.size()){
        ans+=s2[j];
        j++;
    }
    return ans;
}
int main(){
    string s1,s2;
    cout<<"Enter first string: ";
    cin>>s1;
    cout<<"Enter second string: ";
    cin>>s2;
    cout<<"Merged string: "<<merge(s1,s2)<<endl;
}