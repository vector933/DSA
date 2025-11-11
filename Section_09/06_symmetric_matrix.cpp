#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    int *A;
    int n;
};

void Set(struct Matrix *m, int i, int j, int x) {
    if(i >= j)
        m->A[(i*(i-1))/2+(j-1)]=x;
}

int Get(struct Matrix m, int i, int j) {
    if(i >= j)
        return m.A[(i*(i-1))/2+(j-1)];
    else
        return m.A[(j*(j-1))/2+(i-1)];
}

void Display(struct Matrix m) {
    int i, j;
    for(i = 1; i <= m.n; i++) {
        for(j = 1; j <= m.n; j++) {
                printf("%d ", Get(m, i, j));
        }
        printf("\n");
    }
}

int main() {
    struct Matrix m;
    int i, j, x;

    printf("Enter Dimension: ");
    scanf("%d", &m.n);
    m.A = (int *)malloc((m.n*(m.n+1))/2 * sizeof(int));

    printf("enter all elements:\n");
    for(i = 1; i <= m.n; i++) {
        for(j = 1; j <= m.n; j++) {
            scanf("%d", &x);
            // Store only lower triangle
            if(i >= j)
                Set(&m, i, j, x);
        }
    }

    printf("\n\n");

    printf("The elements are:\n");
    Display(m);

    return 0;
}
