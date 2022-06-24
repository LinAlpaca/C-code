#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//枚举常量
enum sex
{
	MALE,
	FEMALE,
	SECRET
};//枚举常量
int main()
{
	printf("%d\n", MALE);//0
	printf("%d\n", FEMALE); //1
	printf("%d\n", SECRET);//2
	return 0;
}






////#define 定义的标识符常量
//#define Max 4
//int main()
//{
//    int arr[Max] = {0};
//	printf("%d\n", Max);
//	return 0;
//}
//
//
//





//int main()
//{
//    const int num = 4;//n有了常属性，无法被更改
//    printf("%d\n", num);
//    return 0;
//}
