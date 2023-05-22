#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h.>
#include <conio.h>

#define phi 3.14159265358979323846
#define LN10 2.3025850929940456840179914546844
#define e 2.71828
#define nil NULL
#define opValue(P) P->opValue
#define isOperand(P) P->isOperand
#define left(P) P->left
#define right(P) P->right


typedef struct Node {
    char data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

typedef struct tNodeBinTree* addr;
typedef struct tNodeBinTree {
    double opValue;                 // to preserve both operand and operator
    bool isOperand;                 // value checking whether the node is number or not
    addr left, right;
} NodeBinTree;

// prosedur tampilan
void gotoxy(int x, int y);

void tampilanStruktur (int pilihStruktur);

void tampilanLogo ();

void informasiInput ();

void tampilanKalkulator (double hasilLayout,  char * outputOperasi);

void tampilanDLL (char inputLayoutDLL);

void pesanEror ();

// fungsi input
char inputKarakter (char * karakter);

double inputAngka (double * inputAngka);

// kalkulator saintifik
double operasi (double angkaPertama, double angkaKedua, int operatorKalkulasi);

int prioritas (char operatorPrioritas);

void push (Stack * ss, char x);

char pop (Stack *ss);

int isEmpty (Stack * ss);

char * perbaikiString (char * string);

char * negatifBilangan (char * string);

double kalkulasi(char * outputOperasi, char * inputOperasi, char * informasi);

addr createNode (double opValue, bool isOperand);

void AlokasiMemoriNode (addr* _newNode);

addr insertNodeToTree (double opValue, bool isOperand, addr root);

void storeTree(addr root, char *informasi, char *output, int *index);

addr createTreeFromPostfix (char* expression, char * informasi);

double calculateTreeExpression(addr root, char * informasi);
