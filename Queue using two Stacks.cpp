Q.Queue using two Stacks
link-->https://www.geeksforgeeks.org/problems/queue-using-two-stacks/1
code-->void StackQueue :: push(int x)
{
    // Your Code
    s1.push(x);
    
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code   
        if(s1.empty()){
            return -1;
        }
        while(!s1.empty()){
            int ans = s1.top();
           s2.push(ans);
           s1.pop();
        }
        int t = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return t;
}
Expected Time Complexity : O(1) for push() and O(N) for pop() or O(N) for push() and O(1) for pop()  
Expected Auxilliary Space : O(1).
