#include <iostream>
using namespace std;


class Base {
    public:
        int pub=1;
    protected:
        int prot=2;
    private:
        int priv=3;
};

class DerivedPublic : public Base {
public:
    void show() {
        cout << "Public: " << pub << "\n";    // ✅ accessible
        cout << "Protected: " << prot << "\n"; // ✅ accessible
        // cout << priv; // ❌ private in Base — not accessible
    }
};

class DerivedProtected : protected Base {
public:
    void show() {
        cout << pub << "\n";   // ✅ was public, now protected
        cout << prot << "\n";  // ✅ still protected
       // cout << priv << "\n"; // Cant access
    }
};

class DerivedPrivate : private Base {
public:
    void show() {
        cout << pub << "\n";   // ✅ now private inside DerivedPrivate
        cout << prot << "\n";  // ✅ now private inside DerivedPrivate
    }
};


int main(){
   DerivedPublic obj;

   cout<<obj.pub;
   obj.show();
  // cout<<obj.prot;


    return 0;
}
