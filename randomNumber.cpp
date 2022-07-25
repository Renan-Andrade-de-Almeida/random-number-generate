#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char const* argv[]) {
  int random;
  int maior = 200;
  int menor = 0;
  srand((unsigned)time(0));
  random = rand()%(maior-menor+1) + menor;

  cout << random;
}