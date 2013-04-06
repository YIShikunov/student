class List
{
private:
	List * prevPointer;
	List * nextPointer;
	int data;
public:
	~List()
	{
		if (this->prevPointer != NULL)
		{}
		else
		{
			List* tmp = this;
			while (tmp->nextPointer != NULL)
			{
				tmp = tmp->nextPointer;
				delete tmp->prevPointer;
			}
		}
		
	}
	List()
	{
		prevPointer = NULL;
		nextPointer = NULL;
		data = 0;
	}
	int getByIndex(int index)
	{
		List * temp = this;
		for (int i = 0; i < index; i++)
			temp = temp->nextPointer;
		return temp->data;

	};
	int insertAtIndex(int index, int data)
	{
		List * added = new List();
		List * temp = this;
		added->data = data;
		for (int i = 1; i < index; i++)
		{
			if (temp == NULL) 
			{
				return 1;
			}
			temp = temp->nextPointer;
		}
		if (temp->nextPointer == NULL)
		{
			temp->nextPointer = added;
			added->prevPointer = temp;
		} else {
			temp->nextPointer->prevPointer = added;
			temp->nextPointer = added;
			added->prevPointer = temp;
		}
		return 0;
	};
	int deleteAtIndex(int index)
	{
		List * temp = this;
		List * deleted;
		for (int i = 1; i < index; i++)
			temp = temp->nextPointer;
		deleted = temp->nextPointer;
		if (deleted->nextPointer != NULL)
		{
			deleted->nextPointer->prevPointer=temp;
			temp->nextPointer = deleted->nextPointer;
		} else {
			temp->nextPointer = NULL;
		}
		delete deleted;
	};
};