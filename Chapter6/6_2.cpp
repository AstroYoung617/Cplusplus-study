//请指出下列函数哪个有错误，为什么？应该如何修改这些错误呢？

(a) int f() {
    string s;
    // ...
    return s;
}
//没有错误

(b)f2(int i) { /* ... */ }
//没有定义函数的类型

(c) int calc(int v1, int v1) { /* ... */ }
//定义了两个相同的形参

(d) double square(double x)  return x * x;
//应该加上花括号