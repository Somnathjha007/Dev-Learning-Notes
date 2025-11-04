// Hashing Function : take large keys use a hash function and convert them into small values that can be used in an array.
/*
 Hash Functions : 
 - Map large key to small key
 - Generate value sfrom 0 to m-1
 - should be fast , O(1) -  int , O(log n)- string
 - Should distribute large keys uniformly.
 - Examples :   h(large_key) = large_key % m , m-key | m is generally a prime no near to size of hashtable
                for string , weighted sum :  str[] = "abcd" - str[0]*x^1 + str[1]*x^2
                Universal Hashing
 Collissin Handling : 
    - Universal Hashing use 
*/

