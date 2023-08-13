#include <stdio.h>

int length, width;
long area;

struct Coord{
    int x;
	int y;
};

struct Rectangle{
    struct Coord top_left;
    struct Coord bottom_rt;
}MyBox;

int main()
{
    printf("Enter the top left x coordinate: ");
    scanf("%d", &MyBox.top_left.x);
    printf("\nEnter the top left y coordinate: ");
    scanf("%d", &MyBox.top_left.y);
    printf("\nEnter the bottom right x coordinate: ");
    scanf("%d", &MyBox.bottom_rt.x);
    printf("\nEnter the bottom right y coordinate: ");
    scanf("%d", &MyBox.bottom_rt.y);
    width = MyBox.bottom_rt.x - MyBox.top_left.x;
    length = MyBox.bottom_rt.y - MyBox.top_left.y;
    area = width * length;
    printf("\nThe area is %ld units.\n", area);

    getch();
    return 0;
}
