#include <stdio.h>
#include <stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef struct Node 
{
		int value;
		struct Node *next;
}ST_Node;


extern  ST_Node *creat_Linked_List(int Lenth);
extern  int     insert_Node(ST_Node *current,int new_value);
extern  int     print_list(ST_Node *current,ST_Node *New_Node);



/*����ֻ�Ƕ�����һ���ṹ�����ͣ���δʵ�ʷ����ڴ�ռ�

ֻ�ж����˱����ŷ����ڴ�ռ�*/
