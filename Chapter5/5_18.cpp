˵������ѭ���ĺ��岢�������еĴ���

(a) do /*{*/
    int v1, v2;
    cout << "Please enter two numbers to sum:";
    if (cin >> v1 >> v2)
        cout << "Sum is: " << v1 + v2 << endl;
/*}*/ while (cin);

//���ϻ�����

(b) int ival;
do {
   //...
} while (ival = get_response()); 
//while�е�������䣬���ܶ������

(c) int ival = get_response();
do {
    ival = get_response();
} while (ival); 
//ival��ȡget_response()�ķ���ֵ��ֻҪival��Ϊ0�㲻��ѭ��
//conditionʹ�õı���Ӧ�ö�����ѭ�����⡣