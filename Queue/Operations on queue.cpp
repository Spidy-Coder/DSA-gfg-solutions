class Solution{
    public:
    //Function to push an element in queue.
    void enqueue(queue<int> &q,int x)
    {
        //inserting x using push operation.
        q.push(x);
    }
    
    //Function to remove front element from queue.
    void dequeue(queue<int> &q)
    {
        //removing front element using pop operation.
        q.pop();
    }
    
    //Function to find the front element of queue.
    int front(queue<int> &q)
    {
        //storing the front element in a variable.
        int x=q.front();
        //returning the front element.
        return x;
    }
    
    //Function to find an element in the queue.
    string find(queue<int> q, int x)
    {
        bool exists=false;
        
        while(!q.empty())
        {
            //storing the front value in a variable.
            int front=q.front();
            //removing front element using pop operation.
            q.pop();
            
            //if the stored value is equal to the element we are 
            //finding, we store true in boolean variable.
            if(front==x)
            exists=true;
        }
        
        //if boolean variable is true, it means element is present in
        //queue else it is absent.
        if(exists==true){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
