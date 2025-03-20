#include<stdio.h>
struct student {
	char roll[20];
	char name[20];
	int age;
	float cgpa;
};
int  main()
{
	struct student s1;
	scanf("%s",s1.cgpa);
	scanf("%s",s1.name);
	scanf("%d",&s1.age);
	scanf("%f",&s1.cgpa);
	printf("%s %s %d %.2f",s1.roll,s1.name,s1.age,s1.cgpa);
}
