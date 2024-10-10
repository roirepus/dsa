#include <cstdint>
#include <iostream>

namespace Options {
enum Color : std::int32_t {
  red,
  pink = 5,
  green,

};
}
int main() {
  Options::Color shirt{static_cast<Options::Color>(5)};
  if (!0) {
    std::cout << "your shirt is " << shirt;
  };
}
