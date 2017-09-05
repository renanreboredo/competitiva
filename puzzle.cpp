#include <iostream>
using namespace std;

int main() {
  int pieces[1000];
  int nro, p, i;
  cin >> nro;
  for (i = 0; i < nro; i++) pieces[i] = 0;
  for (i = 0; i < nro; i++) {
    cin >> p;
    pieces[p-1]++;
  }
  for (i = 0; i < nro; i++) {
    if (pieces[i] == 0) {
      cout << i+1 << "\n";
      break;
    }
  }
  return 0;
}
