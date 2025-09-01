#include<bits/stdc++.h>
using namespace std;
//All Stiver Pattern Questions solutions
void pattern1(int n){
    for(int i =0;i<n;i=i+1){
        for(int j =0;j<n;j=j+1){
            cout<<"*";
        }
        cout<<"\n";
     }
}

void pattern2(int n ){
    for(int i =0;i<n;i++){
		for(int j =0;j<=i;j++){
			cout<<i+1;
		}
		cout<<"\n";
	}
 }

void pattern2a(int n ){
    for(int i =0;i<n;i++){
		for(int j = 1;j<=n-i;j++){
			cout<<"*"<< " ";
		}
		cout<<"\n";
	}
}

void pattern3(int n)
{
    for(int i =0;i<n;i++){
		for(int j =0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}
}

void pattern4(int n)
{
    for(int i =1;i<=n;i++){
		for(int j =1;j<=i;j++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}

void pattern5(int n)
{
    for(int i =0;i<n;i++){
		for(int j = i;j<n;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}

void pattern6(int n)
{
 for(int i =0;i<n;i++){
		for(int j = 1;j<=n-i;j++){
			cout<<j<< " ";
		}
		cout<<"\n";
	}
}

void pattern7(int n ){
    for(int i =0;i<n;i++){
		for(int j =0;j<n-i-1;j++)
            {
              cout<<" ";
            }
        for(int j =0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int j =0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"\n";
 	}
 }

void pattern8(int n ){
    for(int i =0;i<n;i++){
		for(int j =0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j =0;j<2*i+1;j++){
            cout<<j+1;
        }
        for(int j =0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<"\n";
    }
}
	
void pattern9(int n){
    for(int i =0;i<n;i++){
       for(int j =0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j =0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int j =0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<"\n"; 
    }
}

void pattern10(int n){
    for(int i =1;i<=2*n-1;i++){
        int star = i;
        if(i>n){
            star = 2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}

void pattern11(int n){
    int start = 0 ; 
    
    for(int i =1;i<=2*n-1;i++){
        int bit =i;
        if(i%2==0) start = 1;
        else start=0;
        if(i>n){
            bit = 2*n-i;
           }
        for(int j =1;j<=bit;j++){
           cout<<start;
           start = 1-start;
           


        }
        cout<<"\n";
        
    }
}

void pattern12(int n){
    for(int i =1;i<=n;i++){
        //Type 1 and down is two
        // int count =0;
        // for(int j=0;j<i;j++){
        //     cout<<count+1;
        //     count++;
            
            
        // }
        // for(int j =0;j<2*n-2*i;j++){
        //     cout<<" ";
        // }
        // for(int j=0;j<i;j++){
        //     count--;
        //     cout<<count+1;
            
            
        // }

        //numbers
        for(int j=1;j<=i;j++){cout<<j;}

        //space
        for(int j =0;j<2*n-2*i;j++){cout<<" ";}

        //numbers
        for(int j=i;j>=1;j--){cout<<j;}
        
        cout<<"\n";

    }
}

void pattern13(int n){
    int count =1;
    for(int i=0;i<=n;i++){
        for(int j =0;j<i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
}

void pattern14(int n){
    //Type One down two
    for(int i =0;i<n;i++){
        char c = 'A';
        for(int j=0;j<=i;j++){
            cout<<c++;
        }
        cout<<"\n";
    }
    for(int i =0;i<n;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<"\n";
    }
}

void pattern15(int n){
    for(int i =0;i<=n;i++){
        for(char ch = 'A';ch<'A'+n-i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void pattern16(int n){
    char ch ='A';
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}

void pattern17(int n){
 for(int i =0;i<n;i++){
    char ch ='A';
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j =0;j<2*i+1;j++){
        if(j>=i){
            cout<<ch--;
        }
        else {cout<<ch++;}
    }
    for(int j =1;j<=n-i;j++){
        cout<<" ";
    }
    cout<<endl;
 }
}

void pattern19(int n){
    for(int i =1;i<=n;i++){
        char ch ='A'+n-i;
        for(int j = 1;j<=i;j++){
            cout<<ch++;
        }
        cout<<endl;
    }

}

void pattern20(int n){
    int count = 0;
    for(int i =0;i<=2*n+1;i++){
        if(i>n){
            
            for(int j =0;j<i-n;j++){
                cout<<"*";
            }
            for(int j =0;j<2*n-2*count;j++){
                cout<<" ";
            }
            for(int j =0;j<i-n;j++){
                cout<<"*";
            }
            cout<<endl;
            count++;
            
        }
        else {
        for(int j =0;j<n+1-i;j++){
            cout<<"*";
        }
        for(int j =0;j<2*i;j++){
            cout<<" ";
        }
        for(int j =0;j<n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    }
}

void pattern21(int n){
    for(int i =0;i<=2*n+1;i++){
        if(i>n){
            for(int j=0;j<=2*n-i;j++){
                cout<<"*";
            }
            for(int j =0;j<=2*i-2*n-1;j++){
                cout<<" ";
            }
            for(int j=0;j<=2*n-i;j++){
                cout<<"*";
            }
            cout<<endl;
            
        }
       else{
            for(int j =0;j<=i;j++){
                cout<<"*";
            }
            for(int j =1;j<2*n-2*i+1;j++){
                cout<<" ";
            }
            for(int j =0;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
            
        }
    }
}

void pattern22(int n){
    for(int i =0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i =0;i<n/2;i++){
        for(int j =0;j<1;j++){
            cout<<"*";
        }
        for(int j =0;j<n-2;j++){
            cout<<" ";
        }  
        for(int j =0;j<1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i =0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
}

void pattern22a(int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                cout<<"*";
            }
            else { cout<<" ";}
        }
        cout<<endl;
    }
}

void pattern23(int n ){
    
    for(int i =0;i<2*n-1;i++){
        
        for(int j=0;j<2*n-1;j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2)-i;
            cout<<(n- min(min(top,down),min(left,right)));

        }
        cout<<endl;
        
    }
}

int main(){
    
     // call any fun 
     //keep n value under 10 for best results 
     return 0;
     

}
