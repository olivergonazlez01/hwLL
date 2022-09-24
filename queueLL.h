template<class T = int>
class queueLL
{
private:
	class node {
		public:
			T data;
			node * next;
	};
	node *first, *last;

public:

	queueLL()
	{first = nullptr; last = nullptr;}

	~queueLL()
	{delete first; delete last;}

	bool empty() {
		if (first == nullptr && last == nullptr) {
			return true;
		} else { return false; }
	}
	
	//add item to back of queue
	void enqueue(T x) {
		node * temp = new node;
		temp->data = x; temp->next = nullptr;
		if (empty()) {
			first = last = temp;
			return;
		}

		last->next = temp;
		last = temp;
	}

	//remove and return first item from queue
	T dequeue() {
		T data = first->data;
		node * newfirst = first;
		first = first->next;
		if (first == nullptr) {last = nullptr;}
		delete newfirst;
		return data;
	}

	//For the final part of the test program, template this class
	//and add a decimate method.

};