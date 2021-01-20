#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {

  //Using command line parameters
  int max = atoi(argv[1]); //atoi makes a string into an integer
  int attendees = atoi(argv[2]);

  //Using this to determine the number of members that can come or must leave
  int difference;

  //If the user fails to enter the fire capacity and the number of attendees
  if (argc != 3) {
    cerr << "Please enter the max room capacity and the number of attendees." << endl;
    return -1;
  }

  //if the number of people is or less than the max
  if (attendees <= max) {
    difference = max - people;
    cout << "It is legal to hold the meeting. " << difference << " more people can legally attend." << endl;
    return 0;
  }
  //if the numer of people is more than the max
  else if (attendees > max) {
    difference = people - max;
    cout << "The meeting cannot be held as planned due to fire regulations. " << endl;
    cout << difference << " people must leave to meet the fire regulations" << endl;
    return 0;
  }
  else {
    return -1;
  }
}
