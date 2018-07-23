class Queue{
	public:
		Queue();
		Queue(int);
		void enqueue(); //insert que
		int dequeue(); //pop or out of que
		void isArrived();
		void isServed();
		bool empty();
		int nowServing();
	private:
		int size, count;
		int front, rear;
		int *q;
};
