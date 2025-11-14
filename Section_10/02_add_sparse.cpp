#include <iostream>
#include <stdio.h>
using namespace std;

struct element{
    int i;
    int j;
    int x;
};

struct sparse{
    int m;
    int n;
    int num;
    struct element *e;
};

void create(struct sparse *s){
    int i;
    printf("Enter Dimensaions:\n");
    scanf("%d %d",&s->m,&s->n);
    printf("Enter number of non-Zero elements: ");
    scanf("%d",&s->num);
    s->e = new element[s->num];
    printf("Enter all elements:\n");
    for(i=0;i<s->num;i++){
        printf("Enter the row column & the element %d: ",i+1);
        scanf("%d %d %d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}

sparse* Add(sparse *s1, sparse *s2){
    sparse *sum;
    int p=0,q=0,r=0;
    if( s1->m != s2->m || s1->n != s2->n)
        return nullptr;
    sum = new sparse;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->e = new element[s1->num + s2->num];
    while(p<s1->num && q<s2->num){
        if( s1->e[p].i < s2->e[q].i )
            sum->e[r++] = s1->e[p++];
        else if( s1->e[p].i > s2->e[q].i ){
            sum->e[r++] = s2->e[q++];
        }
        else{
            if( s1->e[p].j < s2->e[q].j )
                sum->e[r++] = s1->e[p++];
            else if( s1->e[p].j > s2->e[q].j )
                sum->e[r++] = s2->e[q++];
            else{
                sum->e[r] = s1->e[p++];
                sum->e[r++].x += s2->e[q++].x;
            }
        }
    }
    while(p < s1->num) sum->e[r++] = s1->e[p++];
    while(q < s2->num) sum->e[r++] = s2->e[q++];

    sum->num=r;

    return sum;
}

void display(struct sparse s){
    int i,j,k=0;
    printf("Displaying the Matrix:\n");
    for(i=1;i<=s.m;i++){
        for(j=1;j<=s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j)
                printf("%d ",s.e[k++].x);
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main()
{
    struct sparse s1,s2;
    printf("For Sparse matrix 1:\n");
    create(&s1);
    printf("For Sparse matrix 1:\n");
    create(&s2);
    sparse* sum = Add(&s1,&s2);
    display(s1);
    display(s2);
    if (sum != nullptr)
        display(*sum);

    delete[] s1.e;
    delete[] s2.e;
    delete[] sum->e;
    delete sum;

    return 0;
}