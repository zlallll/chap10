/*
���ϸ� : 9-6.c
���糯¥ : 20131105(ȭ����)
������ : ������
���� : ��������3
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