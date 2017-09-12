#include <iostream>
#include "stdio.h"
#include <string>
using namespace std;

int calcCaboDeGuerra(int pivot, int alunos, int forca_alunos[10001]) {
  // return 0 if draws
  // return 1 if left side wins
  // return 2 if right side wins
  int left, right;
  for (int i = 0,left = 0; i <= alunos-pivot; i++) {
    left += forca_alunos[i] * pivot-i-1;
  }
  for (int i = 0,left = 0; i <= alunos-pivot; i++) {
    right += forca_alunos[i] * i-pivot-1;
  }
  if (left > right) {
    return 1;
  }
  else if (right > left) {
    return 2;
  }
  return 0;
}

int main() {
  int alunos;
  string nome;
  string nomes[10001];
  int forca_alunos[10001];
  int forca;
  int const tam = 10001;
  while (scanf("%d\n",&alunos), alunos != 0 ) {
    for (int k = 0; k < alunos; k++) forca_alunos[k] = 0;
    for (int i = 0; i < alunos; i++) {
      getline(cin, nome);
      nomes[i] = nome;
      forca = 0;
      for (int k = 0; k < nome.size(); k++) {
        forca += (int) nome.at(k);
      }
      forca_alunos[i] = forca;
    }
  }
  return 0;
}
