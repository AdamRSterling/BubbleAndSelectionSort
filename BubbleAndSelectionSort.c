#include <stdio.h>

void bubbleSort(int *input)
{
	int temp;
	int n = 10;
	while (n > 0) {
		int newn = 0;
		for (int i = 1; i <= 9; i++) {

			if (input[i-1] > input[i]) {
				temp = input[i];
				input[i] = input[i-1];
				input[i-1] = temp;
				newn = i;
			}
		}

		n = newn;
	}
}

void selectionSort(int *input)
{
	int minIndex, temp;
	for (int i = 0; i < 9; i++) {
		minIndex = i;

		for (int j = i + 1; j < 10; j++) {
			if (input[j] < input[minIndex]) 
				minIndex = j;
		}
			
		if (minIndex != i) {
			temp = input[i];
			input[i] = input[minIndex];
			input[minIndex] = temp; 
		}
	}
}
		
int main(int argc, char *argv[])
{
	int input[10];

	printf("Please insert 10 numbers: ");
	scanf_s("%d %d %d %d %d %d %d %d %d %d", &input[0], &input[1], &input[2], &input[3], &input[4], &input[5], &input[6], &input[7], &input[8], &input[9]);

	printf("Pre-sorted array: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", input[i]);
	}

	selectionSort(input);


	printf("\nPost-sorted array: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", input[i]);
	}

	return 0;
}