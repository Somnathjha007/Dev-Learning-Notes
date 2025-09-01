// #include <bits/stdc++.h>
// using namespace std;

//Functions : Set of code/Commands , can modularise code , increase readblity , use same code multiple time
        
        // 1. void
        // 2. return
        // 3. Parameterised
        // 4. Non parametarised
        
        // 1. Void Function : No return 
            // void printName(string name){
            //     cout<<"Hey "<<name;
            // }
        
        //Return
            // int sumNum(int a , int b){
            //     int c = a+b;
            //     return c;
            // }
            
            // string sumStr(string a , string b){
            //     string s = a+b;
            //     return s;
            // }
            
        //Parameratised
            // int apple(int a, char c , string s){
            //     //code 
            //     retrun //something Int
            // }
    //Passing Variables
        //pass By values
            // void doSomething(int num){
            //     cout<<num<<endl;
            //     num +=5;        //Modified the copy
            //     cout<<num<<endl;
            //     num +=5;        //Modified the copy
            //     cout<<num<<endl;
            // }
        //pass by Refrence
            // void doSomething2(int &num){
            //     cout<<num<<endl;
            //     num +=5;
            //     cout<<num<<endl;
            // }
            
    
            
        

int main()
{   
    
    int num=10;
    //doSomething2(num);
    // cout<<num<<endl;
    // int num =10;
    // doSomething(num);
    // cout<<num; // Shalow Copy , does not change the main/Original value.
    // string str = sumStr("hello","world");
    // cout<<str<<" "<<"Yo";
    
    
    // int a, b;
    // cin>>a>>b;
    // int x = sumNum(a,b);
    // cout<<x;
    
    
    // string name = "som";
    // printName(name);
    
    
    
    
    
    // User I/O
        // cout<<"Hello World";
        // cout<<"Please Enter a number";
        // int x ;
        // cin>>x;
        // cout<<x;
    
    // Data Types
        // std::cout<<"Please enter a number";
        // int x =1;
        // bool istrue = false;
        // double pi = 3.14;
        // char c = 'A';
        // float f = 0.001;
        
        
        // std::cout<<"Your number is :" << x <<"\n";
        // std::cout<<"Your Boolean is : " << istrue<<"\n";
        // std::cout<<"Your double is : " << pi<<"\n";
        // std::cout<<"Your char is : " << c<<"\n";
        // std::cout<<"Your float is : " << f<<"\n";
    
    
    //Type Safty in C++ : C++ is a strogly typed language -> 
    
        // bool a = 10.228f;
        // cout<<a;
    
    //Type Conversion : Changing one dataType to Another.
        // int n =3;
        // char c = 'C';
        
        //Conver Char Data to Integer
            // cout<<(int)c <<endl;
            // int sum = n+c;
            // cout<<sum;
    
    //Size of Data Types:
        // cout<<"Size of int :" << sizeof(int) << " bytes"<<endl;
        // cout<<"Size of int :" << sizeof(float) << " bytes"<<endl;
        // cout<<"Size of int :" << sizeof(double) << " bytes"<<endl;
        // cout<<"Size of int :" << sizeof(char) << " bytes"<<endl;
        
    //Data Type Modifiers: Added to primitive DatatTypes as a prefix  to give extra meaning/info
        // short , long , signed , unsigned 
        
        // int var1;// 4 bytes
        // long int var2; // 8 bytes
        
        //String
            // string s1;
            // string s2;
            
            // cin >> s1>>s2;
            // cout<<s1<< " " <<s2;
            
            // string str;
            // getline(cin,str);
            // cout<<str;
            
    //Condition Statement
        //If-else
            // int a = 20;
            // if(a>19){
            //     //Code
            //     cout<<"GG";
            // }
            // else if (a<19){
            //     //code
            //     cout<<"pp";
            // }
            // else {
            //     //Code
            //     cout<<"dd";
            // }
        
        //Switch
            // int day;
            // cin>>day;
            // switch(day){
            //     case 1 : 
            //         cout<<"Mon";
            //         break;
                
            //     case 2 : 
            //         cout<<"Tue";
            //         break;
                
            //     case 3 : 
            //         cout<<"Wed";
            //         break;
                
            //     case 4 : 
            //         cout<<"Thu";
            //         break;
            //     case 5 : 
            //         cout<<"Fri";
            //         break;
            //     case 6 : 
            //         cout<<"Sat";
            //         break;
            //     case 7 : 
            //         cout<<"Sun";
            //       break;
            //     default:
            //         cout<<"Invalid";
            // }
            
    //Arrays : Collectin of similar data Types. -> Contigius Memory location
        
        //1D- 1 Dimension arrat
        
            //int arr[5]; //size 5 array of int (size 4)
            
            //we need a itrator to access the elements of the array
            
            //for loop
                // for (int i =0;i<sizeof(arr);i++){
                //     cout<<arr[i]<<endl; // Will print garage , as values are not initilised
                // }
            
            // or 
            
            //While Loop
            
                // int i =0;
                // while(i<sizeof(arr)){
                //     cout<<arr[i];
                //     i++;
                // }
            
        
        //2D - 2 Dimension Arrays
            // int arr[3][5];
            
            // arr[1][2]=88;
            
            
            // cout<<arr[1][2];
            
        //3D - 3 Dimension arrays
        
        // Strings  - String is an Array of characters :
        
            // string s = "aple";
            
            // for (int i =0;i<s.size();i++){
            //     cout<<s[i]<<" ";
            // }
            // cout<<endl;
            // s[s.size()-1] = 'd';
            // cout<<s[s.size()-1];
            
    //Loops
        //For Loops
            // int i =1;
            // for(i =1;i<=10;i=i+1){
            //     cout<<"Hello"<<endl;
            // }
            // cout<<i;
        
        //While Loops
            // int i =1;
            // while(i<=5){
            //     cout<<"Hello"<<endl;
            //     i=i+1;
            // }
        
        //do while Loops
            // int i =2;
            // do{
            //     cout<<"Hello"<<" "<<i<<endl;
            //     i=i+1;
            // }while(i<=1);
            
    
      
        
        
        
        
        
        
        
        
        
        
        
        
        

    return 0;
}


            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            