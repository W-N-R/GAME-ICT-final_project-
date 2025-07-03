//#include<iostream>
//#include<cmath>
//#include<fstream>
//#include<ctime>
//#include<cstdlib>
//#include<string>
//
//using namespace std;
//void type(int n) {
//	if (n % 2 == 0) {
//		cout << "! Number you have to guess is Even";
//	}
//	else {
//		cout << "! Number you have to guess is odd";
//	}
//}
//
//int main() {
//
//	cout << "***********************************************************************  **************************************************************************" << endl;
//	cout << "**** MUHAMMAD WALEED ************************************************      ****************************************************** RAVEHA MUNIR ****" << endl;
//	cout << "**** 24L-6023 ***************************************************** NUMGUESS ******************************************************** 24L-6004 ****" << endl;
//	cout << "**** 1B-1 *******************************************************              ********************************************************** 1B-1 ****" << endl;
//	cout << "***************************************************************    Powered By    ******************************************************************" << endl;
//	cout << "*************************************************************        WARAV         ****************************************************************" << endl;
//	cout << "***************************************************************************************************************************************************" << endl << endl;
//	cout << "------------------------------------------------------------------[ WELCOME ]----------------------------------------------------------------------" << endl;
//	string name_of_user, level;
//	cout << "Please Enter your name : ";
//	getline(cin, name_of_user);
//	cout << endl;
//	cout << "HI! " << name_of_user << ", please select the Difficulty level you want to play from below." << endl << endl;
//	cout << "-------------------------------------------------------------SELECT DIFFICULTY LEVEL---------------------------------------------------------------" << endl << endl << endl;
//	cout << "\t\t\t" << "1. Easy" << "\t\t\t\t\t" << "  2. Medium" << "\t\t\t\t\t" << "3. Hard" << endl << endl << endl;
//	cout << "Enter the difficulty level (easy, medium, hard) you want to play:";
//	getline(cin, level);
//	if (level != "easy" && level != "medium" && level != "hard")
//	{
//		while (level != "easy" && level != "medium" && level != "hard")
//		{
//			cout << endl << "\t\t\t\t\t\t\t" << "     !!! INVALIDE ENTRY !!!" << endl << endl;
//			cout << "Please Re-enter the difficulty level in this form (easy, medium, hard), then GAME will start: ";
//			cin >> level;
//			continue;
//		}
//	}
//	if (level == "easy")
//	{
//		string feedback1 = " won the game ";
//		string feedback2 = " lose the game ";
//		int attempts, hints, score, limit, ran_num = 0;
//		ofstream file("score.txt");
//		file << "Player Name: " << name_of_user << endl;
//		file << "Difficulty: " << level << endl;
//		cout << endl << endl;
//		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
//		cout << "-----------------------------------------------------------------[ EASY MODE ]----------------------------------------------------------------------" << endl;
//		cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
//		attempts = 12;
//		hints = 6;
//		score = 150;
//		limit = 50;
//		cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< RULES FOR EASY MODE ARE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl << endl;
//		cout << "=> Your current total attemtps are: " << attempts << endl;
//		cout << "=> your current total points right now are: " << score << endl;
//		cout << "=> You have to guess a number between 1 & " << limit << "." << endl;
//		cout << "=> On each wrong answer you will LOOSE 1 ATTEMPT and 10 POINTS" << endl;
//		cout << "=> You have total " << hints << " hints for guesing the number";
//		cout << "=> On each hint you will loose 1 ATTEMPT and 5 POINTS" << endl;
//		cout << "=> As you are left with 15 points or below you can not take hints." << endl;
//		cout << "=> If the you are out of score or attempts the game will be ended at that moment" << endl;
//
//		int x = time(0);
//		srand(x);
//		ran_num = (rand()  % limit );
//		cout << rand() << endl;
//		cout << ran_num;
//		//cout << ran_num << endl;
//		cout << endl;
//		if (ran_num == 0)
//		{
//			ran_num = 1;
//		}
//		cout << endl;
//		cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl << endl;
//		for (int i = 12;i >= 1;i++) {
//			if (attempts == 0 || score == 0) {
//
//				score = 0;
//				cout << " You have lost the game" << endl;
//				cout << " Attempts left are: " << attempts << endl;
//				cout << " Your score is: " << score << endl;
//				cout << " The unknown number was: " << ran_num << endl;
//				cout << endl << "GAME_OVER" << endl;
//				file << "Result: " << feedback2 << endl;
//				break;
//			}
//			int user_input = 0;
//			while (true) {
//				cout << "Enter your guess (an integer): " << "\t\t\t\t\t      ";
//				cin >> user_input;
//				if (cin.fail()) {
//					cin.clear();
//					cin.ignore(1000, '\n');
//					cout << "Invalid input! Please enter an integer only." << endl;
//					continue;
//				}
//				if (user_input < 1 || user_input > limit) {
//					cout << "!!! PLEASE ENTER A NUMBER BETWEEN 1 AND " << limit << " !!!" << endl;
//					continue;
//				}
//				break;
//			}
//
//			if (user_input < int(1) || user_input > int(limit)) {
//
//				while (user_input < int(1) || user_input > int(limit))
//				{
//					cout << endl;
//					cout << "!!! PLEASE ENTER A NUMBER BETWEEN 1 AND 50 !!!" << endl << endl;
//					cout << "Re-enter your guess (an integer): ";
//					cin >> user_input;
//					continue;
//				}
//			}
//
//			int diff = abs(ran_num - user_input);
//
//			if (diff == 0 && attempts != 0) {
//				cout << endl;
//				cout << "Correct!You have guessed the number(" << user_input << ")." << endl;
//				--attempts;
//				cout << "Yuo completed the game in " << 12 - attempts << " attempts." << endl;
//				cout << "Your total score is: " << score << endl << endl;
//				cout << "                                                                    GAME_OVER" << endl;
//				cout << "****************************************************************************************************************************************************" << endl;
//				cout << "*****************************************************************[ WON THE GAME ]*******************************************************************" << endl;
//				cout << "****************************************************************************************************************************************************" << endl;
//				file << "Result: " << feedback1 << endl;
//				break;
//			}
//
//			else if (diff >= 40 && attempts != 0 && score != 0)
//			{
//				cout << endl;
//				cout << "\t\t\t\t\t\t\t\t " << "Way off. " << endl;
//				--attempts;
//				score -= 10;
//
//				cout << "Attempts left are: " << attempts << endl;
//			}
//
//			else if (diff >= 20 && diff < 40 && attempts != 0 && score != 0)
//			{
//				cout << endl;
//				cout << "\t\t\t\t\t\t\t\t "<<"Still quite far" << endl;
//				--attempts;
//				score -= 10;
//				cout << "Attempts left are: " << attempts << endl;
//			}
//
//			else if (diff >= 10 && diff < 20 && attempts != 0 && score != 0)
//			{
//				cout << endl;
//				cout << "\t\t\t\t\t\t\t      "<<"You're' getting close" << endl;
//				--attempts;
//				score -= 10;
//				cout << "Attempts left are: " << attempts << endl;
//			}
//			else if (diff < 10 && attempts != 0 && score != 0)
//			{
//				cout << endl;
//				cout << "\t\t\t\t\t\t\t\t " << "Almost there!" << endl;
//				--attempts;
//				score -= 10;
//				cout << "Attempts left are: " << attempts << endl;
//			}
//			if (hints >= 0)
//			{
//				string hint;
//				cout << endl;
//				cout << "Do you want hint? (yes / no): ";
//				cin >> hint;
//				if (hint != "yes" && hint != "no" && hint != "Yes" && hint != "No") {
//					while (hint != "yes" && hint != "no" && hint != "Yes" && hint != "No")
//					{
//						cout << "!!! INVALIDE INPUT !!!" << endl;
//						cout << "Do you want hint? (yes / no): ";
//						cin >> hint;
//						continue;
//					}
//				}
//
//
//
//				if ((hint == "yes" || hint == "Yes") && hints == 0)
//				{
//					cout << "!!! YOU CANNOT TAKE MORE THAN 6 HINTS !!!" << endl;
//					continue;
//				}
//
//				if (hint == "yes" || hint == "Yes" && hints != 0)
//				{
//					cout << endl;
//					if (ran_num > user_input)
//					{
//						cout << "! Now you have to Guess a number greater then your previous Guess to { W I N }" << endl;
//					}
//					else if (ran_num < user_input)
//					{
//						cout << "! Now you have to Guess a number lower then your previous Guess to { W I N }" << endl;
//					}
//					type(ran_num);
//					cout << endl;
//					--attempts;
//					score -= 5;
//					--hints;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//				else if (hint == "no" || hint == "No")
//				{
//					cout << endl;
//				}
//
//				continue;
//			}
//		}
//		file << "Final Score: " << score << endl;
//		file << "--------------------------------------";
//		file.close();
//	}
//
//		//now for secnd level 
//
//		if (level == "medium") {
//			string feedback1 = " won the game ";
//			string feedback2 = " lose the game ";
//			int attempts, hints, score, limit, ran_num = 0;
//			ofstream file("score.txt");
//			file << "Player Name: " << name_of_user << endl;
//			file << "Difficulty: " << level << endl;
//			cout << endl << endl;
//			cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
//			cout << "-----------------------------------------------------------------[ MEDIUM MODE ]--------------------------------------------------------------------" << endl;
//			cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
//			attempts = 10;
//			hints = 4;
//			score = 120;
//			limit = 100;
//			cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< RULES FOR MEDIUM MODE ARE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl << endl;
//			cout << "=> Your current total attemtps are: " << attempts << endl;
//			cout << "=> your current total points right now are: " << score << endl;
//			cout << "=> You have to guess a number between 1 & " << limit << "." << endl;
//			cout << "=> On each wrong answer you will LOOSE 1 ATTEMPT and 10 POINTS" << endl;
//			cout << "=> You have total " << hints << " hints for guesing the number";
//			cout << "=> On each hint you will loose 1 ATTEMPT and 5 POINTS" << endl;
//			cout << "=> As you are left with 15 points or below you can not take hints." << endl;
//			cout << "=> If the you are out of score or attempts the game will be ended at that moment" << endl;
//
//			int x = time(0);
//			srand(x);
//			ran_num = (rand() + 1) % (limit - 1);
//			cout << rand() << endl;
//			cout << ran_num;
//			//cout << ran_num << endl;
//			cout << endl;
//			if (ran_num == 0)
//			{
//				ran_num = 1;
//			}
//			cout << endl;
//			cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl << endl;
//			for (int i = 12;i >= 1;i++) {
//				if (attempts == 0 || score == 0) {
//
//					score = 0;
//					cout << " You have lost the game" << endl;
//					cout << " Attempts left are: " << attempts << endl;
//					cout << " Your score is: " << score << endl;
//					cout << " The unknown number was: " << ran_num << endl;
//					cout << endl << "GAME_OVER" << endl;
//					file << "Result: " << feedback2 << endl;
//					break;
//				}
//				int user_input = 0;
//				while (true) {
//					cout << "Enter your guess (an integer): " << "\t\t\t\t\t       ";
//					cin >> user_input;
//					if (cin.fail()) {
//						cin.clear();
//						cin.ignore(1000, '\n');
//						cout << "Invalid input! Please enter an integer only." << endl;
//						continue;
//					}
//					if (user_input < 1 || user_input > limit) {
//						cout << "!!! PLEASE ENTER A NUMBER BETWEEN 1 AND " << limit << " !!!" << endl;
//						continue;
//					}
//					break;
//				}
//
//				if (user_input < int(1) || user_input > int(limit)) {
//
//					while (user_input < int(1) || user_input > int(limit))
//					{
//						cout << endl;
//						cout << "!!! PLEASE ENTER A NUMBER BETWEEN 1 AND 100 !!!" << endl << endl;
//						cout << "Re-enter your guess (an integer): ";
//						cin >> user_input;
//						continue;
//					}
//				}
//
//				int diff = abs(ran_num - user_input);
//
//				if (diff == 0 && attempts != 0) {
//					cout << endl;
//					cout << "Correct!You have guessed the number(" << user_input << ")." << endl;
//					--attempts;
//					cout << "Yuo completed the game in " << 10 - attempts << " attempts." << endl;
//					cout << "Your total score is: " << score << endl << endl;
//					cout << "                                                                    GAME_OVER" << endl;
//					cout << "****************************************************************************************************************************************************" << endl;
//					cout << "*****************************************************************[ WON THE GAME ]*******************************************************************" << endl;
//					cout << "****************************************************************************************************************************************************" << endl;
//					break;
//				}
//
//				else if (diff >= 40 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t\t " << "Way off. " << endl;
//					--attempts;
//					score -= 10;
//
//					cout << "Attempts left are: " << attempts << endl;
//				}
//
//				else if (diff >= 20 && diff < 40 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t\t "<<"Still quite far" << endl;
//					--attempts;
//					score -= 10;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//
//				else if (diff >= 10 && diff < 20 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t      "<<"You're' getting close" << endl;
//					--attempts;
//					score -= 10;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//				else if (diff < 10 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t\t " << "Almost there!" << endl;
//					--attempts;
//					score -= 10;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//				if (hints >= 0)
//				{
//					string hint;
//					cout << endl;
//					cout << "Do you want hint? (yes / no): ";
//					cin >> hint;
//					if (hint != "yes" && hint != "no" && hint != "Yes" && hint != "No") {
//						while (hint != "yes" && hint != "no" && hint != "Yes" && hint != "No")
//						{
//							cout << "!!! INVALIDE INPUT !!!" << endl;
//							cout << "Do you want hint? (yes / no): ";
//							cin >> hint;
//							continue;
//						}
//					}
//
//
//
//					if ((hint == "yes" || hint == "Yes") && hints == 0)
//					{
//						cout << "!!! YOU CANNOT TAKE MORE THAN 4 HINTS IN MEDIUM LEVEL !!!" << endl;
//						continue;
//					}
//
//					if (hint == "yes" || hint == "Yes" && hints != 0)
//					{
//						cout << endl;
//						if (ran_num > user_input)
//						{
//							cout << "Now you have to Guess a number greater then your previous Guess to { W I N }" << endl;
//						}
//						else if (ran_num < user_input)
//						{
//							cout << "Now you have to Guess a number lower then your previous Guess to { W I N }" << endl;
//						}
//						cout << endl;
//						type(ran_num);
//						cout << endl;
//						--attempts;
//						score -= 5;
//						--hints;
//						cout << "Attempts left are: " << attempts << endl;
//					}
//					else if (hint == "no" || hint == "No")
//					{
//						cout << endl;
//					}
//
//					continue;
//				}
//			}
//			file << "Final Score: " << score << endl;
//			file << "--------------------------------------";
//			file.close();
//		}
//
//
//		//NOW FOR THIRD LEVEL 
//
//		if (level == "hard") {
//			string feedback1 = " won the game ";
//			string feedback2 = " lose the game ";
//			int attempts, hints, score, limit, ran_num= 0,three=0;
//			ofstream file("score.txt");
//			file << "Player Name: " << name_of_user << endl;
//			file << "Difficulty: " << level << endl;
//			cout << endl << endl;
//			cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
//			cout << "-----------------------------------------------------------------[ HARD MODE ]----------------------------------------------------------------------" << endl;
//			cout << "----------------------------------------------------------------------------------------------------------------------------------------------------" << endl << endl << endl;
//			attempts = 8;
//			hints = 2;
//			score = 90;
//			limit = 200;
//			cout << "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< RULES FOR HARD MODE ARE >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl << endl;
//			cout << "=> Your current total attemtps are: " << attempts << endl;
//			cout << "=> your current total points right now are: " << score << endl;
//			cout << "=> You have to guess a number between 1 & " << limit << "." << endl;
//			cout << "=> On each wrong answer you will LOOSE 1 ATTEMPT and 10 POINTS" << endl;
//			cout << "=> You have total " << hints << " hints for guesing the number";
//			cout << "=> On each hint you will loose 1 ATTEMPT and 5 POINTS" << endl;
//			cout << "=> As you are left with 15 points or below you can not take hints." << endl;
//			cout << "=> If the you are out of score or attempts the game will be ended at that moment" << endl;
//
//			int x = time(0);
//			srand(x);
//			ran_num = (rand() ) % (limit);
//			cout << rand()<<endl;
//			cout << ran_num;
//			//cout << ran_num << endl;
//			cout << endl;
//			if (ran_num == 0)
//			{
//				ran_num = 1;
//			}
//			cout << endl;
//			cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl << endl;
//			for (int i = 12;i >= 1;i++) {
//				if (attempts == 0 || score == 0) {
//					
//					score = 0;
//					cout <<  feedback2 << endl;
//					cout << " Attempts left are: " << attempts << endl;
//					cout << " Your score is: " << score << endl;
//					cout << " The unknown number was: " << ran_num << endl;
//					cout << endl << "GAME_OVER" << endl;
//					file << "Result: " << feedback2 << endl;
//					break;
//				}
//				int user_input = 0;
//				while (true) {
//					cout << "Enter your guess (an integer): " << "\t\t\t\t\t      ";
//					cin >> user_input;
//					if (cin.fail()) {
//						cin.clear();
//						cin.ignore(1000, '\n');
//						cout << "Invalid input! Please enter an integer only." << endl;
//						continue;
//					}
//					if (user_input < 1 || user_input > limit) {
//						cout << "!!! PLEASE ENTER A NUMBER BETWEEN 1 AND " << limit << " !!!" << endl;
//						continue;
//					}
//					break;
//				}
//
//				if (user_input < int(1) || user_input > int(limit)) {
//
//					while (user_input < int(1) || user_input > int(limit))
//					{
//						cout << endl;
//						cout << "!!! PLEASE ENTER A NUMBER BETWEEN 1 AND 200 !!!" << endl << endl;
//						cout << "Re-enter your guess (an integer): ";
//						cin >> user_input;
//						continue;
//					}
//				}
//
//				int diff = abs(ran_num - user_input);
//
//				if (diff == 0 && attempts != 0) {
//					cout << endl;
//					cout << "Correct!You have guessed the number(" << user_input << ")." << endl;
//					--attempts;
//					cout << "Yuo completed the game in " << 8 - attempts << " attempts." << endl;
//					cout << "Your total score is: " << score << endl << endl;
//					cout << "                                                                    GAME_OVER" << endl;
//					cout << "****************************************************************************************************************************************************" << endl;
//					cout << "*****************************************************************[ WON THE GAME ]*******************************************************************" << endl;
//					cout << "****************************************************************************************************************************************************" << endl;
//					file << "Result: " << feedback1 << endl;
//					break;
//				}
//
//				else if (diff >= 40 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t\t  " << "Way off. " << endl;
//					--attempts;
//					score -= 10;
//
//					cout << "Attempts left are: " << attempts << endl;
//				}
//
//				else if (diff >= 20 && diff < 40 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t\t  "<<"Still quite far" << endl;
//					--attempts;
//					score -= 10;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//
//				else if (diff >= 10 && diff < 20 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t       "<<"You're' getting close" << endl;
//					--attempts;
//					score -= 10;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//				else if (diff < 10 && attempts != 0 && score != 0)
//				{
//					cout << endl;
//					cout << "\t\t\t\t\t\t\t\t " << "Almost there!" << endl;
//					--attempts;
//					score -= 10;
//					cout << "Attempts left are: " << attempts << endl;
//				}
//				if (hints >= 0)
//				{
//					string hint;
//					cout << endl;
//					cout << "Do you want hint? (yes / no): ";
//					cin >> hint;
//					if (hint != "yes" && hint != "no" && hint != "Yes" && hint != "No") {
//						while (hint != "yes" && hint != "no" && hint != "Yes" && hint != "No")
//						{
//							cout << "!!! INVALIDE INPUT !!!" << endl;
//							cout << "Do you want hint? (yes / no): ";
//							cin >> hint;
//							continue;
//						}
//					}
//
//
//
//					if ((hint == "yes" || hint == "Yes") && hints == 0)
//					{
//						cout << "!!! YOU CANNOT TAKE MORE THAN 4 HINTS IN MEDIUM LEVEL !!!" << endl;
//						continue;
//					}
//
//					if (hint == "yes" || hint == "Yes" && hints != 0)
//					{
//						cout << endl;
//						if (ran_num > user_input||ran_num>(limit/2))
//						{
//							cout << "Now you have to Guess a number greater then your previous Guess to { W I N }" << endl;
//						}
//						else if (ran_num < user_input)
//						{
//							cout << "Now you have to Guess a number lower then your previous Guess to { W I N }" << endl;
//						}
//						cout << endl;
//						type(ran_num);
//						cout << endl;
//						--attempts;
//						score -= 5;
//						--hints;
//						cout << "Attempts left are: " << attempts << endl;
//					}
//					else if (hint == "no" || hint == "No")
//					{
//						cout << endl;
//					}
//
//					continue;
//				}
//			}
//			file << "Final Score: " << score << endl;
//			file << "--------------------------------------";
//			file.close();
//		}
//
//
//	
//		cout << endl << endl << endl;
//		return 0;
//}
