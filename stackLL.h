class stackLL
{
private:
	class node
	{
	public:
		int data;
		node * next;
	};

	node * top;

public:

	stackLL()
	{top = nullptr;}

	//Take care of memory leaks...
	~stackLL()
	{delete top;}

	//return true if empty, false if not
	bool empty(){
		if (top == nullptr) {
			return true;
		} return false;
	}

	//add item to top of stack
	void push(int x) {
		node * temp = new node;
		temp->data = x;
		temp->next = top;
		top = temp;
	}

	//remove and return top item from stack
	int pop() {
		if (top != nullptr) {
			int data;
			data = top->data;
			top = top->next;
			return data;
		} return -1;
	}

	//add item x to stack, but insert it
	//right after the current ith item from the top
	//(and before the i+1 item).
	void insertAt(int x, int i) {
		if (i < 0) { return; }
		if (i == 0) { push(x); return; }

		node * newitem = new node;
		newitem->data = x;
		newitem->next = nullptr;
		node * temp = top;

		for (int j = 0; j < i; j++) {
			temp = temp->next;
		}

		newitem->next = temp->next;
		temp->next = newitem;
		//how do i get back the previous i items... :|
	}

};