//goto
/*
goto ����������֣�goto �ͱ�ǩ������ǩ��������ѭ������������
goto part2;
Ҫ����������������������������������һ����Ϊpart2 ����䣬
������Ա�ǩ�������һ��ð�ſ�ʼ
part2: printf("Refined analysis:\n");

��������ʱ��һ��Ƕ��ѭ��������
��һ��break ���ֻ��������ǰѭ����
*/

///* exit.c -- ʹ��goto��� */
//#include <stdio.h>
//int main(void)
//{
//	int n;
//	int sum = 0;
//	printf("This program sums a series of integers.\n");
//	printf("Enter 0 to terminate the program.\n");
//	while (1)   // ����ѭ��
//	{
//		printf("Enter an integer: ");
//		scanf_s("%d", &n);
//		if (n == 0)
//			goto end;   // ��ת��end��ǩ
//		sum += n;
//	}
//end:    // ��ǩλ��
//	printf("The sum is %d.\n", sum);
//	printf("Bye!\n");
//	return 0;
//}