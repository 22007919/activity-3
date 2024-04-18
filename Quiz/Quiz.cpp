#include <iostream>

using namespace std;

int main() {

	// welcoming

	cout << "Greetings user and welcome to my app" << endl;
	cout << "Go ahead and select your traits among these:" << endl;
	cout << "i.e write only the number of the trait you have" << endl;

	// Personal questions

	cout << "What is your gender  ?" << endl;
	cout << "1) Male  2) Female 3) Other ?" << endl;
	int Gender;
	cin >> Gender;

	cout << "Are you an " << endl;
	cout << "1) Introvert  2) Extrovet 3) embivert ?" << endl;
	int Type;
	cin >> Type;


	cout << "What is your prefered method of communication" << endl;
	cout << "1) Texting 2) Calls (voice/video) 3) In person " << endl;
	int Cation;
	cin >> Cation;


	/*cout << "What is your zodiac sign" << endl;
	cout << "1) Capricon" << endl;
	cout << "2) Aquarius" << endl;
	cout << "3) Pisces" << endl;
	cout << "4) Aries" << endl;
	cout << "5) Gemini" << endl;
	cout << "6) Taurus" << endl;
	cout << "7) Cancer" << endl;
	cout << "8) Leo" << endl;
	cout << "9) Vigro" << endl;
	cout << "10) Libra" << endl;
	cout << "11) Scorpio" << endl;
	cout << "12) Sagittarius" << endl;
	int Sign;
	cin >> Sign;*/


	//nested if else statements for results from different choices

	if (Gender == 3) {
	
		cout << "Greetings user, we regret to inform that this program has only been calibrated for males and females and not yet availabe to other genders, Our deepest of apologies" << endl;
		return 0;
	}else if (Gender == 1 && Type == 1 && Cation == 1){
	
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Adi" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is an introvert and he prefers texting over calls" << endl;
	}
	else if (Gender == 1 && Type == 2 && Cation == 2) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Fhulufhelo" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is extrovert and seem to like video calls same as you" << endl;

	}
	else if (Gender == 1 && Type == 3 && Cation == 3) {

		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Orifha" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is an embivert and much rather talk to you face to face" << endl;
	}
	else if (Gender == 2 && Type == 1 && Cation == 1) {

		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Sphesihle" << endl;
		cout << "Gender : Female" << endl;
		cout << "She is quite introverted and she does love good texting" << endl;

	}
	else if (Gender == 2 && Type == 2 && Cation == 2) {

		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Mukona" << endl;
		cout << "Gender : Female" << endl;
		cout << "Now she is extrovert, even likes being loud but also has a soft side and she prefers calls and video calls with the people she cares about" << endl;

	}
	else if (Gender == 2 && Type == 3 && Cation == 3) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Zanele" << endl;
		cout << "Gender : Female" << endl;
		cout << "She is quite extroverted and she does love a good textor" << endl;

	}
	else if (Gender == 1 && Type == 2 && Cation == 1) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Roman" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is extrovert and is a very good texter" << endl;


	}else if (Gender == 1 && Type == 3 && Cation == 1) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Roman" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is extrovert and is a very good texter" << endl;

	}else if (Gender == 1 && Type == 1 && Cation == 2) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Thakhani" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is introvert and prefers calls" << endl;

	}else if (Gender == 1 && Type == 1 && Cation == 3) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Ike" << endl;
		cout << "Gender : Male" << endl;
		cout << "He is introvert and likes to meet people face to face" << endl;

	}else if (Gender == 2 && Type == 2 && Cation == 1) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Zanele" << endl;
		cout << "Gender : Female" << endl;
		cout << "She is quite extroverted and she does love a good textor" << endl;

	}else if (Gender == 2 && Type == 3 && Cation == 1) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Ebenezer" << endl;
		cout << "Gender : Female" << endl;
		cout << "She is quite extroverted and she does love a good textor" << endl;

	}else if (Gender == 2 && Type == 1 && Cation == 2) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Phophi" << endl;
		cout << "Gender : Female" << endl;
		cout << "She is quite introverted and she does love calls" << endl;

	}else if (Gender == 2 && Type == 1 && Cation == 3) {
		cout << "Searching..." << endl;
		cout << "Your match is :" << endl;
		cout << "Name : Muofhe" << endl;
		cout << "Gender : Female" << endl;
		cout << "She is quite introverted and she does like meeting in person" << endl;

	}else {
	
		cout << "Something went wrong" << endl;
		cout << "You must have inputted an invalid option" << endl;
	}

	return 0;
}
