#include <iostream>
#include <fstream>
#include <string>

std::string InvertString(const std::string& string_to_invert) {
  int counter = string_to_invert.length() - 1;
  std::string string_inverted{string_to_invert};
  for (const auto& element_of_string : string_to_invert) {
    string_inverted.at(counter) = element_of_string; 
    counter--;
  }
  return string_inverted;
}

void SwapLine(const std::string& input_file_name, const std::string& output_file_name) {
  std::ifstream input_file{input_file_name, std::ios_base::in};
  std::ofstream output_file{output_file_name, std::ios_base::app};
  std::string string_to_invert;
  while (input_file >> string_to_invert) {
    output_file << (InvertString(string_to_invert) + " ");
  }
}

void Usage(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << argv[0] << ": Parameters missing." << std::endl;
    std::cout << "Try " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    //std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string input_file_name = argv[1];
  std::string output_file_name = argv[2];
  SwapLine(input_file_name, output_file_name);
}