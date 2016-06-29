#include "common.h"

int  main()

{

		int Lenth;
		int insert_value;
		ST_Node *New_Node;
		ST_Node *root;
		
		printf("\n please input the lenth of the linked list：\n");
		
		scanf("%d",&Lenth);
		
		New_Node = creat_Linked_List(Lenth);/*链表的头指针(head)来标记整个链表*/
		
		root = New_Node;
		printf("\n output the value of the node:\n");
		
		print_list(root,New_Node);

		printf("\ninput the number you want insert:\n");

		scanf("%d",&insert_value);
		insert_Node(root , insert_value);
		
	  printf("\n output the value of the node:\n");
	  root = New_Node;
		print_list(root,New_Node);
		

		return 0;
}

