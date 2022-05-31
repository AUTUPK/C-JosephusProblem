#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main() {
	int n, s, m;									//获取总人数n,开始序号s,步长m
	printf("\n请输入总人数n:");
	scanf("%d", &n);
	printf("\n请输入开始d的序号s:");
	scanf("%d", &s);
	printf("\n请输入步长m:");
	scanf("%d", &m);
	int p[100] = { 0 };								//数组初始为0代表未出局
	int count = 0, i = 1, k = s;					//count统计出局人数，i为计数器，k辅助定位
	printf("出列顺序为：\n(");
	while (count != n) {							//直到出局人数等于总人数时结束
		if (k > n)k = 1;							//当k大于总人数时，回到1号位置
		if (p[k] == 0) {							//若不为1则计数器i和定位器k同时加1
			i++;
			k++;
		}
		else k++;									//若值为1则仅定位器后移
		if (i > m)i = m;					
		if (k > n)k = 1;
		if (i == m) {
			if (p[k] == 0) {
				p[k] = 1;							//1代表已出局
				i = 1;
				printf("%d,", k);
				count++;
				k++;
			}
					}
		
	}printf("\b)");
}