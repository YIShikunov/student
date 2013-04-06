class Stack
{
private:
	float * data;
	int curSize;
	int maxSize;
public:
	Stack(int maxSize)
	{
		data = new float[maxSize];
		curSize = 0;
		this->maxSize = maxSize;
	}
	int push(float data)
	{
		if (curSize < maxSize)
			this->data[curSize] = data;
		else
			return -1;
		return 0;
	}
	float pop()
	{
		if(curSize == 0)
		{}
		curSize--;
		return data[curSize];
	}
	float readTop()
	{
		if (curSize == 0)
		{}
		return data[curSize-1];
	}
};
