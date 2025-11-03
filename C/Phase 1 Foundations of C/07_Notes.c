/*
Storage Classes and Variable Lifetime in C
    It decides where, how long, and how variables live in memory.

What Is a Storage Class?

    Every variable in C has:
    Scope → Where it can be accessed
    Lifetime → How long it exists in memory
    Linkage → Whether it can be shared across files

    Keyword	    Scope	       Lifetime	Storage	   Default           Value
    auto	   Local	       Function block	   Stack	         Garbage
    register	Local	       Function block	   CPU Register (if possible)	Garbage
    static	   Local/Global	   Entire program	   Data Segment     	0
    extern	  Global	        Entire program	   Data Segment	        0
*/
#include <stdio.h>


void show(){
    // Stored in stack memory , destroyed after function exits
    auto int y =7;
    printf("%d \n",7);
}
/*
Stored in Data Segment (not stack)
Lifetime = entire program execution
Initialized only once
Value retains between function calls
Default value = 0
*/

/*
Stored in stack memory
Exists only while the function runs
Value is destroyed after function ends
Default value is garbage
*/
void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}


int main(){
    show();

    /*
    register : 
    Lives in CPU register (if available)
    Can’t take its address (no &counter)
    Used for loop counters or frequently accessed variables
    */
    register int i;
    for(i=0;i<10;i++){
        printf("%d \n",i);
    }
    //extern : used to access a global variable  declared in another file.
    
}
/*
Memory Layout of a C Program
--------------------------------------
| Code Segment (Functions)           |
|------------------------------------|
| Data Segment (static, extern vars) |
|------------------------------------|
| Stack (auto, register vars)        |
|------------------------------------|
| Heap (malloc/free)                 |
--------------------------------------

*/