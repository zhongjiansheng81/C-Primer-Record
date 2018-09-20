#include "stdafx.h"
#include "Primer_STD_Algor.h"
#include <numeric>//accumulate()的头文件
using namespace std;
//泛型算法本身不会执行容器的操作，他们只会运行于迭代器之上，执行迭代器的操作。带来一个令人惊讶但非常必要的编程设定：
//算法不会改变底层容器的大小，算法可能改变容器中保存的元素的值，也可能在容器内移动元素，但永远不会直接添加或者删除元素。
//理解算法的基本方法就是是否读取元素，改变元素，或是重排元素。
//1.只读算法，如find(),accumulate()等
//2.
void algoriFind()
{
	vector<int> vec = { 0,1,2,3,4,5,6,7,8,9 };
	int val = 10;
	auto result = find(vec.cbegin(), vec.cend(), val);
	cout << "the value " << val << (result == vec.cend() ? " is not present" : " is present") << endl;
	int ia[] = { 23,25,456,78,0,335,724,98 };
	int val1 = 724;
	int* result1 = find(begin(ia), end(ia), val1);
	auto result2 = find(ia + 1, ia + 7, val1);
	cout << "the result1 is " << result1 << endl;
	cout << "the result2 is " << result2 << endl;
	int sum = accumulate(vec.cbegin(), vec.cend(), 0);
	cout << "the vec vector's sum is " << sum << endl;

}