#include <stdio.h>
#include <stdlib.h>

struct node *root;

struct node
{
    int number;
    struct node *right;
    struct node *left;
    struct node *back;
};

void addbranch()
{
    int input;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the next number");
    scanf("%d", &input);
    
}

main()
{
    root = (struct node *)malloc(sizeof(struct node));
    printf("Enter first number");
    scanf("%d", &root->number);

    addbranch();

    return EXIT_SUCCESS;
}