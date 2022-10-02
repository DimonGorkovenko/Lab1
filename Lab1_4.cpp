#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter two two-digit numbers\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a <= 9 || a > 99) printf("Incorrect numbers");
	else if (b <= 9 || b > 99) printf("Incorrect numbers");
	else {  //скобка 1
		printf("Select the number you want to change\n");
		scanf_s("%d", &c);
		if (c == a) {  //скобка 2
			a += 5;
			printf("Add 5 to this number:%d\n", a);
			a -= 12;
			printf("Subtract 7 from this number:%d\n", a);
			a = (a + 7) * 2;
			printf("Multiply this number by 2:%d\n", a);
			a = a / 2;
			printf("Divide this number by 1:%d", a);
		}  //скобка 2
		else if (c == b) {  //скобка 3
			b += 5;
			printf("Add 5 to this number:%d\n", b);
			b -= 12;
			printf("Subtract 7 from this number:%d\n", b);
			b = (b + 7) * 2;
			printf("Multiply this number by 2:%d\n", b);
			b = b / 2;
			printf("Divide this number by 1:%d", b);
		}  //скобка 3
		else printf("Wrong number you have chosen to change");
	}  //скобка 1
	return 0;
}
