#include <stdio.h>

void converte_horario(int horario, unsigned char *h, unsigned char *m, unsigned char *s) {
    *s = horario & 0x3f;
    *m = (horario >> 6) & 0x3f;
    *h = (horario >> 12) & 0x1f;
}

int main() {
    int horario = 0x17efb;
    unsigned char h, m, s;

    converte_horario(horario, &h, &m, &s);

    printf("%u:%u:%u\n", h, m, s);
}