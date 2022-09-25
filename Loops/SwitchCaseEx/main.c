#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
int choose, count;
int freq_1=0, freq_2=0, freq_3=0, freq_4=0, freq_5=0, freq_6=0;

for(choose=1; choose<=6000; choose++){
	choose=1+rand()%6;

	switch(choose){
	case 1: ++freq_1; break;
	case 2: ++freq_2; break;
	case 3: ++freq_3; break;
	case 4: ++freq_4; break;
	case 5: ++freq_5; break;
	case 6: ++freq_6; break;
	}
}

	printf("%s%13s\n", "Choose", "Frequence");
	printf("1%15d\n", freq_1);
	printf("2%15d\n", freq_2);
	printf("3%15d\n", freq_3);
	printf("4%15d\n", freq_4);
	printf("5%15d\n", freq_5);
	printf("6%15d\n", freq_6);

	getch();
	return 0;
}
