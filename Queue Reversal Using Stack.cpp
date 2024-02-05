Q.Queue Reversal
link-->https://www.geeksforgeeks.org/problems/queue-reversal/1
code-->queue<int> rev(queue<int> q)
    {
        // add code here.
        stack <int>s;
        while(!q.empty()){
            int a= q.front();
            s.push(a);
            q.pop();
        }
        while(!s.empty()){
            int b= s.top();
            q.push(b);
            s.pop();
        }
        return q;
    }
Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n
