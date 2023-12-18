#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

typedef struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} Polynomial;

void insertSorted(Polynomial* poly, int coef, int exp);
Polynomial* addPolynomials(Polynomial* poly1, Polynomial* poly2);
void printPolynomial(Polynomial* poly);

#endif
