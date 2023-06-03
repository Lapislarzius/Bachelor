#include <iostream>
#include "solver.h"
using namespace std;
// ...
#define FILENAME "solver.cpp"

#ifndef INLINE
static const char* getSourceFilename() {
        return FILENAME;
}
#endif
int errcode = 0;
int solver(double m[][DIM], int n) {
    cout << getSourceFilename() << ": Function solver called.\n";
    if (n > DIM)
        errcode = 3;
    /* . . . */
    return 0;
}