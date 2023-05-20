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
#define opVal(P) P->opValue
#define isOperand(P) P->isOperand
#define left(P) P->left
#define right(P) P->right


typedef struct Node {
    char data;
    double dataNumber;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

//typedef struct {
//    char stack[256];
//    double stackNumber[256];
//    int stackTop;
//    int stackNumberTop;
//} STACK;

typedef struct tNodeBinTree* addr;
typedef struct tNodeBinTree {
    double opValue;                 // to preserve both operand and operator
    bool isOperand;                 // value checking whether the node is number or not
    addr left, right;
} NodeBinTree;

//typedef struct tree *address;
//typedef struct tree{
//	char info[256];
//	address rs, ls, pr;
//} Tree;



/**
 * Type : function
 * Tujuan : membuat sebuah node baru yang dialokasikan di dalam memori
 *          dengan beberapa field node yang berhasil dialokasikan diisi
 *          oleh nilai dari parameter. Pointer left dan right diinisialisasi
 *          oleh nilai NULL.
 */
addr createNode (double opValue, bool isOperand);

/**
 * Type : procedure
 * Tujuan : mengalokasikan sekian byte memori untuk menyimpan 1 elemen node
 *          pada binary tree kalkulator ini.
 * Initial state : nilai address pada parameter masih bernilai nil
 * Final state : nilai address pada parameter sudah diperbaharui
 */
void AlokasiMemoriNode (addr* _newNode);

/**
 * Type : function
 * Tujuan : memasukkan node baru ke dalam struktur binary tree dengan melihat
 *          keadaan node son di kiri ataupun di kanannya. Proses bisa dilakukan
 *          secara rekursif hingga ditemui daerah yang dapat dimasuki node baru
 *          ke dalam struktur binary tree.
 */
addr insertNodeToTree (double opValue, bool isOperand, addr root);

/**
 * Type : procedure
 * Tujuan : Menampilkan seluruh element di dalam tree secara pre-order traversal.
 *          Dimulai dari root node hingga leaf node paling akhir.
 * Initial State : elemen-elemen di dalam tree belum ditampilkan.
 * Final State : elemen-elemen di dalam tree sudah ditampilkan ke layar
 */
void printTree (addr root);

/**
 * Type : function
 * Tujuan : membuat/membangun binary tree dari notasi postfix pada parameter input.
 *          Pembacaan notasi postfix dilakukan dari belakang agar selalu dipastikan
 *          bahwa root node dari tree yang dibangun merupakan operator. Kecuali
 *          pada kasus dimana hanya angka yang diinput sebagai ekspresi matematika.
 * 
 */
addr createTreeFromPostfix (char* expression);

/**
 * Type : function
 * Tujuan : menghitung seluruh operand di dalam binary tree dengan operatornya, lalu
 *          mengembalikan hasil perhitungannya. Dilakukan secara rekursif.
 */
double calculateTreeExpression(addr root);

/**
 * Type : function
 * Tujuan : melakukan perhitungan antara dua bilangan yang operatornya
 *          adalah operator '+', '*', '/', atau '^'. Kembalikan nilai perhitungannya
 *          dalam bentuk bilangan desimal (double).
 */
double calculateWithBinaryOperator(int root_operator, double leftNum, double rightNum);

void gotoxy(int x, int y);



// prosedur tampilan
void tampilanStruktur (int pilihStruktur);

void tampilanLogo ();

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

void pushAngka (Stack * ss, double x);

char pop (Stack *ss);

double popAngka (Stack * ss);

int isEmpty (Stack * ss);

char * perbaikiString (char * string);

char * negatifBilangan (char * string);

int isSaintifik (char operatorSaintifik);

double kalkulasi(char * outputOperasi, char * inputOperasi);
