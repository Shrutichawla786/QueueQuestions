Q.C++ STL | Set 5 (queue)
link-->https://www.geeksforgeeks.org/problems/c-stl-set-5-queue/1
code-->void push(queue<int> &q,int x)
{
    //Your code here
    q.push(x);
}


/*pop out the front element 
from the queue q and returns it */
int pop(queue<int> &q)
{
   //Your code here
   if(q.empty()){
       return -1;
   }
   int ans = q.front();
   q.pop();
   return ans;
}

/*returns the size of the queue q */
int getSize(queue<int> &q)
{
    //Your code here
    return q.size();
}

/*returns the last element of the queue */
int getBack(queue<int> &q)
{
	//Your code here
	int last =-1;
	while(!q.empty()){
	    last = q.front();
	    q.pop();
	}
	return last;
}

/*returns the first element of the queue */
int getFront(queue<int> &q)
{
	//Your code here
	if(q.empty()){
	    return -1;
	}
	return q.front();
}
