#include <stdio.h>
#include <stdlib.h>

struct BandMatrix {
    int *A;
    int n;
    int k;
};

int Index(struct BandMatrix m, int i, int j) {
    if(abs(i - j) > m.k) return -1;

    int start = 0;
    for(int row = 1; row < i; row++) {
        int count = 0;
        for(int col = 1; col <= m.n; col++) {
            if(abs(row - col) <= m.k)
                count++;
        }
        start += count;
    }

    int offset = 0;
    for(int col = 1; col <= m.n; col++) {
        if(abs(i - col) <= m.k) {
            if(col == j) break;
            offset++;
        }
    }

    return start + offset;
}

void Set(struct BandMatrix *m, int i, int j, int x) {
    int idx = Index(*m, i, j);
    if(idx != -1)
        m->A[idx] = x;
}

int Get(struct BandMatrix m, int i, int j) {
    int idx = Index(m, i, j);
    return (idx != -1) ? m.A[idx] : 0;
}

void Display(struct BandMatrix m) {
    for(int i = 1; i <= m.n; i++) {
        for(int j = 1; j <= m.n; j++) {
            printf("%d ", Get(m, i, j));
        }
        printf("\n");
    }
}

int main() {
    struct BandMatrix m;
    int i, j, x;

    printf("Enter matrix dimension (n): ");
    scanf("%d", &m.n);
    printf("Enter bandwidth (k): ");
    scanf("%d", &m.k);

    int size = m.n + m.n * m.k - m.k * (m.k + 1);
    m.A = (int *)malloc(size * sizeof(int));

    printf("Enter all %d x %d elements:\n", m.n, m.n);
    for(i = 1; i <= m.n; i++) {
        for(j = 1; j <= m.n; j++) {
            scanf("%d", &x);
            Set(&m, i, j, x);
        }
    }

    printf("\nThe square band matrix is:\n");
    Display(m);

    free(m.A);
    return 0;
}
