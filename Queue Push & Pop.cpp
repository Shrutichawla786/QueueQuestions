Q.Queue Push & Pop
link-->https://www.geeksforgeeks.org/problems/queue-designer/1
code->queue<int>_push(int arr[],int n)
{
   //return a queue with all elements of arr inserted in it
   queue<int>q;
   for(int i=0;i<n;i++){
       q.push(arr[i]);
   }
   return q;
}

void _pop(queue<int>s)
{
    //print front and dequeue for each element until it becomes empty
    while(!s.empty()){
        int ans= s.front();
        s.pop();
        cout<<ans<<" ";
        
    }
} 
Expected time complexity: O(n)

Expected space complexity: O(n)

 
