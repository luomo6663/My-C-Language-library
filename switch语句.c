//switch
/*
����ѡ�����
switch ������ڻ��ڱ�����ֵ�ڶ�����ܵ�ѡ��֮�����ѡ�������﷨���£�
switch (expression) {
	case constant1:
		// ���� 1
		break;
	case constant2:
		// ���� 2
		break;
	...
	default:
		// Ĭ������
}
���У�expression ��һ���������ʽ����ֵ������� case ��ǩ���бȽϡ�
ÿ�� case ��ǩ�������һ������ֵ��һ��ð�ţ�:����
�� expression ��ֵ��ĳ�� case ��ǩ��ֵƥ��ʱ������ִ�и� case ��ǩ�µ����飬
ֱ������ break ���Ϊֹ����Ȼ��ᴩ��
break ���������ֹ switch ��䣬��ֹ�������ִ�к����� case ��䡣
���û��ƥ��� case ��ǩ����ִ�� default ��ǩ�µ����飨������ڣ���
break ��������ѭ����switch ����У�����continue ֻ������ѭ���С�

*/

///* animals.c -- ʹ��switch��� */
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
//        if (islower(ch))     /* ֻ����Сд��ĸ*/
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
//            }                    /* switch����
//            else
//                */
//        printf("I recognize only lowercase letters.\n");
//        while (getchar() != '\n')
//            continue;        /* ���������е�ʣ�ಿ��
//   */
//        printf("Please type another letter or a #.\n");
//    }                         /* whileѭ������
//        */
//    printf("Bye!\n");
//    return 0;
//}

//// vowels.c -- ʹ�ö��ر�ǩ 
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
//        }                        // switch���� 
//    }                            // whileѭ������ 
//    printf("number of vowels:   A    E    I    O    U\n");
//    printf("              %4d %4d %4d %4d %4d\n",
//        a_ct, e_ct, i_ct, o_ct, u_ct);
//    return 0;
//}

//switch ��if else
/*
��ʱʹ��switch ����ʱʹ��if else ��
�㾭�������ѡ��
����Ǹ��ݸ������͵ı�������ʽ��ѡ�񣬾��޷�ʹ��switch ��
������ݱ�����ĳ��Χ�ھ�����������ȥ��ʹ��switch �ͺ��鷳��
���������if �ͺܷ���
*/