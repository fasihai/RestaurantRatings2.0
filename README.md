# RestaurantRatings2.0
Another main program divided into independently-running sections.
Whenever you use a file, you must open it and check for successful open. If the open fails, display an appropriate error message and end the program with RC=4. At the end of your program, close any opened files. CIN and COUT don’t require closing.
Part 1. Restaurant ratings.
You’ll make several changes to the code you wrote for assignment 4.1.
1. Copy the file named a42data1.txt to your directory. The file is similar to the file a41data.txt, but will be in fixed format. Record 1 still contains the name of the rater as the only field. All the other records contain a restaurant name and a rating, but in this exact format:
positions 0-14 restaurant name (may contain blanks)
position 15 rating
2. Use getline to read fields from the input file, so that you can accept input containing embedded blanks.
3. You’ll need to read each restaurant/rating record into a string, then use the substr function to parse it into the
individual restaurant and ratings fields. And you’ll need to then use the stoi function to convert the rating into an
integer.
4. Add some functionality to the ratings report you created. Display the number of restaurants reviewed, and the
average rating. Sample output:
Restaurant Ratings
Name of rater – Dave
Restaurant and Rating – McDonald’s 5 Restaurant and Rating – Rancho Grande 5 Restaurant and Rating – In-n-Out 4 Restrurant and Rating – Five Guys 3 Total Number of Restaurants - 4
Average Rating - 4.25
Part 2. Prepaid phone usage / recharging.
Copy the file named a42data2.txt to your directory. The file contains one record that represents a cell phone user. The record contains a string with an account ID, followed by an integer with the starting number of minutes available for use by that account. The record has this exact format:
positions 0-9 account ID (a mix of letters and digits)
position 10-13 number of minutes
Assume that the input file contains only valid data. Hard-code the file path like you did in part 1. Display the account ID and starting minutes with appropriate labels, and close the file.
Now your program will process a set of input transactions from the user. The transactions may add to, or subtract from, the number of minutes available.
Prompt the console user for a transaction to change the number of minutes available for the account. The transaction will be of the form:
transactioncode minutes
where “transactioncode” is the letter A, C, or Q, and “minutes” is an integer.
If the transaction code is an A (for add), add the number of minutes to the balance. If the code is a C (for call), subtract the number of minutes from the balance. The Q code means Quit (stop). Your code must validate the transaction code. If the user enters something other than A, C, or Q, display an error message and prompt for the tran code again.
You can assume that the minutes field is valid – it is a positive integer and does not contain any non-digits. Ths means you can use the >> operator and cin. When you test you code remember to enter only valid data!
When the code is C for call, your program must detect if the call is trying to use more minutes than are available. If that’s the case, display an error message and prompt for the tran code again.
When the user enters “Q,” it means that they are done with input. At this point, open a file with file name a42data2out.txt and write one record, with the same format as the input record: the account ID in positions 0-9, and the new number of minutes in positions 10-13. When your program is complete, you’ll see a new file in your directory. Open the file using a text editor (notepad/wordpad for windows or textedit for the mac) and make sure that the file is formatted correctly, and that the values are correct.
Sample session:
Input file contains:
123-QW-47656
Note that this is a ten-character account number (123-QW-476) followed by the number 56.
Then a sample console session would resemble the following:
Account number 123-QW-476
Current balance: 56 minutes
Enter A or C followed by the minutes, or Q to stop A 10
You added 10 minutes
The new minutes balance is 66
Enter A or C followed by the minutes, or Q to stop C 45
You made a call for 45 minutes
The new minutes balance is 21
Enter A or C followed by the minutes, or Q to stop C 34
You don’t have enough minutes to make the call! Enter A or C followed by the minutes, or Q to stop B 12
That’s not a valid transaction code!
Enter A or C followed by the minutes, or Q to stop A 10
The new minutes balance is 31 Q
Thank you, have a nice day!
... and the program would replace the contents of the file with this record: 123-QW-47631
When you test your program, make sure you try all possible combinations of valid and invalid user transactions. Also, inspect the file when your program ends to make sure that the data you created is correct.
Part 3. Sport stars
Copy the file named a42data3.txt to your directory. It contains a list of sports stars, one person per record. Some have a first and last name, some also have a middle name, and some go by only one name. As you read the file, count the number of records, and count the number of stars whose names begin with upper-case “L.” At EOF, display the total number of records and the number of names beginning with “L.”
Sample output would resemble:
Luca Modric
Abby Wambach Neymar
Alexi Lalas
Lionel Messi
Zlatan Ibrahimovic Lauren Holiday
*** end of input ***
7 total names
3 names begin with “L”
