#include <Eigen/Dense>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
  Eigen::Vector2f v{1, 2};
  cout << "point: {" << v << "}" << endl;
  return 0;
}
