/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};

And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */

//Function to push an element into the queue.
void MyQueue:: push(int x)
{
        QueueNode *temp = new QueueNode(x);
        if(front == NULL){
            front=rear=temp;
            return;
        }
        rear->next = temp;
        rear = temp;
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        
        QueueNode *temp = front;
        if(temp == NULL) {
            return -1;
        }
        
        if(temp->next != NULL){
            temp = temp->next;
            int k = front->data;
            front = temp;
            return k;
        }
        else{
            int k = front->data;
            delete(front);
            front = rear =  NULL;
            return k;
        }
        
}


