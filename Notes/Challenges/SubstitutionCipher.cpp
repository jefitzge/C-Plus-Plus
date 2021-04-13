//Section 10 Challenge
//Substitution Cipher
/*
A simple very old method of sending secret messages is the substitution cipher.
Each letter of the alphabet get replaced by another letter of the alphabet
For example, every 'a' ger replaced by an 'X', and every 'b' gets replaced by a 'Z'

Write a program that asks a user to enter a secret message.

Encrypt this message using the substitution Cipher and display the encrypted message.
Then decipher the encrypted message back to the original message.

You may use the two strings below for your substitution.
For example, to encrypt you can replace the character at position n in alphabet with the character at position n in key.
To decrypt you can replace the character at position n in key with the character at position n in alphabet.

Have fun and make the cipher strong if you wish. Currently the cipher only substitutes letters, you could easily add digits punctuation whitespace and so forth. Also, currently the cipher always substitutes a lowercase letter with an uppercase letter and vice-versa. This could also be improved.
Remember the less code you write the less code you have to test.
Reuse existing functionality in libraries and an std::string class.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	string alphabet{ " .,!?abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890" };
	string cipher{ "$>%)(qawszxcdefrvbgtyhnmjukilopPLMKOIJNBHUYGVCFTDREXSZWAQ-=_+/|{]<}" };

	string unecrypted_message;
	string encrypted_message;

	cout << "======= Welcome to the Substitution Cipher =======" << endl;
	cout << "Please enter message to be encrypted: ";
	getline(cin, unecrypted_message);

	/*
	Loop through each letter of the unencrypted message,
	if find isnt npos
		Find the index of that letter in the alphabet,
		find the corresponding letter in the cipher at that index,
		push that new letter into the encrypted message
	else
		push that letter as is into the encrpyed message
	*/
	for (size_t i{ 0 }; i < unecrypted_message.length(); i++) {
		size_t index = alphabet.find(unecrypted_message.at(i));
		if (index != string::npos) {
			encrypted_message.push_back(cipher.at(index));
		}
		else {
			encrypted_message.push_back(unecrypted_message.at(i));
		}
	}
	cout << "Your encrypted message is: " << encrypted_message << endl;

	//Decrypt the encrypted message
	string temp{};
	for (size_t i{ 0 }; i < encrypted_message.length(); i++) {
		size_t index = cipher.find(encrypted_message.at(i));
		if (index != string::npos) {
			temp.push_back(alphabet.at(index));
		}
		else {
			temp.push_back(encrypted_message.at(i));
		}
	}
	cout << "Your decrypted message is: " << temp << endl;

	return 0;
}
