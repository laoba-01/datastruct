#include<bits/stdc++.h>
using namespace std;
const int MAXSIZE = 100;
typedef int ElemType;
class Arraylist
{
public:
	void init(Arraylist e)
	{
		e.data = (int*)malloc(sizeof(int) * MAXSIZE);
		e.length = 0;
	}
	void add(Arraylist e,int a)
	{
		if (e.length >= 100)
			cout << "内存已满,无法申请";
		this->data[e.length-1] = a;
		e.length++;
	}
	void sub(Arraylist e)
	{
		if (e.length == 0)
			cout << "内存已空,无法释放";
		free((int*)e.data[e.length - 1]);
		e.length--;
	}
	bool check(Arraylist e,int a)
	{
		int i;
		for (i = 0;i < e.length;i++)
		{
			if (a == e.data[i])
				cout << "找到了";
			break;
	     }
		if (i == e.length)
			cout <<"没找到";
	}
	void revise(Arraylist e, int a,int elem)
	{
		int i;
		for (i = 0;i < e.length;i++)
		{
			if (elem == e.data[i])
			{
				a = e.data[i];
			}
	  }
		if (i == e.length)
			cout << "无法修改,未找到";
	}
private:
	int* data;
	int length;
};