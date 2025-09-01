#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int count =0;
    while(n>0){
        int digit = n % 10; 
        // cout<< digit ; prints the digits
        n = n/10;
        // if(digit !=0) // checks if any digit is 0 
        count++;
    }
    return count;
}

int countDigits2(int n){
    int count = (int)(log10(n)+1);
    return count;
}

int ReverseNumber(int n){
  int check = 0;
  while(n>0){
    int digit =  (n %10);
     if(digit != 0){
      check =1 ;
     }
     if(check ==1){
      cout<<digit;
     }
    n = n/10;

  }
}

int ReverseNumber2(int n){
  int revNum = 0;
  while(n>0){
    int id = n %10;
    revNum= (revNum * 10) + id;
    n=n/10;

  }
  return revNum;
}

bool checkPalindrom(int n){
  int og = n;
  int revNum = 0;
  while(n>0){
    int id = n % 10;
    revNum = (revNum *10) + id;
    n=n/10;
  }
  if(revNum==og) return true;
  else return false;
}

bool armStrong(int n){
  int og = n;
  int cube =0;
  while(n>0){
    int id = n % 10;
    cube = (id*id*id)+cube;
    n = n/10;

  }
  
  return(og==cube);
}

void printAllDivisors(int n){
  for(int i =1;i<=n/2;i++){
    if(n % i==0){cout<<i<<" ";
  } }
  cout<<n;
}

void printAllDivisors2(int n){
  for(int i =1;i<sqrt(n);i++){
    if(n %i ==0){
      cout<<i<<" ";
      if((n/i)!=i){
        cout<<(n/i)<<" ";
      }    
    }
  }
}

bool checkPrime(int n){
  if( n == 2 ) return true ;
  else if (n==1||n==0) return false;
  int count = 0;
  for(int i =1;i<sqrt(n);i++){
    if(n%i==0){
      count++;
      if((n/i) != i) count++;
    }
  }
  if(count == 2 ) return true;
  return false;
}

int HCForGCD(int n1 , int n2){
  int hcf = 0;
  for(int i =1;i<sqrt((max(n1,n2)));i++){
    if(n1 % i ==0 && n2 % i == 0){
      hcf = i;
      if(n1 % i != i && n2 %i != i){
        hcf = i;
      }
    }
  }
  if (max(n1,n2) % min(n1,n2) == 0){
    hcf = min(n1,n2);
  }
  return hcf;
}

int euclideanAlgo(int n1 , int n2){
  // gcd(a,b) = gcd(a-b,b) where a>b
  // gcd(a,b) = gcd(a%b,b) where a>b
  
  while(n1>0 && n2>0 ){
      if(n1>n2) n1 = n1 % n2;
      else n2 = n2 % n1; 
  }
  if(n1==0)return n2;
  else return n1;
}

int main(){

   cout<<countDigits(1034)<<" "<< "\n";
   cout<<countDigits2(18834)<<" "<< "\n";
   ReverseNumber(1020400);
   cout<<ReverseNumber2(1020400);
   cout<<checkPalindrom(123098721);
   cout<<armStrong(371);
   printAllDivisors(36);
   printAllDivisors2(36);
   cout<<checkPrime(7);
   cout<<HCForGCD(9,12);
   cout<<euclideanAlgo(9,12);
    
}
