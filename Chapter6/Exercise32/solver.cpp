#include <iostream>
#include "solver.h"
using namespace std;
// ...
int solver(double m[][DIM], int n) {
    cout << getSourceFilename() << ": Function solver called.\n";
    if (n > DIM)
        errcode = 3;
    /* . . . */
    return 0;
}