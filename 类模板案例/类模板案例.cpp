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

int* i = new int(0);
int* ch = new int(0);

#include "MyArray.hpp"


int main() {
	showMenu();
	int choice = 0;
	while (true) {
		cout << "请输入选项" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:
			delete intArr;
			delete floatArr;
			delete doubleArr;
			delete charArr;
			delete stringArr;
			return 0;
			break;
		case 1:
			choiceType();
			break;
		case 2:
			addT();
			break;
		case 3:
			delT();
			break;
		case 4:
			printT();
			break;
		case 5:
			printiT();
			break;
		case 6:
			printArr();
			break;
		case 7:
			printCapacity();
			break;
		case 8:
			clean();
		default:
			break;
		}

	}
	
	return 0;
}