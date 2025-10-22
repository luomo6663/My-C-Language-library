//字符与字符串
/*
字符串常量"x" 和字符常量'x' 不同。
区别之一在于'x' 是基本类型（char ），
而"x" 是派生类型（char 数组）；
区别之二是"x" 实际上由两个字符组成：'x' 和空字符\0
*/
/*
* 字符串由一系列字符组成，以空字符\0 结尾。
* \0 是一个特殊的转义序列，表示字符串的结束。
* \0 不占用显示空间，但在内存中占用一个字节。
* \0 的ASCII码值为0。
*/

//strlen()
/*
* strlen() 函数用于计算字符串的长度（不包括结尾的\0 ）。
* strlen() 函数定义在<string.h> 头文件中。
* strlen() 函数的原型如下：
* size_t strlen(const char *str);
* 返回值为字符串的长度，类型为size_t（无符号整数类型）。
*/

//#include <stdio.h> 
//#include <string.h>      /* 提供strlen()函数的原型 */ 
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
