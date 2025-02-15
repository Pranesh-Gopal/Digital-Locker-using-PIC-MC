🔒 Keypad-Based Password System Using PIC16F877A
This project is a simple yet effective password-based security system using the PIC16F877A microcontroller. It features a 4x4 matrix keypad for user input and a 16x2 LCD display for interaction. Users are prompted to enter a 4-digit password, which is then verified against a predefined code. If the password is correct, an LED blinks to indicate success ✅, and if incorrect, a message appears on the LCD ❌. This project is ideal for learning embedded systems and microcontroller-based security solutions. 🚀

🛠️ How It Works & Setup
The LCD screen initially displays the message "Enter Password", and as the user types, the numbers appear on the display. The system scans the keypad row by row, detecting user input and storing it. Once four digits are entered, it compares them with a predefined password ({3,3,3,3}). If correct, an LED toggles on PIN_A0 to signal access granted 🔓; otherwise, it shows "password incorrect" ❌. You can easily modify the password in the pa[] array within the code. Simply clone the repository, compile the code using CCS C, and upload it to your PIC16F877A microcontroller. 💡

📌 Future Enhancements & Contributions
Future improvements could include EEPROM storage for dynamic password changes 📝, a buzzer alert for multiple failed attempts 🔊, and a relay or servo motor for door locking mechanisms 🔐. This project is a great starting point for those interested in embedded security systems. Feel free to contribute by submitting a pull request or discussing improvements in the issues section. Happy coding! 🛠️✨

🔧 Components Used

🏷️ Hardware:
⚡ PIC16F877A Microcontroller
⌨️ 4x4 Keypad
📟 16x2 LCD Display
💡 LED (for password verification feedback)
💻 Software:
🖥️ CCS C Compiler
🛠️ Proteus (for simulation)
