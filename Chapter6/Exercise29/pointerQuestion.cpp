//a) Wie werden die folgenden Objekte in einem C++ - Programm vereinbart ?
//
// - a ist ein Zeiger auf einen konstanten float - Wert.
// - b ist ein konstanter Zeiger auf eine float - Variable.
// - c ist ein Zeiger auf einen konstanten Zeiger auf eine float - Variable.
// - d ist ein Array mit 3 Zeigern auf float - Variablen.
// - e ist ein Zeiger auf ein Array mit 3 Zeigern auf float - Variablen.
//
//b) Was bedeutet der Begriff „dereferenzieren“ ? Nennen und erklären Sie kurz die Operatoren, die eine Dereferenzierung beinhalten.

//a)
// const float *a
// float *const b
// float *const *c
// float *d[3]
// float (*e)[3]
// 
// b)	Was bedeutet der Begriff „dereferenzieren“? Nennen und erklären 
// Sie kurz die Operatoren, die eine Dereferenzierung beinhalten.

// Der Begriff „dereferenzieren“ bezeichnet eine Operation, die zu einem 
// Zeiger das Objekt (und nicht nur dessen Inhalt) liefert, auf das dieser Zeiger verweist.
// Operatoren: * [] ->