#include <stdio.h>

int setOperator();
int getNumber();
void Add(int* number);
void Mult(int* number);

int main(int argc, char const *argv[]) {
  int op = setOperator();
  int number = getNumber();
  if (op == 1) {
    Add(&number);
  }
  else if (op == 2) {
    Mult(&number);
  }
  return 0;
}

int setOperator(){
  int operator = 0;
  do {
      printf("Select Add (1) or Multiply (2):");
        scanf("%d",&operator);
    }while((operator > 2) || (operator < 1));
    return operator;
}
int getNumber(){
  int number = 0;
  do {
    printf("Select a number in the range (1-100):");
    scanf("%d",&number );
  }while((number < 1) || (number > 100));
  return number;
}
void Add(int* number){
  int sum = 0;
  for (int i = 3; i <= *number; i++) {
    if ((i % 3 == 0 )||(i % 5 == 0)) {
      sum = sum + i;
    }
  }
  printf("The result is: %d",sum );
  printf("\n");
}
void Mult(int* number){
    long mult = 1;
    if (*number >= 3) {
      for (int i = 3; i <= *number; i++) {
        if ((i % 3 == 0 )||(i % 5 == 0)) {
          mult = mult * i;
        }
    }
    }
    printf("The result is: %ld",mult );
    printf("\n");
}
