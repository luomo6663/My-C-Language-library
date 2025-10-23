//if()
/*
 if ( expression )
{
statement
}
����� expression ��ֵΪ�棨��0 ������ִ�� statement ��
�������� statement ��

if ���Ľṹ��while �������ƣ�
���ǵ���Ҫ�����ǣ�
�������������ִ�еĻ���if ���ֻ�ܲ��Ժ�ִ��һ�Σ�
��while �����Բ��Ժ�ִ�ж�Ρ�

expression �ǹ�ϵ���ʽ��
����ʹ��������ʽ�����ʽ��ֵΪ0 ��Ϊ�١�
ע�⣬expression �����Ǹ�ֵ���ʽ��
��x == 3 ������x = 3

���������ĳ���Ա��ʱ�Ὣ�������ʽд�ɳ�����ʽ��
3 == x �����������С��д��3 = x ��
�������ͻᱨ��
*/

//// colddays.c -- �ҳ�0�����µ�����ռ�������İٷֱ� 
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
C���ṩ��if else ��ʽ���������������֮����ѡ��

if ( expression )
statement1
else
statement2

��� expression Ϊ�棨��0 ������ִ�� statement1 ��
��� expression Ϊ�ٻ�0 ����ִ��else ����� statement2 ��
statement1 �� statement2 ������һ�������򸴺���䡣
C����Ҫ��һ��Ҫ�����������Ǳ�׼���

*/

//else if
/*
����ѡ��
if ( expression1 )
	statement1
else if ( expression2 )
	statement2
else if ( expression3 )
	statement3
	...

*/
//
//// electric.c -- ������ 
//#include <stdio.h> 
//#define RATE1   0.13230               // �״�ʹ�� 360 kwh �ķ��� 
//#define RATE2   0.15040               // ������ʹ�� 108 kwh �ķ��� 
//#define RATE3   0.30025               // ������ʹ�� 252 kwh �ķ��� 
//#define RATE4   0.34025               // ʹ�ó��� 720kwh �ķ��� 
//#define BREAK1  360.0                 // ���ʵĵ�1���ֽ�� 
//#define BREAK2  468.0                 // ���ʵĵ�2���ֽ�� 
//#define BREAK3  720.0                 // ���ʵĵ�3���ֽ�� 
//#define BASE1   (RATE1 * BREAK1)      // ʹ��360kwh�ķ��� 
//#define BASE2  (BASE1 + (RATE2 * (BREAK2 - BREAK1))) // ʹ��468kwh�ķ���
//#define BASE3   (BASE1 + BASE2 + (RATE3 *(BREAK3 - BREAK2))) // ʹ��720kwh�ķ��� 
//int main(void)
//{
//    double kwh;                       // ʹ�õ�ǧ��ʱ 
//    double bill;                      // ��� 
//    printf("Please enter the kwh used.\n");
//    scanf_s("%lf", &kwh);               // %lf��Ӧdouble���� 
//    if (kwh <= BREAK1)
//        bill = RATE1 * kwh;
//    else if (kwh <= BREAK2)           // 360��468 kwh     
//        bill = BASE1 + (RATE2 * (kwh - BREAK1));
//    else if (kwh <= BREAK3)           // 468��720 kwh 
//        bill = BASE2 + (RATE3 * (kwh - BREAK2));
//    else                               // ���� 720 kwh                
//        bill = BASE3 + (RATE4 * (kwh - BREAK3));
//    printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
//    return 0;
//}


//else��if�������
/*
else ���ĸ� if ��ԣ�
C���Թ涨��else ������������ġ���δ��Ե� if �����ԣ�
���������if ��������������
*/

//Ƕ��if��䡢

//// divisors.c -- ʹ��Ƕ��if�����ʾһ������Լ�� 
//#include <stdio.h> 
//#include <stdbool.h> 
//int main(void)
//{
//    unsigned long num;          // �����Ե��� 
//    unsigned long div;          // ���ܵ�Լ�� 
//    bool isPrime;               // ������� 
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
//                isPrime = false;    // ������������ 
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