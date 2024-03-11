#include <iostream>
#include <unordered_map>
#include <string>

void displayInfo(const std::unordered_map<std::string, std::string>& constitutionInfo, const std::string& field) {
    auto it = constitutionInfo.find(field);
    if (it != constitutionInfo.end()) {
        std::cout << "Constitution Bot: " << it->second << '\n';
    } else {
        std::cout << "Constitution Bot: I'm sorry, I don't have information on that topic.\n";
    }
}

int main() {
    std::unordered_map<std::string, std::string> constitutionInfo;

constitutionInfo["Preamble"] = "Introduction to the Constitution. The world’s longest constitution is the Indian’s constitution. At its commencement, it had 395 articles in 22 parts and 8 schedules. It consists of approximately 145,000 words, making it the second largest active constitution in the world. Currently, it has a preamble, 25 parts with 12 schedules, 5 appendices, 448 articles, and 101 amendments.\n\n";
constitutionInfo["Fundamental Rights"] = "Basic rights of citizens. Right to equality, including equality before law, prohibition of discrimination on grounds of religion, race, caste, sex or place of birth, and equality of opportunity in matters of employment.\n\n";
constitutionInfo["Directive Principles"] = "Guidelines for the state.\n\n";
constitutionInfo["Fundamental Duties"] = "Moral obligations for citizens.\n\n";
constitutionInfo["President of India"] = "Ceremonial head and supreme commander of the armed forces. Droupadi Murmu\n\n";
constitutionInfo["Parliament"] = "Bicameral legislature with Lok Sabha and Rajya Sabha.\n\n";
constitutionInfo["Judiciary"] = "Independent judiciary with Supreme Court, High Courts, and subordinate courts.\n\n";
constitutionInfo["State Governments"] = "Governance at the state level with Chief Minister as the head.\n\n";
constitutionInfo["Union Territories"] = "Directly governed by the Central Government. There are currently eight union territories in India, namely, Andaman and Nicobar Islands, Chandigarh, Dadra and Nagar Haveli and Daman and Diu, Delhi, Jammu and Kashmir, Ladakh, Lakshadweep and Puducherry.\n\n";
constitutionInfo["Amendments"] = "Process to modify and adapt the Constitution.\n\n";


    // Greeting
    std::cout << "Hello! I am your Constitution of India chatbot. How can I assist you today?\n";

    // User interaction loop
    while (true) {
        std::cout << "Options:\n";
        std::cout << "1. Preamble\n";
        std::cout << "2. Fundamental Rights\n";
        std::cout << "3. Directive Principles\n";
        std::cout << "4. Fundamental Duties\n";
        std::cout << "5. President of India\n";
        std::cout << "6. Parliament\n";
        std::cout << "7. Judiciary\n";
        std::cout << "8. State Governments\n";
        std::cout << "9. Union Territories\n";
        std::cout << "10. Amendments\n";
        std::cout << "Enter the number corresponding to the information you want (or type 'exit' to end): ";

        std::string userChoice;
        std::getline(std::cin, userChoice);

        // Check for exit condition
        if (userChoice == "exit") {
            std::cout << "Goodbye! Have a great day.\n";
            break;
        }

        // Convert user choice to an integer
        int choice = std::stoi(userChoice);

        // Use switch case to display information based on user choice
        switch (choice) {
            case 1:
                displayInfo(constitutionInfo, "Preamble");
                break;
            case 2:
                displayInfo(constitutionInfo, "Fundamental Rights");
                break;
            case 3:
                displayInfo(constitutionInfo, "Directive Principles");
                break;
            case 4:
                displayInfo(constitutionInfo, "Fundamental Duties");
                break;
            case 5:
                displayInfo(constitutionInfo, "President of India");
                break;
            case 6:
                displayInfo(constitutionInfo, "Parliament");
                break;
            case 7:
                displayInfo(constitutionInfo, "Judiciary");
                break;
            case 8:
                displayInfo(constitutionInfo, "State Governments");
                break;
            case 9:
                displayInfo(constitutionInfo, "Union Territories");
                break;
            case 10:
                displayInfo(constitutionInfo, "Amendments");
                break;
            default:
                std::cout << "Constitution Bot: Invalid choice. Please enter a number between 1 and 10.\n";
        }
    }

    return 0;
}
