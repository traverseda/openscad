#include "console.h"

int main(int argc, char **argv)
{
    char *input_file = argv[1];
    char *output_file = "test.stl";
    convertToStl(input_file, output_file);
    return 0;
}
