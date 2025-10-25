//while（）
/*
while 循环的一般形式为：
    while (expression)
        statement;
expression 是一个关系表达式，
需要variable == value 这样的形式
not(variable = value)!!!!!!!!!
经验丰富这样写
//value == variable
因为如果不小心写成了 variable = value 就会导致语法错误

对循环条件的把控一定要准确
如果条件永远为真，就会导致死循环
所以要确保在循环时，变量要改变

while (scanf("%d", &num) == 1)
    ; // 跳过整数输入 
*/

// cmpflt.c -- 浮点数比较 
//#include <math.h> 
//#include <stdio.h> 
//int main(void)
//{
//    const double ANSWER = 3.14159;
//    double response;
//    printf("What is the value of pi?\n");
//    scanf_s("%lf", &response);
//    while (fabs(response - ANSWER) > 0.0001)
//    {
//        printf("Try again!\n");
//        scanf_s("%lf", &response);
//    }
//    printf("Close enough!\n");
//    return 0;
//}