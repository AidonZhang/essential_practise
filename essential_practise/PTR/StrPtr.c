#include <stdio.h>

struct stu
{
char name[20];
long number;
float score[4];
} ;

int main(void)
{
 struct stu *p1=NULL, *p2=NULL ;	
 
 p1 = (struct stu*)malloc(sizeof(struct stu));
 p2 = (struct stu*)malloc(sizeof(struct stu));
 p1->number = 100;
 p2->number = 200;
 
 printf("%d\n,%d\n",p1->number,p2->number);	
 
 while(1)
 {
 	;
 }
	
}