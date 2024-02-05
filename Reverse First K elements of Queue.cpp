Q.Reverse First K elements of Queue
link->https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
code-->queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        stack<int>s;
        
        for(int i=0;i<k;i++){
            int ans = q.front();
            s.push(ans);
            q.pop();
            
        }
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        for(int i=0;i<q.size()-k;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
    }
Expected Time Complexity : O(N)
Expected Auxiliary Space : O(K)
