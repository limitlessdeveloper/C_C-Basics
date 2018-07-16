#include<stdio.h>
void main(){
 int *a;

 char far *h='r';             //as far and huge has a 4 bytes
			      // 2bytes(16bits) for segment and 2(16bits) for offset.
 char huge *kh='t';

 clrscr();
 printf("%d %d %d",sizeof(a),sizeof(h),sizeof(kh));
 getch();
}