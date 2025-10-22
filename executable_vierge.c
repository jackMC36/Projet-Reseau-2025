#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int pgcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int inverse_modulaire(int a, int m) {
    int m0 = m, x0 = 0, x1 = 1;
    if (m == 1) return 0;

    while (a > 1) {
        int q = a / m;
        int t = m;
        m = a % m;
        a = t;
        t = x0;
        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0) x1 += m0;

    return x1;
}

void generer_cle(int *n, int *e, int *d, int p, int q) {
    *n = p * q;
    
    int phi = (p - 1) * (q - 1);

    *e = 2;
    while (pgcd(*e, phi) != 1) {
        (*e)++;
    }

    *d = inverse_modulaire(*e, phi);
}

int chiffrer(int message, int e, int n) {
    return (int) fmod(pow(message, e), n);
}

int dechiffrer(int message, int d, int n) {
    return (int) fmod(pow(message, d), n);
}

int main() {
    int p = 0;
    int q = 0; // il faut trouver p et q
    int n, e, d;

    generer_cle(&n, &e, &d, p, q);
    printf("Clé publique: (e = %d, n = %d)\n", e, n);
    printf("Clé privée: (d = %d, n = %d)\n", d, n);
} 