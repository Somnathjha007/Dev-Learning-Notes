/* libraries are collections of precompiled functions, macros, and definitions that you can use to simplify your code. They save time by providing common functionality (like math, I/O, string handling, etc.) without having to write it from scratch. */


#include <stdio.h>   //Standard Input/Output ( printf(), scanf(), fopen(), fgets())                
#include <stdlib.h>  //General utilities (memory management, conversions, random numbers, malloc(), exit()) 
#include <string.h>  //String handling (strlen(), strcpy(), strcmp(), etc.)                               
#include <math.h>    //Mathematical functions (sin(), cos(), sqrt(), pow())                             
#include <ctype.h>   //Character handling (isalpha(), isdigit(), tolower(), etc.)                         
#include <time.h>    //Time and date (time(), difftime(), clock())                                        
#include <stdbool.h> //Boolean type support (bool, true, false)                                           
#include <stdint.h>  //Fixed-width integer types (int8_t, uint32_t, etc.)                                   
#include <limits.h>  //Size limits for integer types                                                            
#include <float.h>   //Floating-point limits                                                                    
#include <assert.h>  //Diagnostics (assert() for debugging)                                                   
#include <errno.h>   //Error codes (errno, perror(), strerror())                                          
#include <signal.h>  //Signal handling (signal(), raise())                                                  
#include <setjmp.h>  //Jump to saved stack context (setjmp(), longjmp())                                    
#include <stdarg.h>  //Variable argument lists (va_start(), va_arg(), va_end())                           
