<h1>Number Guessing game</h1>
<h2>Powered by: <b>WARAV</b></h2> 

🎮 I have developed a number guessing game using the C++ programming language 💻. This project was created as part of a university assignment 📚, where the primary requirement was to utilize only the basic concepts of C++ without incorporating any advanced libraries or frameworks 🚫📦. As a result, the game does not include any graphical elements 🎨🖼️ since I was not permitted to use libraries like SFML or similar tools to enhance the visuals.

🔢 The game is designed to focus purely on logic 🧠 and functionality ⚙️, showcasing my understanding of fundamental programming concepts such as loops 🔁, conditional statements ❓✅, functions 📂, and random number generation 🎲🔢. Despite the absence of advanced graphics, the game offers an engaging and interactive experience 🎉🕹️ by challenging users to guess a randomly generated number within a specified range.

💡 This project not only highlights my proficiency in C++ 💻🎓 but also demonstrates my ability to work within constraints 🧱 and deliver functional results ✅🔥. It serves as an excellent example of how creativity 🌟 and problem-solving 🛠️ can be applied to develop an enjoyable game, even with limited resources.

✨ I’m thrilled to explore more opportunities 🚀🚪 to enhance my programming skills and create even more dynamic, visually appealing projects in the future! 🌈📈
*********

<h2>Introduction:</h2>
Creating simple interactive games happens to be one of the most effective ways in the field of computer programming for developers, especially beginners, to understand basic programming concepts. This report outlines the development process of a number-choosing game implemented in C++. The player is supposed to guess a number that is randomly generated within a defined range.

This game will enhance the understanding of some very important programming principles such as:
1.	Loops **(while, for, do while)**
2.	Conditionals **(if, else, switch case, statements)**
3.	Random number generation **(rand, s rand & use of new library (cstdlib) )**
4.	Even input validation. 
5.	Additionally, this will build Problem-solving skills 
6.	Provide an interface for anybody who may be interested in something that is not only fun but educational too.

This game is therefore not just about having a tool that has practical hands-on experience of C++ basic aspects but fun for new developers such as me. This project is a great example of how interactive software can be developed using core programming constructs. Throughout the process of development, extra care was taken to ensure the game plays intuitively and responds quickly, 
being simple with code structure, i.e. usage of **(if, else statements)** only as conditions.

