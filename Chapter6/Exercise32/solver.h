#ifndef SOLVER_H_INCLUDED
#define SOLVER_H_INCLUDED
// ...
#define DIM 100

extern int errcode ;

#ifdef INLINE
#define getSourceFilename() FILENAME
#else
static const char* getSourceFilename();
#endif

int solver(double[][DIM], int);
//...
#endif