#include<stdio.h>//���� 
int JS(int q, int w) {
	w = q / 5 * 2;
	return w;
}
int main() {
	float a, b, c, d;
	printf("��̣�/�����");
	scanf("%f", &a);
	printf("\nͣ��ʱ�䣺");
	scanf("%f", &b);
	if (a <= 3)
	{
		d = 10;
		c = JS(b, c);
		printf("\n���ĳ���Ϊ��%.0f", c + d);
	}
	else if (a > 3 && a <= 10) {
		d = (a - 3) * 2 + 10;
		c = JS(b, c);
		printf("\n���ĳ���Ϊ��%.0f", c + d);
	}
	else if (a > 10) {
		d = 24 + (a - 10) * 3;
		c = JS(b, c);
		printf("\n���ĳ���Ϊ��%.0f", c + d);
	}

	return 0;
}
