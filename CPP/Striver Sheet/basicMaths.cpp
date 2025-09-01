#include <iostream>
using namespace std;

int countDigit(int n) {
        int cnt =0;
        if (n==0){return 1;}
        else{

            while(n!=0){
                cnt++;
                n=n/10;
                
            }
        }
        return cnt;
}
int reverseNum(int num){
    int rev = 0;
    if(num ==0){return 0;}
    while(num!=0){
        rev =  rev*10 + num%10;
        num = num/10;
    }
    return rev;
}
bool checkPalindrom(int nm){
    if(nm == reverseNum(nm)){
        return true;
    }
    return false;
}


int main(){
    //cout<<countDigit(656);
    //cout<<reverseNum(1234567890);
    //cout<<checkPalindrom(12321);
    
    return 0;
}