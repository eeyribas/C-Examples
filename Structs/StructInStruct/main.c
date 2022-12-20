#include <stdio.h>

int length, width;
long area;

struct coord
{
    int x;
	int y;
};

struct rectangle{
    struct coord topleft;
 		struct coord bottomrt;
}mybox;

int main()
{
    printf("\nEnter the top left x coordinate: ");
    scanf("%d", &mybox.topleft.x);
    printf("\nEnter the top left y coordinate: ");
    scanf("%d", &mybox.topleft.y);
    printf("\nEnter the bottom right x coordinate: ");
    scanf("%d", &mybox.bottomrt.x);
    printf("\nEnter the bottom right y coordinate: ");
    scanf("%d", &mybox.bottomrt.y);
    width = mybox.bottomrt.x - mybox.topleft.x;
    length = mybox.bottomrt.y - mybox.topleft.y;
    area = width * length;
    printf("\nThe area is %ld units.\n", area);

    return 0;
}
