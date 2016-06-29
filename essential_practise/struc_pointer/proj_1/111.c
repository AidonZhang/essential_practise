 1 #include <stdio.h>
  2 #include <malloc.h>
  3 
  4 /**
  5  * C 语言: 单链表实现“队列”，只能存储int数据。
  6  *
  7  * @author skywang
  8  * @date 2013/11/07
  9  */
 10 
 11 // 单链表节点
 12 struct node {
 13     int val;
 14     struct node* next;
 15 };
 16 
 17 // 表头
 18 static struct node *phead=NULL;
 19 
 20 // 创建节点，val为节点值
 21 static struct node* create_node(val) 
 22 {
 23     struct node *pnode=NULL;
 24     pnode = (struct node*)malloc(sizeof(struct node));
 25     if (!pnode)
 26         return NULL;
 27     pnode->val = val;
 28     pnode->next = NULL;
 29     
 30     return pnode;
 31 }
 32 
 33 // 销毁单向链表
 34 static int destroy_single_link() 
 35 {
 36     struct node *pnode=NULL;
 37 
 38     while (phead != NULL) 
 39     {
 40         pnode = phead;
 41         phead = phead->next;
 42         free(pnode);
 43     }
 44     return 0;
 45 }
 46 
 47 // 将val添加到队列的末尾
 48 static void add(int val) 
 49 {
 50     if (!phead)
 51     {
 52         phead = create_node(val);
 53         return ;
 54     }
 55 
 56     struct node *pnode = create_node(val);
 57     struct node *pend = phead;
 58     while (pend->next)
 59         pend = pend->next;
 60 
 61     pend->next = pnode;
 62 }
 63 
 64 // 返回“队列开头元素”
 65 int front() 
 66 {
 67     return phead->val;
 68 }
 69 
 70 // 返回并删除“队列开头元素”
 71 static int pop() 
 72 {
 73     int ret = phead->val;
 74     struct node *pnode = phead;
 75 
 76     phead = phead->next;
 77     free(pnode);
 78 
 79     return ret;
 80 }
 81 
 82 // 返回链表中节点的个数
 83 static int size() 
 84 {
 85     int count=0;
 86     struct node *pend = phead;
 87 
 88     while (pend) 
 89     {
 90         pend = pend->next;
 91         count++;
 92     }
 93 
 94     return count;
 95 }
 96 
 97 // 链表是否为空
 98 static int is_empty() 
 99 {
100     return size()==0;
101 }
102 
103 void main() 
104 {
105     int tmp=0;
106 
107     // 将10, 20, 30 依次加入到队列中
108     add(10);
109     add(20);
110     add(30);
111 
112     // 将“队列开头元素”赋值给tmp，并删除“该元素”
113     tmp = pop();
114     printf("tmp=%d\n", tmp);
115 
116     // 只将“队列开头的元素”赋值给tmp，不删除该元素.
117     tmp = front();
118     printf("tmp=%d\n", tmp);
119 
120     add(40);
121 
122     printf("is_empty()=%d\n", is_empty());
123     printf("size()=%d\n", size());
124     while (!is_empty())
125     {
126         printf("%d\n", pop());
127     }
128 
129     // 销毁队列
130     destroy_single_link();
131 }