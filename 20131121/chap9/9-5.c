/*
���ϸ� : 9-4.c
���糯¥ : 20131105(ȭ����)
������ : ������
���� : ����
*/


#include<stdio.h>
int main(void){

int num;
int result=0;
printf("������ �Է��ϼ���:");
scanf("%d",&num);
result = abs(num);
printf("���밪��: %d �Դϴ�.\n",result);

return 0;
}

int abs(int a){
	if(a>=0){
	return a;
	}else{
		return -a;
	}




}