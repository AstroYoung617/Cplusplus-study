//3.21��д3.16 

#include <iostream>
#include <vector>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::vector;
using std::string;

int main() {
	vector<int> v1;						//0��Ԫ�� 
	vector<int> v2(10);					//10������Ԫ��0 
	vector<int> v3(10, 42);				//10������Ԫ��42 
	vector<int> v4{10};					//1������Ԫ��10 
	vector<int> v5{10, 42};				//2������Ԫ��10��42 
	vector<string> v6{10};				//10��string�մ� 
	vector<string> v7{10, "hi"};			//10��string����hi�� 
	
	cout << "v1: ";
	for(auto it = v1.begin(); it != v1.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	cout << "v2: ";
	for(auto it = v2.begin(); it != v2.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;	
	cout << "v3: ";	
	for(auto it = v3.begin(); it != v3.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	cout << "v4: ";
	for(auto it = v4.begin(); it != v4.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	cout << "v5: ";
	for(auto it = v5.begin(); it != v5.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	cout << "v6: ";
	for(auto it = v6.begin(); it != v6.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	cout << "v7: ";
	for(auto it = v7.begin(); it != v7.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	
	return 0;
}
