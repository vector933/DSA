#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;

struct term{
    int coeff;
    int exp;
};

struct poly{
    int n;
    struct term *t;
};

void create(struct poly *p){
    printf("Enter the number of non-zero term: ");
    scanf("%d",&p->n);
    p->t = new term [p->n];
    printf("Enter the terms:\n");
    for(int i = 0; i < p->n; i++){
        printf("Enter the Coefficient of term %d and it's respective Exponent:\n",i+1);
        scanf("%d %d",&p->t[i].coeff,&p->t[i].exp);
    }
}

void display(struct poly p){
    for(int i=0; i<p.n; i++){
        if(p.t[i].exp == 0)
            printf("%d",p.t[i].coeff);
        else if(p.t[i].exp == 1)
            printf("%dX",p.t[i].coeff);
        else
            printf("%dX%d",p.t[i].coeff,p.t[i].exp);
        if(i < ((p.n)-1))
            printf(" + ");
    }
    printf("\n");
}

int evaluate(struct poly p, int x){
    int sum=0;
    for(int i=0; i<p.n; i++)
        sum += p.t[i].coeff*pow(x,p.t[i].exp);
    return sum;
}

struct poly *add(struct poly *p1, struct poly *p2){
    int i = 0, j = 0, k = 0;
    struct poly *sum = new poly;

    sum->t = new term [p1->n + p2->n];

    while(i<p1->n && j<p2->n){
        if(p1->t[i].exp > p2->t[j].exp)
            sum->t[k++]=p1->t[i++];
        else if(p1->t[i].exp < p2->t[j].exp)
            sum->t[k++]=p1->t[j++];
        else{
            sum->t[k]=p1->t[i++];
            sum->t[k++].coeff += p2->t[j++].coeff;
        }
    }
    while(i<p1->n)
        sum->t[k++]=p1->t[i++];
    while(j<p2->n)
        sum->t[k++]=p2->t[j++];

    sum->n = k;
    return sum;

}

int main()
{
    struct poly p,p2;
    struct poly *added;
    int x,sum;
    printf("For 1st Polynomial:\n");
    create(&p);
    printf("Your 1st Polynomial is:\n");
    display(p);
    printf("Enter the value of X to evaluate: ");
    scanf("%d", &x);
    sum = evaluate(p,x);
    printf("Sum After evaluation is: %d",sum);
    printf("\nFor 2nd Polynomial:\n");
    create(&p2);
    printf("Your 2nd Polynomial is:\n");
    display(p2);
    added = add(&p,&p2);
    printf("Your Sum of Polynomials is:\n");
    display(*added);
    return 0;
}