class BinTree
{
private:
	int * data;
	int MaxSize;
	int size;
	void resize(int n)
	{
		int * tmp = new int[MaxSize+n];
		for (int i = 0; i<size; i++)
		{
			tmp[i] = data[i];
		}
		data = tmp;
		MaxSize += n;
	}
public:
	BinTree()
	{
		data = new int[0];
		MaxSize = 0;
		size = 0;
	}
	BinTree(int size)
	{
		data = new int[size];
		this->MaxSize = size;
		size = 0;
	}
	void addLast(int data)
	{
		size++;
		if (size == MaxSize)
		{
			resize(2*size);
		}
		this->data[size] = data;
	}
	void removeLast()
	{
		size--;
	}
	int get_parrent(int index)
	{
		if (index != 0)
			return (int)(index-1)/2;
		else
			return 0;
	}
	int get_childR(int index)
	{
		if (2*index + 2 < size)
			return -1;
		else return 2*index + 2;
	}
	int get_childL(int index)
	{
		if (2*index + 1 < size)
			return -1;
		else return 2*index + 1;
	}

};