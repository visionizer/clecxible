#include <argument.h>

const ichar* G_USAGE = "Usage: clecxible [file(s)] [option(s)]\n"
  "Compile any valid extended C program\n"
  "At least one file must be given, otherwise an error is thrown\n"
  "The options are:\n"
  "\t--target <x86_64> Specifies the target architecture\n"
  "\t--platform <windows|unix> Specifies the platform to produce the binary for\n"
  "\t--format <coff|elf> Specifies the format of the binary\n"
  "\t-O --optimization <0,1,2,3,size> Specifies the optimization level, where 0 means no optimization at all and 3 demands aggressive optimization. Size tries to shrink the binary size\n";
void usage() {
  printf("%s\n", G_USAGE);
}

struct arguments parse_args(i32 argc, ichar** argv) {
  if (argc < 2) {
    usage();
    die("too little arguments were given");
  }
  struct arguments returns = {0};

  return (returns);
}