![image](https://github.com/user-attachments/assets/6185dd53-d986-4299-8908-60e1b4dedde3)


***************************************

<h2>Problem analysis</h2>
A good number-guessing game needs quite a few steps for fluid gameplay as well as robust error handling. Here are the key problems that were encountered in this regard:

<h3>1.	Mechanism To Take Difficulty Level Of Game From User:</h3>
                                                          The first challenge is to design the system, where the game takes input of user that what kind of difficulty level he or she want to play. In interactive games, taking the difficulty level input from the user is a crucial step to ensure personalized gameplay. The mechanism involves presenting the user with predefined difficulty levels **(e.g., Easy, Medium, Hard)** at the start of the game. This input can be collected using simple methods such as menu selection or text-based input.
                                                          
![image](https://github.com/user-attachments/assets/feded858-6d3d-43d7-a5cf-5b646d896b9b)

**getline(cin, level)** is used here, this is because when function such as string I called in my programing code then then it just takes the only one complete word note the whole line .
For example: if I enter my name such as Muhammad Waleed, then without using getline it just takes Muhammad only, not the complete line so that’s why I used getline command to take the whole line.

<h3>2.	Random Number Generation:</h3>
                                       To generate a number  a number between a given range is another challenging step. In C++, this has been accomplished using the rand() function in such a way that for each iteration, it will offer a new number to guess for. To make this I have to include a library named:
<div align="center"><h2>#include-cstdlib- &  #include-ctime-</h2></div>
The player must enter their guess through the console. Input should be validated to ensure that it is a number and falls within the defined range. Non-numeric input should be handled carefully to avoid crashes or unexpected behavior.

![image](https://github.com/user-attachments/assets/56081143-db9d-4aba-8d46-e4cadf94b215)

*************************************

<h3>3.	Game Logic:</h3>
               The game must check if the guess of the player is correct, too high, or too low. In case of an incorrect guess, the program should provide feedback and ask the player to guess again.

               
![image](https://github.com/user-attachments/assets/5d651fbf-3706-439b-9d28-d1f2639d2091)

<h3>4.	Feedback Mechanism:</h3>
                                The effective feedback loop must be established in the game so that the player gets guided through the process. It should give the player feedback that the guess is too high or too low and display the number of attempts taken to guess correctly.


![image](https://github.com/user-attachments/assets/25351bc9-ce5b-4829-ab3c-a5f5b1f7ee3a)

<h3>5.	End Conditions:</h3>
                             The game should be closed when either the correct number is guessed or exceeded several allowed guesses. When the player fails to guess the number before the set limit, the game should include the right number in the messages.


![image](https://github.com/user-attachments/assets/072f4702-6b92-4967-b85f-e5369059d17a)

********************
<h2>Design Requirement</h2>
For the game to meet user and technical expectations and work efficiently, several key design requirements were defined:

<h3>1.	Functional Requirements:</h3>

a.	The game produces a random number between some predefined range, such as (1 to 100).<br>
b.	The player inputs his or her guess using the keyboard.<br>
c.	The game compares the guess against the generated number and provides feedback, such as "Way Far", "Still Away", or "Almost There!!"<br>
d.	The game tracks the count of guesses and allows the player to retry for the correct number till he exhausts his attempts.<br>

<h3>2.	Non-Functional Requirements:</h3>

a.	Performance: The game must be able to run without a delay. Input handling and feedback must be immediate, with no perceived lag or system slowdown.<br>
b.	Reliability: The game should be robust, in that it must be able to handle different kinds of incorrect input, such as non-numeric values or inputs outside the acceptable range, without crashing.<br>
c.	Usability: The game should be easy to learn and play. The interface could be text-based but should have clarity and conciseness for simple technical knowledge among players.<br> 

************************

<h2>Fesibility analysis:</h2>
<h3>1.	Technical Feasibility:</h3>
                                    The game has been developed using **C++** that provides all the tools required to complete the   tasks. **C++** has a very rich standard library such as cstdlib , cmath ,with functions like **rand() & sqrt(), pow()** for generating random numbers and handling input/output via cin and cout. The project uses basic programming constructs like loops, conditionals, and simple input/output operations that make it feasible for a beginner to understand and modify it.

![image](https://github.com/user-attachments/assets/b7ddc28d-65e1-4191-b5ac-1b84593fa29b)

![image](https://github.com/user-attachments/assets/a218214b-5551-43fe-b47b-92430468da50)

*********************
<h3><b>1.	Initialization:</b></h3>

Welcome message along with the reference of creators

![image](https://github.com/user-attachments/assets/1bcf0860-badb-47ce-a82a-319eb661d467)
*****************
<h3><b>2.	Game Loop:</b></h3>

![Picture1](https://github.com/user-attachments/assets/8f493c27-b2c2-4069-b27e-fb65df5b1153)

<h3>Ask the player to guess the number.</h3>
	
	If the guess is too high, display "Way Far"
	If the guess is too low, display "Coming closer"
	If the guess is correct, display "Congratulations! You guessed the number!"
	Continue until the player guesses the number or runs out of attempts.
*********************

<h2>CONCLUSION</h2>

In conclusion, the creation of the number-guessing game in C++ has served as an excellent opportunity to solidify fundamental programming concepts. The key insights gained from this project include:
•	<h3>Mastery of Core Programming Concepts:</h3> Developing the game provided hands-on experience with essential programming elements, such as:
1.	<h3>Loops</h3> (while, for, do-while)
2.	<h3>Conditional Statements</h3> (if, else, switch-case)
3.	<h3>Random Number Generation</h3> (using rand, srand, and the cstdlib library)
4.	<h3>Input Validation</h3>
5.	<h3>Enhancing Problem-Solving Abilities</h3>

•	**Interactive and Educational Experience:**<br>
The game not only provides an engaging and fun experience but also serves as an educational tool for anyone eager to explore programming through interactive software.<br>

•	**Practical Application of C++ Fundamentals:**<br>
This project was a hands-on way to implement basic C++ concepts, demonstrating how foundational programming techniques can be applied to create an interactive and user-friendly game.<br>

•	**Simple and Intuitive Design:**<br>
Throughout the development process, special attention was given to creating a game that is easy to understand and responsive, with a straightforward code structure centered around if-else statements for logical decision-making.<br>

•	The number-choosing game developed in C++ is a simple yet effective tool for learning the basic concepts of programming. It combines essential programming techniques such as loops, conditionals, and random number generation, offering an interactive and educational experience. With further enhancements, such as multiplayer modes and graphical interfaces, this game could evolve into a more complex and enjoyable experience.

________________________________________
**In summary**, this project illustrates how fundamental programming skills can be used to create both an enjoyable and educational tool, benefiting new developers and those learning the basics of C++ programming.

<br><br>
<h6><p align="center">copyrights © 2025 MUHAMMAD WALEED | All rights reserved </h6> </p>
