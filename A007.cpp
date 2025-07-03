#include <iostream>

using namespace std;

int main () {
  
  int arr[8] = {0}; 
  int max = 0;
  int min = 9;
  int maxChange = 0;
  int minChagne = 0;
  
  for (int i = 0; i < 8; ++i) {
    int temp = 0;  
    
    cin >> temp;
    
    if (max == 0 && min == 9) {
      max = temp;
      min = temp;
      maxChange++;
      minChagne++;
    }
    
    if (temp < min) { 
      min = temp;
      minChagne++;
    } else if (max < temp) {
      max = temp;
      maxChange++;
    }
  }
 

  if (maxChange == 8) {
    cout << "ascending\n";
  } else if (minChagne == 8) {
    cout << "descending\n";
  } else {
    cout << "mixed\n";
  }  
  return 0;
}
