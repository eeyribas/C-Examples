#include <stdio.h>
#include <stdlib.h>

struct node *Delete(struct node *, int);
int Length(struct node *);

struct node
{
    int data;
    struct node *link;
};

struct node *Insert(struct node *p, int n)
{
    struct node *temp;
    if(p==NULL)
    {
        p=(struct node *)malloc(sizeof(struct node));
 		if(p==NULL)
 		{
            printf("Error\n");
            exit(0);
        }
        p-> data = n;
        p-> link = NULL;
    }
    else
    {
        temp = p;
        while (temp-> link != NULL)
            temp = temp-> link;
        temp-> link = (struct node *)malloc(sizeof(struct node));
		if(temp -> link == NULL)
		{
            printf("Error\n");
            exit(0);
        }
        temp = temp-> link; temp-> data = n;
        temp-> link = NULL;
    }

    return (p);
}

void PrintList ( struct node *p )
{
    printf("The data values in the list are\n");
    while (p!= NULL)
	{
        printf("%d\t",p-> data);
        p = p-> link;
	}
}

void main()
{
    int n;
    int x;
    struct node *start = NULL;
    printf("Enter the nodes to be created \n");
    scanf("%d",&n);
    while ( n > 0 )
	{
        printf( "Enter the data values to be placed in a node\n");
        scanf("%d",&x);
        start = Insert(start, x);
	}
    printf(" The list before deletion id\n");
    PrintList(start);
    printf("% \n Enter the node no \n");
    scanf ( " %d",&n);
    start = Delete(start , n);
    printf(" The list after deletion is\n");
    PrintList ( start );
}

struct node *Delete(struct node *p, int node_no)
{
    struct node *prev, *curr ;
	int i;
    if (p == NULL )
    {
        printf("There is no node to be deleted \n");
    }
    else
    {
        if(node_no > Length(p))
        {
            printf("Error\n");
        }
        else
        {
            prev = NULL;
            curr = p;
            i = 1 ;
			while ( i < node_no )
            {
                prev = curr;
 				curr = curr-> link;
 				i = i+1;
            }
            if ( prev == NULL )
            {
                p = curr -> link;
                free(curr);
            }
            else
            {
                prev -> link = curr -> link ;
                free(curr);
            }
        }
    }

    return(p);
}

int Length(struct node *p)
{
    int count = 0 ;
	while ( p != NULL )
	{
        count++;
        p = p->link;
    }

    return ( count ) ;
}
