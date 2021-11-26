#include <iostream>
using namespace std;
#include "monster.h"

int main() {
   monster m("Venom",1000,100) ;
   monster x("Thanakit"); // hp=100 potion=10
   monster *p;

   monster y[10]={{"Chaowalee",50,1},{"Pisit"},{"Chanchon"}};

   p=new monster("Jaimai");
} 