#include <queue.h>

int array[QUEUE_SIZE1 + 2] = {0};
int g_queue_size = 10;

typedef enum {
    (int)'i',
    (int)'d',
    (int)'p',
    (int)'c'
}g_key_value;

/*�ж϶����Ƿ�Ϊ��*/
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

/*�ж�Ϊ��*/
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
�������У��������Ϊ���Դ洢�����Ԫ����
�������ڶ�̬��������Ķ���
*/
int  create_queue(int queue_size)
{
    
    return 1;
}


/*
���ٶ��С�
�ú�������������ʽ�Ͷ�̬��������Ķ���
*/
//static void destroy_queue(void)

/*
����һ��Ԫ�أ��������Ϊ�����Ԫ��
*/

void insert_node(QUEUE_TYPE value,  int rear)
{
    array [rear] = value;
}
/*
ɾ��Ԫ�أ������䶪��
*/
//static void  delete_node(void)
//{
//	;		
//}
/*
���ص�һ��Ԫ�ص�ֵ�����޸Ķ��б���
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

/*��ӡ����Ԫ��*/
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