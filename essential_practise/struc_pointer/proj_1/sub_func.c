#include "common.h"

/*create a list and the size is chageble*/
ST_Node *creat_Linked_List(int Lenth)

{
		
		int i;
		
		ST_Node *head,*New_Node,*Node;
		
		/*head用来标记链表，New Node总是用来指向新分配的内存空间，Node总是指向尾结点，并通过Node来链入新分配的结点*/
		
		int a;
		
		head=NULL;
		
		for(i=1;i<=Lenth;i++)
		
		{
		
			New_Node=(ST_Node *)malloc(sizeof(ST_Node));
			if(NULL == New_Node)
				{
					return FALSE;
					printf("内存分配失败");	//内存分配失败 返回0；
				}
			
			/*动态分配内存空间，并数据转换为(struct Node)类型*/	
			printf("\nplease input the value of NO.%d：",i);
			scanf("%d",&a);	
			New_Node->value = a;	
			if(NULL == head)/*指定链表的头指针*/	
			{
					head = New_Node;
					Node = New_Node;	
			}	
			else
			{	
					Node->next = New_Node;	
					Node = New_Node;
			}	
			Node->next = NULL; /*尾结点的后继指针为NULL(空)*/
		}
		return head;/*返回链表的头指针*/

}


/*insert a node into the list*/
int insert_Node(ST_Node *current,int new_value)
{
		ST_Node  *previous;
		ST_Node  *new;
		while((current->value) < new_value)
		{
				previous = current;
				current = current ->next;
		}

		new = (ST_Node*) malloc(sizeof(ST_Node));

		new->value = new_value;

		new->next = current;
		previous->next = new;

    return TRUE;
}

int print_list(ST_Node *current,ST_Node *New_Node)
{
	  
		New_Node = current;
		while(New_Node)/*直到结点New_Node为NULL结束循环*/
		
		{
		
				printf("%d ",New_Node->value);/*输出结点中的值*/
		
				New_Node = New_Node->next;/*指向下一个结点*/
		
		}
		printf("\n\n");
		return TRUE;
	}