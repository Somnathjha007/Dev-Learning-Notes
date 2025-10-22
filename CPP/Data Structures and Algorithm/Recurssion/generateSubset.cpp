#include<iostream>
#include<vector>
using namespace std;

vector<string> generateSub(string s,vector<string> &res){

}

void subSet(string s , string curr , int i =0){
    if(i==s.length()){
        cout<<curr<<" ";
        return;
    }
    subSet(s,curr,i+1);
    subSet(s,curr+s[i],i+1);
}

int main(){
    string s = "ABC";
    string curr = "";

subSet(s,curr,0);

    return 0;
}