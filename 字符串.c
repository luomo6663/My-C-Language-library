//�ַ����ַ���
/*
�ַ�������"x" ���ַ�����'x' ��ͬ��
����֮һ����'x' �ǻ������ͣ�char ����
��"x" ���������ͣ�char ���飩��
����֮����"x" ʵ�����������ַ���ɣ�'x' �Ϳ��ַ�\0
*/
/*
* �ַ�����һϵ���ַ���ɣ��Կ��ַ�\0 ��β��
* \0 ��һ�������ת�����У���ʾ�ַ����Ľ�����
* \0 ��ռ����ʾ�ռ䣬�����ڴ���ռ��һ���ֽڡ�
* \0 ��ASCII��ֵΪ0��
*/

//strlen()
/*
* strlen() �������ڼ����ַ����ĳ��ȣ���������β��\0 ����
* strlen() ����������<string.h> ͷ�ļ��С�
* strlen() ������ԭ�����£�
* size_t strlen(const char *str);
* ����ֵΪ�ַ����ĳ��ȣ�����Ϊsize_t���޷����������ͣ���
*/

//#include <stdio.h> 
//#include <string.h>      /* �ṩstrlen()������ԭ�� */ 
//#define PRAISE "You are an extraordinary being." 
//int main()
//{
//    char name[40];
//
//    printf("What's your name? ");
//    scanf_s("%s", name,sizeof(name));
//    printf("Hello, %s. %s\n", name, PRAISE);
//    printf("Your name of %zd letters occupies %zd memory cells.\n",
//        strlen(name), sizeof name);
//    printf("The phrase of praise has %zd letters ",
//        strlen(PRAISE));
//    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
//
//    return 0;
//}
