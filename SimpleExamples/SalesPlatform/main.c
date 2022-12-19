#include<stdio.h>
#include<conio.h>

#define PERSONAL 4
#define PRODUCT  5

int main(){
	int a[PERSONAL][PRODUCT]={0};
	int sales, product_nu, piece, i, j;
	int sum=0;
	int product_1=5, product_2=6, product_3=7, product_4=8, product_5=9;

	printf("*****Login to the Daily Sales Platform*****\n");
	for(i=0; i<20; i++)
    {
        printf("\nSales representative number= ");
        scanf("%d", &sales);
        switch(sales)
        {
            case 1:
                printf("Product No= ");
                scanf("%d", &product_nu);
                printf("Quantity= ");
                scanf("%d", &piece);
                if(product_nu==1)
                {
                    sum =product_1*piece;
                    a[0][0] +=sum;
                }
                else if(product_nu==2)
                {
                    sum=product_2*piece;
                    a[0][1] +=sum;
                }
                else if(product_nu==3)
                {
                    sum=product_3*piece;
                    a[0][2] +=sum;
                }
                else if(product_nu==4)
                {
                    sum=product_4*piece;
                    a[0][3] +=sum;
                }
                else if(product_nu==5)
                {
                    sum=product_5*piece;
                    a[0][4] +=sum;
                }
                break;

            case 2:
                printf("Product No= ");
                scanf("%d", &product_nu);
                printf("Quantity= ");
                scanf("%d", &piece);
                if(product_nu==1)
                {
                    sum =product_1*piece;
                    a[1][0] +=sum;
                }
                else if(product_nu==2)
                {
                    sum=product_2*piece;
                    a[1][1] +=sum;
                }
                else if(product_nu==3)
                {
                    sum=product_3*piece;
                    a[1][2] +=sum;
                }
                else if(product_nu==4)
                {
                    sum=product_4*piece;
                    a[1][3] +=sum;
                }
                else if(product_nu==5)
                {
                    sum=product_5*piece;
                    a[1][4] +=sum;
                }
                break;

            case 3:
                printf("Product No= ");
                scanf("%d", &product_nu);
                printf("Quantity= ");
                scanf("%d", &piece);
                if(product_nu==1)
                {
                    sum =product_1*piece;
                    a[2][0] +=sum;
                }
                else if(product_nu==2)
                {
                    sum=product_2*piece;
                    a[2][1] +=sum;
                }
                else if(product_nu==3)
                {
                    sum=product_3*piece;
                    a[2][2] +=sum;
                }
                else if(product_nu==4)
                {
                    sum=product_4*piece;
                    a[2][3] +=sum;
                }
                else if(product_nu==5)
                {
                    sum=product_5*piece;
                    a[2][4] +=sum;
                }
                break;

            case 4:
                printf("Product No= ");
                scanf("%d", &product_nu);
                printf("Quantity= ");
                scanf("%d", &piece);
                if(product_nu==1)
                {
                    sum =product_1*piece;
                    a[3][0] +=sum;
                }
                else if(product_nu==2)
                {
                    sum=product_2*piece;
                    a[3][1] +=sum;
                }
                else if(product_nu==3)
                {
                    sum=product_3*piece;
                    a[3][2] +=sum;
                }
                else if(product_nu==4)
                {
                    sum=product_4*piece;
                    a[3][3] +=sum;
                }
                else if(product_nu==5)
                {
                    sum=product_5*piece;
                    a[3][4] +=sum;
                }
                break;
            }
        i++;
	}

	printf("\n\nResult\n");
	for(i=0; i<PERSONAL; i++)
    {
		for(j=0; j<PRODUCT; j++)
		{
		    printf("%6d",a[i][j] );
		}
		printf("\n");
	}

	getch();
	return 0;
}
