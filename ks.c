#include "ks.h"

word sw2w(subword *sw) {
    word *p;
    assert(sw);

    p = (word *)sw;

    return *p;
}

subword *w2sw(word w) {
    int16 size;
    int8 a, b, c, d;
    subword *p, *ret;
    
    a = w & 0xFF;
    b = (w & 0xFF00) >> 8;
    c = (w & 0xFF0000) >> 16;
    d = (w & 0xFF000000) >> 24;

    size = sizeof(subword) * 4;
    p = (subword *) malloc($1 size);
    assert(p);
    zero($1 p, size);

    p = ret;
    *p++ = a;
    *p++ = b;
    *p++ = c;
    *p = d;

    return ret;

}

word g(word w, int8 round){
    return w;
}

int main(int argc, char *argv[]) {
    word w;
    subword *sw;

    w = 0xaabbccdd;
    sw = w2sw(w);
    printf("word: 0x%x\n", w);    
    return 0;
}