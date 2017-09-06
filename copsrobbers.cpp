#include <iostream>
#include "stdio.h"
using namespace std;

int matrix[5][5];
int const COUNT = 4;

bool copsandrobbers(int i, int j) {
  if (j < 0 || j > COUNT || i < 0 || i > COUNT || matrix[i][j] == 1) {
    return false;
  }
  if (i == COUNT && j == COUNT) return true;
  matrix[i][j] = 1;
  if(!copsandrobbers(i+1,j)) {
    if(!copsandrobbers(i,j+1)) {
      if(!copsandrobbers(i-1,j)) {
          return copsandrobbers(i,j-1);
      }
    }
  }
  return true;
}

int main() {
  int i,j,k, cases;
  cin >> cases;
  for (i = 0; i < cases; i++) {
    for (j = 0;  j < COUNT+1;  j++) {
      for (k = 0; k < COUNT+1; k++) {
        cin >> matrix[j][k];
      }
    }
    if (copsandrobbers(0, 0)){
      printf("COPS\n");
    } else {
      printf("ROBBERS\n");
    }
  }
  return 0;
}
