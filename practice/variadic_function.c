#include <stdio.h>
#include <stdarg.h>

/**
 * Learning about variadic functions
 * va_list <var_name> - declaration
 * va_start(var_name, last) - initialization
 * va_arg(var_name, type) - returns next arg
 * va_copy(dest, src) - initizes and updates new var_name2
 * va_end(var_name) - ends and frees initializes va_list variables
 */
void variadic_func(const int format, ...) {
    va_list args; //variable args declaration
    
    va_start(args, format); //args name of va_list variable, format is the last known param to this function
    
    int fst_arg = va_arg(args, int); // returns the first unknown argument passed in the function call after format.. expected to be an int
    
    char *nxt_arg = va_arg(args, char *); // returns next arg, expected to be a string
    
    /** 
        each call to va_arg(args, type), returns the next argument passed at function call provided the type matches
        */
    
    va_list new_args; //new declaration
    
    va_copy(new_args, args); //replaces va_start(), initializes and updates new_args to last argument where args as stopped (i.e *nxt_arg)
    
    char char_arg = (char) va_arg(new_args, int); // type casted is needed for va_args recognizes char * as a better type
    
    va_end(new_args);
}

