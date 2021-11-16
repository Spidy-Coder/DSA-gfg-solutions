void printDeque(deque<int> dq)
{
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    
    cout<<endl;
}  
