#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;


// Iterators utility Functions : begin () , end() , next() , prev() , advance()
void iteratorFunctions(vector<int> v){
    //vector<int> v = {0,10,20,30,40,50,45,35,25,15,5};
    vector<int>:: iterator it = v.begin();
    cout<<*it<<" iterators Address ->  "<<&it<<endl;
    
    auto it2 = next(it);
    cout<<*it2<<" iterators Address ->  "<<&it2<<endl;
    
    auto it3 = next(it2,3);
    cout<<*it3<<" iterators Address ->  "<<&it3<<endl;

    vector<int>:: iterator it4 = prev(it3,2);
    cout<<*it4<<" iterators Address ->  "<<&it4<<endl;

    advance(it4,2);
    cout<<*it4<<" iterators Address ->  "<<&it4<<endl;
    /*
    OUTPUT : &it will give the local address of the it itself and not that of the element
    0 iterators Address ->  0x61febc
    10 iterators Address ->  0x61feb8
    40 iterators Address ->  0x61feb4
    20 iterators Address ->  0x61feb0
    40 iterators Address ->  0x61feb0
    */
}
void iteratorFunctions2(vector<int> v){
    // for actual address of the elements we use : &*it
    cout<<endl;
    vector<int>:: iterator it = v.begin();
    cout<<*it<<" iterators Address ->  "<<&*it<<endl;
    
    auto it2 = next(it);
    cout<<*it2<<" iterators Address ->  "<<&*it2<<endl;
    
    auto it3 = next(it2,3);
    cout<<*it3<<" iterators Address ->  "<<&*it3<<endl;

    vector<int>:: iterator it4 = prev(it3,2);
    cout<<*it4<<" iterators Address ->  "<<&*it4<<endl;

    advance(it4,2);
    cout<<*it4<<" iterators Address ->  "<<&*it4<<endl;

    /*
    0 iterators Address ->  0x1039ef8
    10 iterators Address ->  0x1039efc
    40 iterators Address ->  0x1039f08
    20 iterators Address ->  0x1039f00
    40 iterators Address ->  0x1039f08
    */
}



int main(){
    vector<int> v = {0,10,20,30,40,50,45,35,25,15,5};
    // vector <int> :: iterator itt = v.begin();
    // for(int i =0;i<v.size();i++){
    //     cout<<*itt++<<" ";
    // }
    // sort(v.begin(),v.end()); // Sort function from algo lib
    
    // auto i = v.begin();

    // cout<<*i<<endl; // *i Derefrences the iterator returned

    // for(auto x : v){
    //     cout<<x<<" "; // Auto directly access the element , but for modification , it needs & before it 
    // }

    iteratorFunctions(v);
    iteratorFunctions2(v);
    

    return 0;
}