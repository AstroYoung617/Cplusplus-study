#include <iostream>

//int main() {
//	const int& p;
//	std::cout << p << std::endl;
//	return 0;
//}

//常量引用可以绑定非常量和常量的对象、字面值。(引用必须初始化)  //其实就相当于定义了一个常量。
//非常量引用不能绑定常量的对象、字面值。是因为该引用可能会对常量进行修改吗

//常量指针需要初始化，指向常量的指针不需要初始化，（常量指针：const *int p; 指向常量的指针：const int *p）


//顶层const可以表示任意的对象是常量
//底层const则与指针和引用等复合类型的基本类型部分有关
//指针类型既可以是顶层也可以是底层（也就是常量指针和指向常量的指针的区别）
//eg：int *const pi = &i;	/p1的值不能改变，它是一个顶层const
//	  const int *p2 = &ci;  /p2的值可以改变，它是一个底层const
int main() {
	const int v2 = 0;			//顶层const
	int v1 = v2;

	int* p1 = &v1, & r1 = v1;
	const int* p2 = &v2, * const p3 = &i, & r2 = v2; //p2底层const、p3既是底层又是顶层、r2底层

	return 0;
}