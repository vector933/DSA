#include <stdio.h>
#include <stdlib.h>

struct Matrix {
    int *A;
    int n;
};

void Set(struct Matrix *m, int i, int j, int x) {
    if(abs(i-j)<=1){
        if(i-j == 1)
            m->A[i-2]=x;
        else if (i-j == 0)
        {
            m->A[(m->n-1)+(i-1)]=x;
        }else if (i-j == -1)
        {
            m->A[(2*(m->n)-1)+(i-1)]=x;
        }

        
    }
}

int Get(struct Matrix m, int i, int j) {
    if(abs(i-j)<=1)
        if(i-j == 1)
            return m.A[i-2];
        else if (i-j == 0)
        {
            return m.A[(m.n-1)+(i-1)];
        }else if (i-j == -1)
        {
            return m.A[(2*(m.n)-1)+(i-1)];
        }
    else
        return 0;
}

void Display(struct Matrix m) {
    int i, j;
    for(i = 1; i <= m.n; i++) {
        for(j = 1; j <= m.n; j++) {
            if(abs(i-j)<=1)
                printf("%d ", Get(m,i,j));
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main() {
    struct Matrix m;
    int i, j, x;

    printf("Enter Dimension: ");
    scanf("%d", &m.n);
    m.A = (int *)malloc(((m.n*3)-2)* sizeof(int));

    printf("Enter all elements:\n");
    for(i = 1; i <= m.n; i++) {
        for(j = 1; j <= m.n; j++) {
            scanf("%d", &x);
            if(abs(i-j)<=1)
               Set(&m, i, j, x);
        }
    }

    printf("\n\n");

    printf("The elements are:\n");
    Display(m);

    return 0;
}
