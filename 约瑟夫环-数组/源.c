#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
int main() {
	int n, s, m;									//��ȡ������n,��ʼ���s,����m
	printf("\n������������n:");
	scanf("%d", &n);
	printf("\n�����뿪ʼd�����s:");
	scanf("%d", &s);
	printf("\n�����벽��m:");
	scanf("%d", &m);
	int p[100] = { 0 };								//�����ʼΪ0����δ����
	int count = 0, i = 1, k = s;					//countͳ�Ƴ���������iΪ��������k������λ
	printf("����˳��Ϊ��\n(");
	while (count != n) {							//ֱ��������������������ʱ����
		if (k > n)k = 1;							//��k����������ʱ���ص�1��λ��
		if (p[k] == 0) {							//����Ϊ1�������i�Ͷ�λ��kͬʱ��1
			i++;
			k++;
		}
		else k++;									//��ֵΪ1�����λ������
		if (i > m)i = m;					
		if (k > n)k = 1;
		if (i == m) {
			if (p[k] == 0) {
				p[k] = 1;							//1�����ѳ���
				i = 1;
				printf("%d,", k);
				count++;
				k++;
			}
					}
		
	}printf("\b)");
}