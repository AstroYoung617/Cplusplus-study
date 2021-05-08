说明下列循环的含义并改正其中的错误。

(a) do /*{*/
    int v1, v2;
    cout << "Please enter two numbers to sum:";
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
/*}*/ while (cin);

//加上花括号

(b) int ival;
do {
   //...
} while (ival = get_response()); 
//while中的条件语句，不能定义变量

(c) int ival = get_response();
do {
    ival = get_response();
} while (ival); 
//ival获取get_response()的返回值，只要ival不为0便不断循环
//condition使用的变量应该定义在循环体外。