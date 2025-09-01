#include <iostream>
using namespace std;

void pattern1(){
    for(int i =0;i<5;i++){
        for (int j=0;j<5;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern2(){
    for (int i =0;i<=5;i++){
        
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
        

    }
}
void pattern3(){
    for (int i =0;i<=5;i++){
        for(int j =1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}
void pattern4(){
    
    for (int i =1;i<=5;i++){
        int j=0;
        while(j<i){
            cout<<i;
            j++;
        }
        cout<<"\n";
    }
}
void pattern5(){
    
    for (int i =5;i>=0;i--){
        for(int j =0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
void pattern6(){
    for (int i =5;i>=0;i--){
        for(int j =0;j<i;j++){
            cout<<j+1;
        }
        cout<<"\n";
    }
}
void pattern7(){
        int len=9;
        int space1 = len/2;
        int space2 = len/2;
        int star = 1;
    for (int i =0;i<len/2;i++){
            for(int k =0;k<space1;k++){
                cout<<" ";
            }

            for(int k =0;k<star;k++){
                cout<<"*";
            }

            for(int k =0;k<space2;k++){
                cout<<" ";
            }
            space1--;
            space2--;
            star= star+2;

       
        cout<<"\n";
    }
}
void pattern8(){
        int len=9;
        int space1 = 0; // 4
        int space2 = 0; // 4
        int star = len;
    for (int i =len;i>0;i--){
        for(int j =0;j<space1;j++){
            cout<<" ";
        }
        for(int j =0;j<star;j++){
            cout<<"*";
        }
        for(int j =0;j<space2;j++){
            cout<<" ";
        }
        space1++;
        space2++;
        star=star-2;
       
        cout<<"\n";
    }
}
void pattern10(){
    int len=5;
    for(int i =0;i<len;i++){
        for(int j =0;j<i;j++){
            cout<<"*";
        }

        cout<<"\n";
    }
    for(int i =len;i>0;i--){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }

        cout<<"\n";
    }
}
void pattern11(){
   int len=5;
   int cnt=1;
    for(int i =0;i<=len;i++){
        for(int j =0;j<i;j++){
            cout<<cnt;
            if(cnt==1){cnt=0;}
            else{cnt=1;}
        }

        cout<<"\n";
    } 
}
void pattern12(){
   int len=4;
   int cnt=1;
   int gap= len*2-cnt*2;
    for(int i =0;i<=len;i++){
        cnt=1;
        for(int j =0;j<i;j++){
            cout<<cnt;
            cnt++;
            if(cnt>=i+1){
                cnt--;
            }
        }
        for(int j=0;j<=gap;j++){
            cout<<" ";
        }
        gap=gap-2;
        for(int j =0;j<i;j++){
            cout<<cnt;
            cnt--;
            
        }
        cout<<"\n";
    } 
}
void pattern13(){
    int len =5;
    int cnt=1;
    for (int i =0;i<=len;i++){
        for(int j=0;j<i;j++){
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<"\n";
    }
}
void pattern14(){
 int len =5;
 for(int i =0;i<=len;i++){
    char c ='A';
    for(int j =0;j<i;j++){
        cout<<c++;
    }
    cout<<"\n";
 }
}
void pattern15(){
    int len =5;
    for(int i =len;i>0;i--){
        char c ='A';
        for (int j=0;j<i;j++){
            cout<<c++;
        }
        cout<<"\n";
    }
}
void pattern16(){
    int len =5;
    char c ='A';
    for(int i =0;i<len;i++){
        for (int j=0;j<=i;j++){
            cout<<c;
        }
        c++;
        cout<<"\n";
    }
}
void pattern17(){
        int len=9;
        int space1 = len/2;
        int space2 = len/2;
        int mid = 1;
    for (int i =0;i<len/2;i++){
            char c = 'A'-1;
            for(int k =0;k<space1;k++){
                cout<<" ";
            }

            // for(int k =0;k<mid;k++){
            //     cout<<c++;
            // }
            for(int k =0;k<=mid/2;k++){
                cout<<++c;
            }
            for(int j =0;j<mid/2;j++){
            cout<<--c;
            }

            for(int k =0;k<space2;k++){
                cout<<" ";
            }
            space1--;
            space2--;
            mid= mid+2;

       
        cout<<"\n";
    }
}
void pattern18(){
    int len =5;
    char c_ex = 'A'+len;
    for(int i =0;i<=len;i++){
        char c_int=c_ex;
        for(int j =0;j<i;j++){
            cout<<c_int++;
        }
        c_ex--;
        cout<<"\n";
        
    }
}
void pattern19(){
   int gap1=0;
   int len=5;
   for(int i =len;i>0;i--){
    for(int j =0;j<i;j++){
        cout<<"*";
    }
    for(int j=1;j<gap1;j++){
        cout<<" ";
    }
    gap1= gap1+2;;
    for(int j =0;j<i;j++){
        cout<<"*";
    }
    cout<<"\n";

   }
   int gap= gap1-2;
    for(int i =0;i<=len;i++){
         if (i == 0) continue; 
        for(int j =0;j<i;j++){
            cout<<"*";
            
        }
        for(int j=1;j<gap;j++){
            cout<<" ";
        }
        gap=gap-2;
        for(int j =0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    
}
void pattern20(){
    int len =5;
    int gap = len*2-2;

    //Upper
    for(int i =1;i<=len;i++){
          
        for(int j =0;j<i;j++){
            cout<<"*";
            
        }
        for(int j=0;j<gap;j++){
            cout<<" ";
        }
        for(int j =0;j<i;j++){
            cout<<"*";
        }
        cout<<"\n";
        gap=gap-2;
    }
    //lower 
    gap=2;
    for(int i =len-1;i>=1;i--){
    
    for(int j =0;j<i;j++){
        cout<<"*";
    }
    for(int j=1;j<gap;j++){
        cout<<" ";
    }
    for(int j =0;j<i;j++){
        cout<<"*";
    }
    cout<<"\n";
    gap = gap+2;

   }
   
    
}
void pattern21(){
    int len =4;
    for (int i = 0;i<len;i++){
        if (i==0 || i==len-1){
            for(int j =0;j<len;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
        else{
        cout<<"*";
        for(int j=0;j<len-2;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<"\n";
     }
    }
}
void pattern22(){
    int len = 7;
    int cnt = len/2+1; // odd
    
}
int main(){
   //pattern1();
   //pattern2();
   //pattern3();
   //pattern4();
   //pattern5();
   //pattern6();
   //pattern7();
   //pattern8();
   //pattern10();
   //pattern11();
   //pattern12();
   //pattern13();
   //pattern14();
   //pattern15();
   //pattern16();
   //pattern17();
   //pattern18();
   //pattern19();
   //pattern21();

    return 0;
}
