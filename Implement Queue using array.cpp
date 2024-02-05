Q.Implement Queue using array
link-->https://www.geeksforgeeks.org/problems/implement-queue-using-array/1
code-->void MyQueue :: push(int x)
{
        // Your Code
        arr[rear++]= x;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code 
        if(front==rear){
            return -1;
        }
        else{
            int ans= arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
}
Expected Time Complexity: O(1) for both push() and pop().
Expected Auxiliary Space: O(1) for both push() and pop().
