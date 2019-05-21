class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		p.push(x);
		if (!min.empty()) {
			if (x <= min.top()) {
				min.push(x);
			}
		}
		else {
			min.push(x);
		}
	}

	void pop() {
		int ret = p.top();
		p.pop();
		if (ret == min.top())
			min.pop();
	}

	int top() {
		return p.top();
	}

	int getMin() {
		return min.top();
	}
private:
	stack<int> min;
	stack<int> p;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */