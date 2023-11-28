#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

int main() {

    std:: string number;
    std:: cin >> number;

    srand(time(NULL));

    std::vector<std::string> Characters = {"0","1","2","3","4","5","6","7","8","9","!","@","#","$","%","^","&","*","A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};


    int upper_bound = std:: atoi(number.c_str());

   if (upper_bound >= 8 && upper_bound <=26) {
        for (int i = 0; i < upper_bound; i++){
            int randomIndex = rand() % Characters.size();
    std::string randomThing = Characters[randomIndex];
    std::cout << randomThing;
        } 
    }
    else {
      std:: cout << "invalid input" ; 
    }

    return 0;
}
