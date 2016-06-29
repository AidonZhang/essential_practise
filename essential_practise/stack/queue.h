
#include <stdio.h>
#include<stdlib.h>


#define QUEUE_TYPE int
#define TRUE        1
#define FALSE       0
#define QUEUE_SIZE1  10


//int array[]= {0};

extern int g_queue_size;
extern enum g_key_value


//typedef struct
//{
//		int front;
//		int rear;	
//}ST_Queue;
int system(const char *string);
int is_empty(int rear,int queue_size);
int is_queue_full(int rear,int queue_size);
int create_queue(int queue_size);
//static void destroy_queue(void);
void insert_node(QUEUE_TYPE value, int rear);
// static void delete_node(void);
//extern static QUEUE_TYPE first(void);
int queue_init();
void print_queue(void);
extern int array[QUEUE_SIZE1 + 2];
