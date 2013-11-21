/*
파일명 : 9-6.c
만든날짜 : 20131105(화요일)
만든사람 : 남지은
내용 : 연습문제3
*/




#include<stdio.h>
int plus(int i, int j);


	int main()
	{
		int num1,num2;
		int result = 0;
		printf("input tWo numbers : ");
		scanf("%d&d",&num1,&num2);
		result = plus(num1,num2);
		printf("a+b = %\n", result);

	return 0;
}



	int plus(int i, int j){
		return i+j;

	}