//switch
/*
多重选择配对
switch 语句用于基于变量的值在多个可能的选项之间进行选择。它的语法如下：
switch (expression) {
	case constant1:
		// 语句块 1
		break;
	case constant2:
		// 语句块 2
		break;
	...
	default:
		// 默认语句块
}
其中，expression 是一个整数表达式，其值将与各个 case 标签进行比较。
每个 case 标签后面跟着一个常量值和一个冒号（:）。
当 expression 的值与某个 case 标签的值匹配时，程序将执行该 case 标签下的语句块，
直到遇到 break 语句为止，不然会贯穿。
break 语句用于终止 switch 语句，防止程序继续执行后续的 case 语句。
如果没有匹配的 case 标签，则执行 default 标签下的语句块（如果存在）。
break 语句可用于循环和switch 语句中，但是continue 只能用于循环中。

*/

///* animals.c -- 使用switch语句 */
//#include <stdio.h> 
//#include <ctype.h> 
//int main(void)
//{
//    char ch;
//    printf("Give me a letter of the alphabet, and I will give ");
//    printf("an animal name\nbeginning with that letter.\n");
//    printf("Please type in a letter; type # to end my act.\n");
//    while ((ch = getchar()) != '#')
//    {
//        if ('\n' == ch)
//            continue;
//        if (islower(ch))     /* 只接受小写字母*/
//            switch (ch)
//            {
//            case 'a':
//                printf("argali, a wild sheep of Asia\n");
//                break;
//            case 'b':
//                printf("babirusa, a wild pig of Malay\n");
//                break;
//            case 'c':
//                printf("coati, racoonlike mammal\n");
//                break;
//            case 'd':
//                printf("desman, aquatic, molelike critter\n");
//                break;
//            case 'e':
//                printf("echidna, the spiny anteater\n");
//                break;
//            case 'f':
//                printf("fisher, brownish marten\n");
//                break;
//            default:
//                printf("That's a stumper!\n");
//            }                    /* switch结束
//            else
//                */
//        printf("I recognize only lowercase letters.\n");
//        while (getchar() != '\n')
//            continue;        /* 跳过输入行的剩余部分
//   */
//        printf("Please type another letter or a #.\n");
//    }                         /* while循环结束
//        */
//    printf("Bye!\n");
//    return 0;
//}

//// vowels.c -- 使用多重标签 
//#include <stdio.h> 
//int main(void)
//{
//    char ch;
//    int a_ct, e_ct, i_ct, o_ct, u_ct;
//
//    a_ct = e_ct = i_ct = o_ct = u_ct = 0;
//
//    printf("Enter some text; enter # to quit.\n");
//    while ((ch = getchar()) != '#')
//    {
//        switch (ch)
//        {
//        case 'a':
//        case 'A':  a_ct++;
//            break;
//        case 'e':
//        case 'E':  e_ct++;
//            break;
//        case 'i':
//        case 'I':  i_ct++;
//            break;
//        case 'o':
//        case 'O':  o_ct++;
//            break;
//        case 'u':
//        case 'U':  u_ct++;
//            break;
//        default:   break;
//        }                        // switch结束 
//    }                            // while循环结束 
//    printf("number of vowels:   A    E    I    O    U\n");
//    printf("              %4d %4d %4d %4d %4d\n",
//        a_ct, e_ct, i_ct, o_ct, u_ct);
//    return 0;
//}

//switch 和if else
/*
何时使用switch ？何时使用if else ？
你经常会别无选择。
如果是根据浮点类型的变量或表达式来选择，就无法使用switch 。
如果根据变量在某范围内决定程序流的去向，使用switch 就很麻烦，
这种情况用if 就很方便
*/