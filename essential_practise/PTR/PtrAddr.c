
/*
Q£ºthe answer doesn't contain  the last num?
Q: the output serial problem

********************************/
#include <stdio.h>

struct node
{
         char a;      
    char b;      
    short c;
         int d;
};
int main()
{
         struct node s = { 3, 5, 6, 100 };
         struct node *pt = &s;
         //pt = s;
         printf("%x\n", *(int*)pt);//60503
         exit(0);
}
