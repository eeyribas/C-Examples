#include <stdio.h>
#include <stdlib.h>

struct Node *Delete(struct Node *, int);
int Length(struct Node *);

struct Node{
    int data;
    struct Node *link;
};

struct Node *Insert(struct Node *p, int n)
{
    struct Node *temp;
    if(p == NULL){
        p = (struct Node *)malloc(sizeof(struct Node));
 		if(p == NULL){
            printf("Error\n");
            exit(0);
        }
        p->data = n;
        p->link = NULL;
    } else{
        temp = p;
        while(temp->link != NULL)
            temp = temp->link;
        temp->link = (struct Node *)malloc(sizeof(struct Node));
		if(temp->link == NULL){
            printf("Error\n");
            exit(0);
        }
        temp = temp->link;
        temp->data = n;
        temp->link = NULL;
    }

    return (p);
}

void PrintList(struct Node *p)
{
    printf("The data values in the list are\n");
    while (p != NULL){
        printf("%d\t", p->data);
        p = p-> link;
	}
}

void main()
{
    int n;
    int x;
    struct Node *start = NULL;
    printf("Enter the nodes to be created \n");
    scanf("%d", &n);
    while(n > 0){
        printf("Enter the data values to be placed in a Node\n");
        scanf("%d", &x);
        start = Insert(start, x);
	}
    printf("The list before deletion id\n");
    PrintList(start);
    printf("% \n Enter the Node no \n");
    scanf(" %d", &n);
    start = Delete(start, n);
    printf("The list after deletion is\n");
    PrintList(start);
}

struct Node *Delete(struct Node *p, int node_no)
{
    struct Node *prev, *curr;
	int i;
    if(p == NULL){
        printf("There is no Node to be deleted \n");
    } else{
        if(node_no > Length(p)){
            printf("Error\n");
        } else{
            prev = NULL;
            curr = p;
            i = 1 ;
			while(i < node_no){
                prev = curr;
 				curr = curr->link;
 				i = i + 1;
            }

            if(prev == NULL){
                p = curr->link;
                free(curr);
            } else{
                prev->link = curr->link ;
                free(curr);
            }
        }
    }

    return(p);
}

int Length(struct Node *p)
{
    int count = 0 ;
	while(p != NULL){
        count++;
        p = p->link;
    }

    return (count) ;
}
