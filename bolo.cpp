#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
  int leite, far, ovo;
  cin >> far >> ovo >> leite;
  far = floor(far/2);
  ovo = floor(ovo/3);
  leite = floor(leite/5);
  cout << min(leite,min(far,ovo)) << "\n";
  return 0;
}
