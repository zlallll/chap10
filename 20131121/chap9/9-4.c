/*
파일명 : 9-4.c
만든날짜 : 20131105(화요일)
만든사람 : 남지은
내용 : 조건문 반복문에서 사용하는 지역변수
*/


#include<stdio.h>
int main(void){
	int i = 0;
	int total = 0;


for(i=1;i<3;i++){
	//int total = 0;
	total = total + i;
	//total+=i;
}

if(total<10){
	printf("total 값은 %d입니다.\n",total);
}







	return 0;
}