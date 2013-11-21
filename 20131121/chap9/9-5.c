/*
파일명 : 9-4.c
만든날짜 : 20131105(화요일)
만든사람 : 남지은
내용 : 절댓값
*/


#include<stdio.h>
int main(void){

int num;
int result=0;
printf("정수를 입력하세요:");
scanf("%d",&num);
result = abs(num);
printf("절대값은: %d 입니다.\n",result);

return 0;
}

int abs(int a){
	if(a>=0){
	return a;
	}else{
		return -a;
	}




}