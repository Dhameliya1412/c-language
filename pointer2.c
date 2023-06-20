#include<stdio.h>
int add(int maths,int eng,int sci,int total,float per)
{
	total=maths+eng+sci;
	per=(float)total/3;
	printf("\nMaths\tEnglish\tScince\tTotal\tPer\n");
	printf("%d\t%d\t%d\t%d\t%.2f",maths,eng,sci,total,per);
}
int main()
{
	int maths,sci,eng,total

;
	float per;
	printf("\nenter maths marks:");
	scanf("%d",&maths);
	printf("\nenter english marks:");
	scanf("%d",&eng);
	printf("\nenter scince marks:");
	scanf("%d",&sci);
	add(maths,sci,eng,total,per);
}