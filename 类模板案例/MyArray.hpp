#pragma once
#include <iostream>
using namespace std;
#include <string>

template<typename T>
class MyArray {
public:
	MyArray(int capacity) {
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	MyArray(const MyArray& m) {
		this->m_Capacity = m.m_Capacity;
		this->m_Size = m.m_Size;
		this->pAddress = new T[m.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = m.pAddress[i];
		}
	}

	void addT(const T& t) {
		if (this->m_Capacity == this->m_Size) {
			return;
		}
		this->pAddress[this->m_Size] = t;
		this->m_Size++;
	}

	void delT() {
		if (this->m_Size == 0) {
			return;
		}
		this->m_Size--;
	}

	T& operator[](const int& size) {
		return this->pAddress[size];
	}

	MyArray& operator=(const MyArray& m) {
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}
		this->m_Capacity = m.m_Capacity;
		this->m_Size = m.m_Size;
		this->pAddress = new T[m.m_Capacity];
		for (int i = 0; i < this->m_Size; i++) {
			this->pAddress[i] = m.pAddress[i];
		}
		return *this;
	}

	void printArray() {
		for (int j = 0; j < this->m_Size; j++) {
			cout << (*this)[j] << endl;
		}
	}

	void printArr() {
		cout << "数组大小为：" << this->m_Size << endl;
	}

	void printCapacity() {
		cout << this->m_Capacity << endl;
	}

	~MyArray() {
		if (this->pAddress != NULL) {
			delete[] pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;
	int m_Capacity;
	int m_Size;
};

MyArray<int>* intArr = nullptr;
MyArray<float>* floatArr = nullptr;
MyArray<double>* doubleArr = nullptr;
MyArray<char>* charArr = nullptr;
MyArray<string>* stringArr = nullptr;

void showMenu() {
	cout << "--------------0.退出---------------" << endl;
	cout << "-------1.选择数组类型和容量--------" << endl;
	cout << "----------2.添加数组元素-----------" << endl;
	cout << "----------3.删除数组元素-----------" << endl;
	cout << "----------4.显示数组元素-----------" << endl;
	cout << "------5.通过下标访问数组元素-------" << endl;
	cout << "--------6.获取数组元素数量---------" << endl;
	cout << "--------7.获取数组元素容量---------" << endl;
	cout << "--------------8.清屏---------------" << endl;
}

void choiceType() {

	if (*i != 0) {
		cout << "请勿再次添加" << endl;
		return;
	}
	int choice = 0;
	cout << "1.int" << endl;
	cout << "2.float" << endl;
	cout << "3.double" << endl;
	cout << "4.char" << endl;
	cout << "5.string" << endl;
	cin >> choice;
	int co = 0;
	cout << "请输入数组容量" << endl;
	cin >> co;

	switch (choice) {
	case 1:
		intArr = new MyArray<int>(co);
		*ch = 1;
		break;
	case 2:
		floatArr = new MyArray<float>(co);
		*ch = 2;
		break;
	case 3:
		doubleArr = new MyArray<double>(co);
		*ch = 3;
		break;
	case 4:
		charArr = new MyArray<char>(co);
		*ch = 4;
		break;
	case 5:
		stringArr = new MyArray<string>(co);
		*ch = 5;
		break;
	default:
		break;
	}
	*i++;
	//if (intArr != nullptr || floatArr != nullptr || doubleArr != nullptr || charArr != nullptr || stringArr != nullptr) {
	//	cout << "请勿再次添加" << endl;
	//	return;
	//}
}

void addT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "请先创建数组" << endl;
		return;
	}
	int in = 0;
	float f = 0;
	double d = 0;
	char c = ' ';
	string st = "";
	switch (*ch) {
	case 1:
		cout << "请输入数值" << endl;
		cin >> in;
		intArr->addT(in);
		break;
	case 2:
		cout << "请输入数值" << endl;
		cin >> f;
		floatArr->addT(f);
		break;
	case 3:
		cout << "请输入数值" << endl;
		cin >> d;
		doubleArr->addT(d);
		break;
	case 4:
		cout << "请输入数值" << endl;
		cin >> c;
		charArr->addT(c);
		break;
	case 5:
		cout << "请输入数值" << endl;
		cin >> st;
		stringArr->addT(st);
		break;
	default:
		break;
	}
}

void delT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "请先创建数组" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->delT();
		break;
	case 2:
		floatArr->delT();
		break;
	case 3:
		doubleArr->delT();
		break;
	case 4:
		charArr->delT();
		break;
	case 5:
		stringArr->delT();
		break;
	default:
		break;
	}
}

void printT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "请先创建数组" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->printArray();
		break;
	case 2:
		floatArr->printArray();
		break;
	case 3:
		doubleArr->printArray();
		break;
	case 4:
		charArr->printArray();
		break;
	case 5:
		stringArr->printArray();
		break;
	default:
		break;
	}
}

void printiT() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "请先创建数组" << endl;
		return;
	}
	int ii = 0;
	cout << "请输入想要查询的数组下标" << endl;
	cin >> ii;
	switch (*ch) {
	case 1:
		cout << "第" << ii << "个数组下标的数值为" << (*intArr)[ii] << endl;
		break;
	case 2:
		cout << "第" << ii << "个数组下标的数值为" << (*floatArr)[ii] << endl;
		break;
	case 3:
		cout << "第" << ii << "个数组下标的数值为" << (*doubleArr)[ii] << endl;
		break;
	case 4:
		cout << "第" << ii << "个数组下标的数值为" << (*charArr)[ii] << endl;
		break;
	case 5:
		cout << "第" << ii << "个数组下标的数值为" << (*stringArr)[ii] << endl;
		break;
	default:
		break;
	}
}

void printArr() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "请先创建数组" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->printArr();
		break;
	case 2:
		floatArr->printArr();
		break;
	case 3:
		doubleArr->printArr();
		break;
	case 4:
		charArr->printArr();
		break;
	case 5:
		stringArr->printArr();
		break;
	default:
		break;
	}
}

void printCapacity() {
	if (intArr == nullptr && floatArr == nullptr && doubleArr == nullptr && charArr == nullptr && stringArr == nullptr) {
		cout << "请先创建数组" << endl;
		return;
	}
	switch (*ch) {
	case 1:
		intArr->printCapacity();
		break;
	case 2:
		floatArr->printCapacity();
		break;
	case 3:
		doubleArr->printCapacity();
		break;
	case 4:
		charArr->printCapacity();
		break;
	case 5:
		stringArr->printCapacity();
		break;
	default:
		break;
	}
}

void clean() {
	system("cls");
	showMenu();
}