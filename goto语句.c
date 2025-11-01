//goto
/*
goto 语句有两部分：goto 和标签名。标签的命名遵循变量命名规则
goto part2;
要让这条语句正常工作，函数还必须包含另一条标为part2 的语句，
该语句以标签名后紧跟一个冒号开始
part2: printf("Refined analysis:\n");

出现问题时从一组嵌套循环中跳出
（一条break 语句只能跳出当前循环）
*/

///* exit.c -- 使用goto语句 */
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	int sum = 0;
//	printf("This program sums a series of integers.\n");
//	printf("Enter 0 to terminate the program.\n");
//	while (1)   // 无限循环
//	{
//		printf("Enter an integer: ");
//		scanf_s("%d", &n);
//		if (n == 0)
//			goto end;   // 跳转至end标签
//		sum += n;
//	}
//end:    // 标签位置
//	printf("The sum is %d.\n", sum);
//	printf("Bye!\n");
//	return 0;
//}