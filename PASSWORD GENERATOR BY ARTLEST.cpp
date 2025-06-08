/*
Password Generator v1.3
Developed by ARTLEST
Generates secure random passwords using alphanumeric and special characters
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // All available characters: lowercase, uppercase, numbers, and symbols
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";
    
    srand(time(0)); // Seed random generator with current time to get different results each run
    
    int length;
    cout << "ARTLEST Password Generator" << endl;
    cout << "Enter desired password length: ";
    cin >> length;
    
    // Input validation
    if(length < 4) {
        cout << "Minimum length is 4 characters. Adjusting..." << endl;
        length = 4;
    }
    if(length > 128) {
        cout << "Maximum length is 128 characters. Adjusting..." << endl;
        length = 128;
    }
    
    string password = "";
    
    // Generate password by randomly selecting characters
    for(int i = 0; i < length; i++) {
        int random_index = rand() % charset.length(); // Pick random position from charset
        password += charset[random_index]; // Add that character to password
    }
    
    cout << "\nGenerated Password: " << password << endl;
    
    // Security recommendations
    cout << "\nSecurity Recommendations:" << endl;
    cout << "- Use unique passwords for each account" << endl;
    cout << "- Store passwords securely using a password manager" << endl;
    cout << "- Do not share passwords with unauthorized individuals" << endl;
    cout << "- Consider enabling two-factor authentication where available" << endl;
    
    cout << "\n© 2024 ARTLEST - Password Generation Tool" << endl;
    
    return 0;
}