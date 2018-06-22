#include <iostream>	
#include <time.h>

void main() {

	setlocale(LC_ALL, "rus");
	int numb = 1, i, j, x, y;

	do
	{	
		printf("а - 1\tб - 2\tв - 3\tг - 4\tд - 5\nе - 6\tж - 7\tз - 8\tи - 9\tк - 10\n\nVvedite n = ");
		scanf("%d", &numb);


		if (numb == 9) {
			printf("\n");

			i = 1, j = 1, x = 10;

			do
			{
				i++;
				if (i <= x)
					printf("*");
				else {
					printf("\n");
					i = 1;
					j++;
					x = x - 1;
				}

			} while (j <= 10);
			printf("\n");
		}
		else if (numb == 10) {

			x = 9;
			i = 10;
			j = 0;

			do
			{
				j++;

				if (j <= x) {
					if (j >= i)
						printf("*"); else printf(" ");
				}
				else {
					printf("\n");
					j = 0;
					i--;
				}
			} while (i >= 1);
			printf("\n");

		}
		else if (numb == 1) {

			x = 10;
			i = 1;
			j = 11;

			do
			{
				j++;

				if (j <= x) {
					if (j >= i)
						printf("*"); else printf(" ");
				}
				else {
					printf("\n");
					j = 1;
					i++;
				}
			} while (i <= x);
			printf("\n");

		}
		else if (numb == 2) {


			i = 1, j = 1, x = 11;

			do
			{
				j++;

				if (j <= x) {
					if (j >= i)
						printf(" "); else printf("*");
				}
				else {
					printf("\n");
					j = 1;
					i++;
				}
			} while (i <= x);
			printf("\n");

		}
		else if (numb == 5) {
			printf("\n");


			i = 1; 	j = 1; 	x = 10;
			y = 6;
			do
			{
				i++;
				do
				{
					j++;
					((j <= x && j >= i) || (j >= y && j <= i)) ? printf("*") : printf(" ");
				} while (j <= 10);

				(i > 5) ? y-- : x--;
				printf("\n");

				j = 1;
			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 6) {
			printf("\n");


			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;
				do
				{
					j++;
					((j <= x && j >= i) || (j >= y && j <= i)) ? printf(" ") : printf("*");
				} while (j <= 9);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;
			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 3) {
			printf("\n");

			i = 1; 	j = 1; 	x = 10;
			y = 6;
			do
			{
				i++;

				do
				{
					j++;
					if (i <= 6) {
						((j <= x && j >= i)) ? printf("*") : printf(" ");
					}
					else printf(" ");
				} while (j <= 11);

				if (i > 5)  x++; else x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 4) {
			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;

				do
				{
					j++;
					if (i >= 6) {
						((j <= x && j >= i) || (j >= y && j <= i)) ? printf("*") : printf(" ");
					}
				} while (j <= 10);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 7) {

			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;

				do
				{
					j++;
					if (j <= 6) {
						((j <= x && j >= i) || (j >= y && j <= i)) ? printf(" ") : printf("*");
					}
					else printf(" ");
				} while (j <= 9);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
		else if (numb == 8) {
			i = 1; 	j = 1; 	x = 10;
			y = 6;

			do
			{
				i++;

				do
				{
					j++;
					if (j >= 6) {
						((j <= x && j >= i) || (j >= y && j <= i)) ? printf(" ") : printf("*");
					}
					else printf(" ");
				} while (j <= 9);

				(i > 5) ? y-- : x--;

				printf("\n");

				j = 1;

			} while (i <= 9);
			printf("\n");

		}
	} while (true);
}