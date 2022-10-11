#include<stdio.h>
#include<conio.h>

int main(void)
{
    int house_width, house_height, roof_width, roof_height, window_width, window_height, door_width, door_height, house, window;
    int i , j , k , l , m , n , z , a , t;

    printf("Width : ");
    scanf("%d",&house_width);

    house_height = house_width/2;
    roof_height = house_height/2+1;
    roof_width = house_width;
    window_width = roof_height;
    door_width = roof_height;
    window_height = door_width/2+1;
    door_height = door_width/2+1;
    house = house_width/2;
    window = window_width/2;
    l = roof_width/2;
    k = 0;


    // Draw Roof
    for ( i = 0 ; i < roof_height; i++ )
    {
        for ( j = 0 ; j < l ; j++ )
        {
            printf(" ");
        }
        for ( m = 0 ; m < k ; m++ )
        {
           printf("/");
        }
        printf("+");
        for ( m = 0 ; m < k ; m++ )
        {
            printf("\\");
        }
        for ( j = 0 ; j < l ; j++ )
        {
            printf(" ");
        }
        printf("\n");
        l=l-2;
        k=k+2;
    }

    // Draw House
    for ( z = 0 ; z < (house_height - door_height - window_height )/2 ; z++ )
    {
        for ( a = 0 ; a < house_width; a++ )
        {
           printf("0");
        }
        printf("\n");
    }

    // Draw Window
    for ( z = 0 ; z < window_height/2 ; z++ )
    {
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");

        }
        for ( j = 0 ; j < window ; j++)
        {
            printf(" ");
        }
        printf("+");
        for ( j = 0 ; j < window ; j++)
        {
            printf(" ");
        }
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        if( (((house_width-1)/2-window_width)/2)%2 )
        {
            for( t = 0 ; t < 3 ; t++ )
            {
                printf("0");
            }
        }
        else
        {
            printf("0");
        }
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        for ( j = 0 ; j < window; j++)
        {
            printf(" ");
        }
        printf("+");
        for ( j = 0 ; j < window; j++)
        {
            printf(" ");
        }
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        printf("\n");
    }


    for ( i = 0 ; i < (house-window_width)/2 ; i++)
    {
        printf("0");
    }
    for ( j = 0 ; j < (window*2)+1 ; j++)
    {
        printf("+");
    }
    for ( i = 0 ; i < (house-window_width)/2 ; i++)
    {
        printf("0");
    }
    if( (((house_width-1)/2-window_width)/2)%2 )
    {
        for( t = 0 ; t < 3 ; t++ )
        {
            printf("0");
        }
    }
    else
    {
        printf("0");
    }
    for ( i = 0 ; i < (house-window_width)/2 ; i++)
    {
        printf("0");
    }
    for ( j = 0 ; j < (window*2)+1 ; j++)
    {
        printf("+");
    }
    for ( i = 0 ; i < (house-window_width)/2 ; i++)
    {
        printf("0");
    }
    printf("\n");

    for ( z = 0 ; z < window_height/2 ; z++ )
    {
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        for ( j = 0 ; j < window; j++)
        {
            printf(" ");
        }
        printf("+");
        for ( j = 0 ; j < window; j++)
        {
            printf(" ");
        }
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        if( (((house_width-1)/2-window_width)/2)%2 )
        {
            for( t = 0 ; t < 3 ; t++ )
            {
                 printf("0");
            }
        }
        else
        {
            printf("0");
        }
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        for ( j = 0 ; j < window; j++)
        {
            printf(" ");
        }
        printf("+");
        for ( j = 0 ; j < window; j++)
        {
            printf(" ");
        }
        for ( i = 0 ; i < (house-window_width)/2 ; i++)
        {
            printf("0");
        }
        printf("\n");
    }

    for ( z = 0 ; z < ( house_height - door_height - window_height )/2 ; z++ )
    {
        for ( a = 0 ; a < house_width ; a++ )
        {
            printf("0");
        }
        printf("\n");
    }

    // Draw door.
    for ( t = 0 ; t < door_height ; t++ )
    {
        for ( n = 0 ; n < (house_width - door_width)/2 ; n++ )
        {
            printf("0");
        }
        for ( n = 0 ; n < door_width/2 ; n++ )
        {
            printf(" ");
        }
        printf("+");
        for ( n = 0 ; n < door_width/2 ; n++ )
        {
            printf(" ");
        }
        for ( n = 0 ; n < (house_width - door_width)/2 ; n++ )
        {
            printf("0");
        }
        printf("\n");
    }


    getch();
    return 0;
}
