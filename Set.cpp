#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <sstream>
// #include <vector>


class Set {
  private:
    int size;
    int *set;
    
  public:
    int *getSet() {
      return set;
    }

    void setSet(int size, int* set) {
      this->size = size;
      this->set = set;
      std::sort(this->set, this->set + this->size); 
    }
    
    int findClosestSmaller(int n) {
      int m, value = -9999;
      size = this->size;

      if (n < set[0] || n > set[size-1])
        return value;
      
      for (int i = 0; size > 0 && i < size; ) {
        m = int((i+size)/2);
        if ( set[m] <= n && std::abs(n-set[m]) < std::abs(n-value) ) {
          value = set[m];
          i = m;
        }
        else
          size = m;
      }   

    return value;
    }
};


int main() {
  Set main_set;
  std::string buffer;
  int i=0, q, n, result;
  int *entry;

  std::cin >> q;
  entry = new int[q];

  std::getline(std::cin, buffer);
  std::getline(std::cin, buffer);
  std::istringstream sttr (buffer);
  
  while ( sttr >> n ) {
    entry[i++] = n;
  }
  /*
  for(int i = 0; i < q ; ++i)
    std::cout << entry[i] << " ";
  std::cout << std::endl;
  */
  std::cin >> n;

  main_set.setSet(q, entry);
  result = main_set.findClosestSmaller(n);
  if ( result != (-9999) )
    std::cout << result << std::endl;

  delete[] entry;
  return 0;
}

