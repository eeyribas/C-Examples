#include <stdio.h>

 unsigned int f, x;
 unsigned int Factorial(unsigned int a);

 int main()
 {
    puts("Integer : ");
    scanf("%d", &x);

 	if( x > 8 || x < 1){
       printf("Error()!");
    }
    else{
        f = Factorial(x);
 		printf("%u Factorial = %u\n", x, f);
    }

    return 0;
}

 unsigned int Factorial(unsigned int a)
 {
 	if (a == 1){
        return 1;
    }
    else{
		a *= Factorial(a-1);
		return a;
    }
}
