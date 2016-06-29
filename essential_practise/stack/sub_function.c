#include <queue.h>

int array[QUEUE_SIZE1 + 2] = {0};
int g_queue_size = 10;

typedef enum {
    (int)'i',
    (int)'d',
    (int)'p',
    (int)'c'
}g_key_value;

/*判断队列是否为空*/
int is_empty(int rear,int queue_size)
{
		if (rear = (rear + 1)% (queue_size+2))
		{
				return FALSE;
		}
		else
		{
				return TRUE;	
		}	
}

/*判断为满*/
int  is_queue_full(int rear,int queue_size)
{
		if(rear = (rear + 2)% (queue_size+2))
		{
				return FALSE;
		}
		else
		{
				return TRUE;	
		}	
}

/*
创建队列，输入参数为可以存储的最大元素数
仅适用于动态分配数组的队列
*/
int  create_queue(int queue_size)
{
    
    return 1;
}


/*
销毁队列。
该函数仅适用于链式和动态分配数组的队列
*/
//static void destroy_queue(void)

/*
增加一个元素，输入参数为增添的元素
*/

void insert_node(QUEUE_TYPE value,  int rear)
{
    array [rear] = value;
}
/*
删除元素，并将其丢弃
*/
//static void  delete_node(void)
//{
//	;		
//}
/*
返回第一个元素的值，不修改队列本身
*/
//static QUEUE_TYPE first (void)
//{
//;

//}

int queue_init(int queue_size)
{
    create_queue(queue_size);
    front = 0;
    rear = 0;
    return 1;
}

/*打印队列元素*/
void print_queue(void)
{
    int count = 0;

    if (is_empty( rear, g_queue_size))
    {
        printf("\n haha!queue is empty!\n");
    }
    else
    {
        while(count<g_queue_size)
        {
            printf("\nthe NO.%d Node of the queue is %d\n",count, array[count]);
            count++;
        }
    }
}