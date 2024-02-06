#include <iostream>
#include <sstream>

int main() {
    // Initialize an array to store the counts of each digit
    int counts[10] = {0};

    // Read the input sequence
    std::string sequence;
    std::getline(std::cin, sequence);
    
    // Use a stringstream to split the sequence and count the occurrences of each digit
    std::istringstream iss(sequence);
    int num;
    while (iss >> num && num != 0) {
        if (num >= 1 && num <= 9) {
            counts[num]++;
        }
    }

    // Print the counts in the desired order
    for (int i = 1; i <= 9; ++i) {
        std::cout << counts[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}