#include<stdio.h>
#include<conio.h>

#define ANSWER 40
#define FREQ 11

int main()
{
	int student_answer, voting, ans[ANSWER]={1,1,2,3,2,2,2,5,6,7,8, 9,10,1,1,1,3,3,3,1,1,3,4,6,4,5,6,6,8,1,2,3,5,7,9,9,9,10,1,5};
	int freq[FREQ]={0};

	for(student_answer=0; student_answer<ANSWER; student_answer++){
        ++freq[ans[student_answer]];
    }

	printf("%s%13s\n", "Voting", "Freq");
	for(voting=1; voting<FREQ; voting++){
       printf("%6d%14d\n", voting, freq[voting]);
    }

	getch();
	return 0;
}
