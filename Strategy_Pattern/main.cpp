//策略模式：把一系列算法封装起来，使之可以相互替换。这样就可以使算法独立于客户端变化
#include <iostream>
using namespace std;
//排序算法类
class Sort
{
public:
	virtual void userSort() = 0;
	virtual ~Sort() {};
};
//冒泡排序
class BubbleSort :public Sort
{
public:
	virtual void userSort()
	{
		cout << "BubbleSort::userSort()" << endl;
	}
};
class InsertSort :public Sort
{
public:
	virtual void userSort()
	{
		cout << "SelectSort::userSort()" << endl;
	}
};
//选择排序
class SelectSort :public Sort
{
public:
	virtual void userSort()
	{
		cout << "SelectSort::userSort()" << endl;
	}
};
//快速排序
class QuickSort :public Sort
{
public:
	virtual void userSort()
	{
		cout << "QuickSort::userSort()" << endl;
	}
};
class Project
{
private:
	Sort* m_sort;
public:
	Project(Sort* sort) :m_sort(sort) {};
	void replaceSort()
	{
		m_sort->userSort();
	}
	~Project()
	{
		if (NULL != m_sort)
		{
			delete m_sort;
		}
	}
};
int main()
{
	Sort* sort = new BubbleSort();
	Project pro(sort);
	pro.replaceSort();
	return 0;
}
