
template <class T>
class priorityQueueLL
{
private:
	class node
	{
	public:
		T data;
		node * next;
	};

	node * first, * last;

public:

	priorityQueueLL()
	{first = last = nullptr;}

	~priorityQueueLL()
	{delete first; delete last;}

	//return true if empty, false if not
	bool empty() {
		if (first == nullptr && last == nullptr) {
			return true;
		} else { return false; }
	}

	//add item
	void insert(T x) {
		node * temp = new node;
		temp->data = x; temp->next = nullptr;
		if (empty()) {
			first = last = temp;
			return;
		}

		
	}

	//remove and return smallest item
	T extractMin() {
		T data = last->data;
		delete last;
		return data;
	}

};