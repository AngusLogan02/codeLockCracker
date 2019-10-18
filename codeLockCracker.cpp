#include <iostream>
#include <unistd.h>
#include <sstream>
#include <string>

using namespace std;

int main() {
    cout << "At which thousand would you like to start at? (0 if you don't know.)\n";
    int startThousand;
    cin >> startThousand;
    cout << "\n";

    sleep(3);
    cout << "Beginning crack.";

    for (int digit1 = startThousand; digit1 < 10; digit1++){
        for (int digit2 = 0; digit2 < 10; digit2++){
            for (int digit3 = 0; digit3 < 10; digit3++){
                for (int digit4 = 0; digit4 < 10; digit4++){

                cout << (std::to_string(digit1)+std::to_string(digit2)+std::to_string(digit3)+std::to_string(digit4));
                cout << "\n";

    }}}}
}
