//3.30
指出下面代码的错误：

constexpr size_t array_size = 10;
int ia[array_size];						
for (size_t ix = 1; ix <= array_size; ++ix) {			//ix的范围是0-9,不能写做<=. 
	ia[ix] = ix;
} 

