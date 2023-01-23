#include <iostream>
#include <string>

int main() {
    std::cout << "Fire Alarm System" << std::endl;
    std::cout << "1. Arm Alarm" << std::endl;
    std::cout << "2. Disarm Alarm" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Enter your choice: ";

    int choice;
    std::cin >> choice;

    bool alarmArmed = false;

    while (choice != 3) {
        if (choice == 1) {
            alarmArmed = true;
            std::cout << "Fire Alarm Armed" << std::endl;
        } else if (choice == 2) {
            if (alarmArmed) {
                std::cout << "Enter passcode to disarm the alarm: ";
                std::string passcode;
                std::cin >> passcode;
                // check passcode against the stored passcode
                if (passcode == "correct_passcode") {
                    alarmArmed = false;
                    std::cout << "Fire Alarm Disarmed" << std::endl;
                } else {
                    std::cout << "Incorrect passcode" << std::endl;
                }
            } else {
                std::cout << "Fire Alarm is not armed" << std::endl;
            }
        } else {
            std::cout << "Invalid choice. Please enter a valid choice" << std::endl;
        }

        std::cout << "1. Arm Alarm" << std::endl;
        std::cout << "2. Disarm Alarm" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
    }

    if (alarmArmed) {
        // sound alarm
        std::cout << "Fire Alarm sounding. Evacuate the building" << std::endl;
    }

    return 0;
}
