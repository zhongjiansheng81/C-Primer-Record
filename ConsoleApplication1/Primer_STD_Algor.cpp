#include "stdafx.h"
#include "Primer_STD_Algor.h"
#include <numeric>//accumulate()��ͷ�ļ�
using namespace std;
//�����㷨������ִ�������Ĳ���������ֻ�������ڵ�����֮�ϣ�ִ�е������Ĳ���������һ�����˾��ȵ��ǳ���Ҫ�ı���趨��
//�㷨����ı�ײ������Ĵ�С���㷨���ܸı������б����Ԫ�ص�ֵ��Ҳ�������������ƶ�Ԫ�أ�����Զ����ֱ����ӻ���ɾ��Ԫ�ء�
//����㷨�Ļ������������Ƿ��ȡԪ�أ��ı�Ԫ�أ���������Ԫ�ء�
//1.ֻ���㷨����find(),accumulate()��
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