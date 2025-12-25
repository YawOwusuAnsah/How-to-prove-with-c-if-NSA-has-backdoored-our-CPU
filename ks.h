#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>
#include <birchutils.h>

typedef unsigned char int8;
typedef unsigned short int16;
typedef unsigned int int32;
typedef unsigned long long int int64;
typedef unsigned _BigInt(128) int128;

typedef int32 word;
typedef int128 key;
typedef word wordarray[44];
typedef int8 subword;

#define $1 (int8 *)
#define $2 (int16)
#define $4 (int32)
#define $8 (int64)
#define $16 (int128)
#define $c (char *)
#define $i (int *)

word g(word, int8);
subword *w2sw(word);
word sw2w(subword *);
word *genkeys(key);
int main(int argc, char *argv[]);