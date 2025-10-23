//if()
/*
 if ( expression )
{
statement
}
如果对 expression 求值为真（非0 ），则执行 statement ；
否则，跳过 statement 。

if 语句的结构和while 语句很相似，
它们的主要区别是：
如果满足条件可执行的话，if 语句只能测试和执行一次，
而while 语句可以测试和执行多次。

expression 是关系表达式，
可以使用任意表达式，表达式的值为0 则为假。
注意，expression 不能是赋值表达式，
是x == 3 ，不是x = 3

技术老练的程序员有时会将条件表达式写成常量形式，
3 == x ，这样如果不小心写成3 = x ，
编译器就会报错。
*/

//// colddays.c -- 找出0℃以下的天数占总天数的百分比 
//#include <stdio.h> 
//int main(void)
//{
//    const int FREEZING = 0;
//    float temperature;
//    int cold_days = 0;
//    int all_days = 0;
//    printf("Enter the list of daily low temperatures.\n");
//    printf("Use Celsius, and enter q to quit.\n");
//    while (scanf_s("%f", &temperature) == 1)
//    {
//        all_days++;
//        if (temperature < FREEZING)
//            cold_days++;
//    }
//    if (all_days != 0)
//        printf("%d days total: %.1f%% were below freezing.\n",
//            all_days, 100.0 * (float)cold_days / all_days);
//    if (all_days == 0)
//        printf("No data entered!\n");
//    return 0;
//}

//if else
/*
C还提供了if else 形式，可以在两条语句之间作选择。

if ( expression )
statement1
else
statement2

如果 expression 为真（非0 ），则执行 statement1 ；
如果 expression 为假或0 ，则执行else 后面的 statement2 。
statement1 和 statement2 可以是一条简单语句或复合语句。
C并不要求一定要缩进，但这是标准风格。

*/

//else if
/*
多重选择
if ( expression1 )
	statement1
else if ( expression2 )
	statement2
else if ( expression3 )
	statement3
	...

*/
//
//// electric.c -- 计算电费 
//#include <stdio.h> 
//#define RATE1   0.13230               // 首次使用 360 kwh 的费率 
//#define RATE2   0.15040               // 接着再使用 108 kwh 的费率 
//#define RATE3   0.30025               // 接着再使用 252 kwh 的费率 
//#define RATE4   0.34025               // 使用超过 720kwh 的费率 
//#define BREAK1  360.0                 // 费率的第1个分界点 
//#define BREAK2  468.0                 // 费率的第2个分界点 
//#define BREAK3  720.0                 // 费率的第3个分界点 
//#define BASE1   (RATE1 * BREAK1)      // 使用360kwh的费用 
//#define BASE2  (BASE1 + (RATE2 * (BREAK2 - BREAK1))) // 使用468kwh的费用
//#define BASE3   (BASE1 + BASE2 + (RATE3 *(BREAK3 - BREAK2))) // 使用720kwh的费用 
//int main(void)
//{
//    double kwh;                       // 使用的千瓦时 
//    double bill;                      // 电费 
//    printf("Please enter the kwh used.\n");
//    scanf_s("%lf", &kwh);               // %lf对应double类型 
//    if (kwh <= BREAK1)
//        bill = RATE1 * kwh;
//    else if (kwh <= BREAK2)           // 360～468 kwh     
//        bill = BASE1 + (RATE2 * (kwh - BREAK1));
//    else if (kwh <= BREAK3)           // 468～720 kwh 
//        bill = BASE2 + (RATE3 * (kwh - BREAK2));
//    else                               // 超过 720 kwh                
//        bill = BASE3 + (RATE4 * (kwh - BREAK3));
//    printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//    return 0;
//}


//else与if配对问题
/*
else 与哪个 if 配对？
C语言规定，else 总是与它最近的、尚未配对的 if 语句配对，
除非最近的if 被花括号括起来
*/

//嵌套if语句、

//// divisors.c -- 使用嵌套if语句显示一个数的约数 
//#include <stdio.h> 
//#include <stdbool.h> 
//int main(void)
//{
//    unsigned long num;          // 待测试的数 
//    unsigned long div;          // 可能的约数 
//    bool isPrime;               // 素数标记 
//    printf("Please enter an integer for analysis; ");
//    printf("Enter q to quit.\n");
//    while (scanf_s("%lu", &num) == 1)
//    {
//        for (div = 2, isPrime = true; (div * div) <= num; div++)
//        {
//            if (num % div == 0)
//            {
//                if ((div * div) != num)
//                    printf("%lu is divisible by %lu and %lu.\n",
//                        num, div, num / div);
//                else
//                    printf("%lu is divisible by %lu.\n",
//                        num, div);
//                isPrime = false;    // 该数不是素数 
//            }
//        }
//        if (isPrime)
//            printf("%lu is prime.\n", num);
//        printf("Please enter another integer for analysis; ");
//        printf("Enter q to quit.\n");
//    }
//    printf("Bye.\n");
//    return 0;
//}