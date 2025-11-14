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
    struct sparse s;
    create(&s);
    display(s);
    return 0;
}