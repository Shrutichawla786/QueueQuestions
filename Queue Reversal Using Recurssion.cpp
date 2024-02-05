Q.Queue Reversal
Link-->https://www.geeksforgeeks.org/problems/queue-reversal/1
code-->void reverse(queue<int>& q){
        if(q.empty()){
            return;
        }
        int f = q.front();
        q.pop();
        reverse(q);
        q.push(f);
        
    }
    queue<int> rev(queue<int> q)
    {
        // add code here.
        reverse(q);
        return q;
    }

  Expected Time Complexity : O(n)
Expected Auxilliary Space : O(n)
