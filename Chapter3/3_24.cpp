//3.24
#include <iostream>
#include <vector>
using std::cin; using std::cout; using std::endl;
using std::vector;

int main(){
	vector<int> ivec;
	
	int n = 0;
	while(cin >> n){
		
		ivec.push_back(n);
	}
//	for(decltype(ivec.size()) i = 0; i < ivec.size()-1; i++){
//		cout << ivec[i] + ivec[i+1] << " ";
//	}
//	for(decltype(ivec.size()) i = 0; i <= (ivec.size()-1)/2; i++){
//		cout << ivec[i] + ivec[ivec.size()-1-i] << " ";
//	}
	auto beg = ivec.begin();
	auto end = ivec.end() - 1;				//end是尾后迭代器，指向的是最后一个元素的后一个位置 
	auto mid = beg + (end - beg)/2;
	
	while(beg <= mid && end >= mid){
		cout << *beg + *end << " ";
		beg++;
		end--;
	}		
	return 0;
}
