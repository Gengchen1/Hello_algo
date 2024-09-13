class MyList
{
private:
    int *arr; // 数组（存储列表元素）
    int arrCapacity = 10; // 列表容量
    int arrSize = 0; // 列表长度（当前元素数量）
    int extendRatio = 2;
public:
    MyList()
    {
        arr = new int[arrCapacity];
    }

    ~MyList()
    {
        delete[] arr;
    }

    /* 获取列表长度 （当前元素的数量） */
    int size()
    {
        return arrSize;
    }
    
    /* 获取列表容量 */
    int capacity()
    {
        return arrCapacity;
    }

    /* 更新元素 */
    void set(int index, int num)
    {
        if (index < 0 || index >= size())
            throw out_of_range("索引越界");
        arr[index] = num; 
    }

    /* 尾部添加元素 */
    void add(int num)
    {
        // 当元素数量超出容量时，触发扩容机制
        if (size() == capacity())
            extendCapacity();
        arr[size()] = num;
        arrSize++;
    }

    /* 在中间插入元素 */
    void insert(int index, int num)
    {
        if (index < 0 || index >= size())
            throw out_of_range("索引越界");
        // 元素数量超出容量时，触发扩容机制
        if (size() == capacity())
            extendCapacicty();
        // 将索引 index 以及之后的元素都向后移动一位
        for(int i = size() - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i]; 
            // 这里用 arr[i] = arr[i - 1]; 就不合适，会覆盖最后一个元素的值，这是动态数组，后移可以保留最后一个元素，
            // 而且 i = index时，也不合适。index还有值。
        }
    }
    /* 删除元素 */
    
};