#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <windows.h>

#include "Canandra.h"
#include "Claudia.h"
#include "Hafidzon.h"
#include "Ryan.h"

typedef struct {
    char stack[256];
    float stackNumber[256];
    int stackTop;
    int stackNumberTop;
} STACK;

// prosedur tampilan
void tampilanStruktur (int pilihStruktur);

void tampilanLogo ();

void tampilanKalkulator (float hasilLayout,  char * outputOperasi);

void tampilanDLL (char inputLayoutDLL);

void pesanEror ();

// fungsi input
char inputKarakter (char * karakter);

float inputAngka (float * inputAngka);

// kalkulator saintifik
float operasi (float angkaPertama, float angkaKedua, char operatorKalkulasi);

int prioritas (char operatorPrioritas);

void push (STACK * ss, char x);

void pushAngka (STACK * ss, float x);

char pop (STACK *ss);

float popAngka (STACK * ss);

char * perbaikiString (char * string);

char * negatifBilangan (char * string);

int isEmpty (STACK * ss);

int Saintifik (STACK * ss, char * inputOperasi, int i);

int isSaintifik (char operatorSaintifik);

int kalkulasiSaintifik (STACK ** ss, char * inputOperasi, int i, char tipeSaintifik);

float kalkulasi(char * outputOperasi);
