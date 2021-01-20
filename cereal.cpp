#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

  //metric ton in ounces
  const float ton = 35273.93;

  //Variables
  float cereal;
  float weightInTons;
  float boxesNeeded;

  //Get the ouunces of cereal input from the user
  cout << "How many ounces is the box of cereal?" << endl;
  cin >> cereal;

  //Calculation for the cereal weight in metric tons
  weightInTons = cereal / ton;
  //Calculation for the boxes needed
  boxesNeeded = ton / cereal;

  cout << "The cereal weighs " << weightInTons << " metric tons." << endl;
  cout << boxesNeeded << " boxes of cereal are needed to weigh a metric ton." << endl;
  return 0;
}
