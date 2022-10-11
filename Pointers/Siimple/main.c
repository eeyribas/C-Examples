 #include <stdio.h>

int var = 1;
int *ptr;

int main()
{
    ptr = &var;
    printf("\n Direct, var = %d", var);
    printf("\n Indirect, var = %d", *ptr);
    printf("\n\n  var adress  = %d", &var);
    printf("\n var adress = %d\n", ptr);

    return 0;
}
