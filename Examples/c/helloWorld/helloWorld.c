// This is how code is used from libraries in
// c....this specifies the header file to 
// expose the interface to whatever uses the library
#include <stdio.h>

// Main entry point for C
int main(int argc, char **argv )
{

    // From stdio.h printf function
    printf("Hello World\n");
    return 0; // returns values to caller
}

