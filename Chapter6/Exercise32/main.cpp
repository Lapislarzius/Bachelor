#include <iostream>
#include "solver.h"
using namespace std;
// ...
int main(void) {
    double matrix[DIM][DIM], result;
    // ...
    errcode = 0;
    result = solver(matrix, DIM);
    if (errcode != 0)
        cout << getSourceFilename() << ": Fehler: errcode = "
        << errcode << endl;
    // ...
    return 0;
}