class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		p.push(x);
	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		if (q.empty()) {
			while (!p.empty())
			{
				q.push(p.top());
				p.pop();
			}
		}
		int ret = q.top();
		q.pop();
		return ret;
	}

	/** Get the front element. */
	int peek() {
		if (q.empty()) {
			while (!p.empty())
			{
				q.push(p.top());
				p.pop();
			}
		}

		return q.top();
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return q.empty() && p.empty();
	}
private:
	stack<int> p;
	stack<int> q;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */