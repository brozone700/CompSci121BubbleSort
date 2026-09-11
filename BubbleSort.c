#include <stdio.h>
const int MAX=9;

void printValues(int* Values) {
	printf("[");
	for ( int i = 0; i < MAX; i++) {
		printf(" %d,", Values[i]);
	}
	printf("]\n");
}
void sort(int* NumSet){
	int KeepGoing = 1;
	while ( KeepGoing > 0) {
		KeepGoing = 0;
		for ( int i = 0; i < MAX; i++) {
			if (NumSet[i] < NumSet[i+1]){
				KeepGoing++;
				swap(&NumSet[i], &NumSet[i+1]);
			}
		}	
	}
}
void swap(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main
