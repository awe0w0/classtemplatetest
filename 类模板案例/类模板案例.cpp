/*案例描述实现一个通用的数组类 要求实现
* 可以对内置的数据类型以及自定义数据类型数据进行存储
* 将数组中的数据存储到堆区
* 构造函数中可以传入数组的容量
* 提供对应的拷贝构造函数已经operator=防止浅拷贝问题
* 提供尾插法和尾删法对数组中的数据进行增加和删除
* 可以通过下标的方式访问数组中的元素
* 可以获取数组当前元素个数和数组的容量
*/

#include <iostream>
using namespace std;
#include "MyArray.hpp"

void test01() {
	MyArray<int> arr(10);
	MyArray<int> arr1(arr);
}

int main() {
	test01();
	return 0;
}