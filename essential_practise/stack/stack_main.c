#include "queue.h"

int front;
int rear;

void main(void)
{
    
    int value;
	int key;
	
    printf("\n                    ********************************************\n");
	printf("                      The queue_size is %d: \n",g_queue_size);
	printf("\n                      Aidon is the most deligent programmer\n");
    printf("                    ********************************************\n");

    if(queue_init(g_queue_size))
    {
        printf("brilliant!\nqueue_init_success!\n");
    }



    while(1)
    {   

        scanf("%d",&key);
		g_key_value = key;
		switch (g_key_value)
        {
            case i: 
                    printf("==>i:\n");
                    scanf("%d",&value);
                    insert_node(value, rear);
                    rear = (rear + 1) % g_queue_size;
                    break;
            case d:
                    break;
            case p: 
                    print_queue();
                    break;
            default:
                    break;
		}
        
        
	}
    system("cls");
//    printf("\n                    ********************************************\n");
//	printf("\n                      the queue has been already full\n");
//	printf("\n                     ********BRAVO!!!******************************\n ");
	print_queue();
	getchar();
}
