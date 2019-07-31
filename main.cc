#include <Eigen/Dense>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  Eigen::Vector2f v{1, 2};
  cout << "Point: {" << v << "}" << endl;
  return 0;
}
