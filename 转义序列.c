/*
\a	响铃
\b	退格
\f	换页
\n	换行
\r	回车
\t	水平制表符
\v	垂直制表符
\\	反斜杠（\）
\'	单引号
\"	双引号
\?	问号
\0oo	八进制值（oo 必须是有效的八进制数，即每个o 可表示0 ～7 中的一个数）
\xhh	十六进制值（hh 必须是有效的十六进制数，即每个h 可表示0 ～f 中的一个数

换页符（\f ）把活跃位置移至下一页的开始处；
换行符（\n ）把活跃位置移至下一行的开始处；
回车符（\r ）把活跃位置移动到当前行的开始处；
水平制表符（\t ）将活跃位置移至下一个水平制表点；
垂直制表符（\v ）把活跃位置移至下一个垂直制表点
*/

//#include <stdio.h>
//int main() {
//	printf("响铃符示例: Hello\aWorld\n");
//	printf("退格符示例: Hello\bWorld\n");
//	printf("换页符示例: Hello\fWorld\n");
//	printf("换行符示例: Hello\nWorld\n");
//	printf("回车符示例: Hello\rWorld\n");
//	printf("水平制表符示例: Hello\tWorld\n");
//	printf("垂直制表符示例: Hello\vWorld\n");
//	printf("反斜杠示例: Hello\\World\n");
//	printf("单引号示例: Hello\'World\n");
//	printf("双引号示例: Hello\"World\n");
//	printf("问号示例: Hello\?World\n");
//	printf("八进制值示例: \101\102\103\n"); // 输出 ABC
//	printf("十六进制值示例: \x41\x42\x43\n"); // 输出 ABC
//	return 0;
//}

//#include <stdio.h> 
//int main(void)
//{
//    float salary;
//
//    printf("\aEnter your desired monthly salary:");    /* 1 */
//    printf(" $_______\b\b\b\b\b\b\b");                 /* 2 */
//    scanf_s("%f", &salary);
//    printf("\n\t$%.2f a month is $%.2f a year.", salary,
//        salary * 12.0);                           /* 3 */
//    printf("\rGee!\n");                               /* 4 */
//
//    return 0;
//}