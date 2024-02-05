Q.Queue Operations
link->https://www.geeksforgeeks.org/problems/queue-operations/1?page=1&category=Queue&sortBy=submissions
code->void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int count=0;
        queue<int>temp;
        while(!q.empty()){
            if(q.front()==k){
                count++;
            }
            temp.push(q.front());
            q.pop();
        }
        while(!temp.empty()){
            q.push(temp.front());
            temp.pop();
        }
        if(count>0){
            return count;
        }
        else{
            return -1;
        }
        
    }
Expected Time Complexity: O(N*M)
Expected Space Complexity: O(N)
