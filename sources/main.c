#include <core.h>
#include <argument.h>

int main(int argc, char** argv) {
  struct arguments args = parse_args(argc, argv);
  UNUSED(args);
}
