#include "common.h"

/*create a list and the size is chageble*/
ST_Node *creat_Linked_List(int Lenth)

{
		
		int i;
		
		ST_Node *head,*New_Node,*Node;
		
		/*head�����������New Node��������ָ���·�����ڴ�ռ䣬Node����ָ��β��㣬��ͨ��Node�������·���Ľ��*/
		
		int a;
		
		head=NULL;
		
		for(i=1;i<=Lenth;i++)
		
		{
		
			New_Node=(ST_Node *)malloc(sizeof(ST_Node));
			if(NULL == New_Node)
				{
					return FALSE;
					printf("�ڴ����ʧ��");	//�ڴ����ʧ�� ����0��
				}
			
			/*��̬�����ڴ�ռ䣬������ת��Ϊ(struct Node)����*/	
			printf("\nplease input the value of NO.%d��",i);
			scanf("%d",&a);	
			New_Node->value = a;	
			if(NULL == head)/*ָ�������ͷָ��*/	
			{
					head = New_Node;
					Node = New_Node;	
			}	
			else
			{	
					Node->next = New_Node;	
					Node = New_Node;
			}	
			Node->next = NULL; /*β���ĺ��ָ��ΪNULL(��)*/
		}
		return head;/*���������ͷָ��*/

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
		while(New_Node)/*ֱ�����New_NodeΪNULL����ѭ��*/
		
		{
		
				printf("%d ",New_Node->value);/*�������е�ֵ*/
		
				New_Node = New_Node->next;/*ָ����һ�����*/
		
		}
		printf("\n\n");
		return TRUE;
	}