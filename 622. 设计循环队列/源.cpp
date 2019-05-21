class MyCircularQueue {
public:
	/** Initialize your data structure here. Set the size of the queue to be k. */
	MyCircularQueue(int k)
		:_p(new int[k])
		, _front(0)
		, _back(-1)
		, _size(0)
		, _capcity(k)
	{

	}

	/** Insert an element into the circular queue. Return true if the operation is successful. */
	bool enQueue(int value) {
		if (_size == _capcity)
			return false;

		++_back;
		if (_back == _capcity) {
			_back = 0;
		}
		_p[_back] = value;
		++_size;
		return true;
	}

	/** Delete an element from the circular queue. Return true if the operation is successful. */
	bool deQueue() {
		if (_size == 0)
			return false;
		++_front;
		if (_front == _capcity) {
			_front = 0;
		}
		--_size;
		return true;
	}

	/** Get the front item from the queue. */
	int Front() {
		if (_size == 0)
			return -1;
		return _p[_front];
	}

	/** Get the last item from the queue. */
	int Rear() {
		if (_size == 0)
			return -1;
		return _p[_back];
	}

	/** Checks whether the circular queue is empty or not. */
	bool isEmpty() {
		if (_size == 0)
			return true;
		return false;
	}

	/** Checks whether the circular queue is full or not. */
	bool isFull() {
		if (_size == _capcity)
			return true;
		return false;
	}
private:
	int* _p;
	int _front;
	int _back;
	int _size;
	int _capcity;
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */