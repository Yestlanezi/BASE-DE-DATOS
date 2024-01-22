

//"Capitulo 1 "

a) what is SQL and why is itf useful? 
	que es SQL y porque es util? 

	Respuesta: Es un lenguaje estructurado, que le permite al usuario diseñar, manipular y controlar información en un RDBMS (sistema de gestion de base de datos relacionable).

b) Try match each of the SQL comands on the left with a verb from the list on the ringht. 

	Respuesta: 

	1. Create         	b. define
	2. Undate			a. manipulate
	3. Grant			c. control 

c) wwhy is it important to crontrol acces to data in a database? 
	porque es importante el controlar el acceso de informacion en una base de datos? 

	respuesta: Puede contener información sensible, por lo tanto los usuarios tienen acceso limitado. Algunos usuarios estan permitidos a consultar cierta inforkación, pero no a cambiarla. 

d) how is data organozed in a relational database? 
	como se organiza la información en una base de datos relacional? 

	respuesta: Se organiza similarmente a una tabla que utiliza filas y columnas. 

e) Is it possible to hace a table with no rows at all? 
	Es posible tener una tabla tabla sin filas. 

	Respuesta: Es posible, pero no es muy util tener una tabla sin información. 

f) Figure 1.5 displays an EMPLOYEE table and a DEPARTMENT table, identifi the columns you consider to be the primary key and foreing key folumns. 
	muestra la tabla empleado y la tabla departamento identifica las columnas que consideres que son la llave primaria y las columnas de la llave foranea. 

	Respuesta: la llave primaria de la tabla empleado es "EMPLOYEE_ID"
				la llave primaria de la tabla departamento es "DEP_NO"
				"DEP_NO" es la llave foranea de la tabla empleado

g) would it be possible to insert into the EMPLOYEE table an employee with a DEPT_NO of 10? 
	
	Respuesta: No es posible 


"Lab 1.1 Quiz"

	1) A university's of students and the clasess they are enrolled in is an example of a database system. 
		True 

	2) A table must always contain both columns and rows. 
		True 

	3) Referential integrity ensures that each value in a foreign key column of the clid tables links to a mutching primary key value in the parent table. 
		True 

	4) A null value means that the value is unknown. 
		False 


Lab 1.2 exercises 

	a) Describe the nature of the relationship between the ORDER_HEARD table and the ORDER_DETAIL table in Figure 1.24 

		Respuesta: Es una relación una a varias 


	b)  One of the tables in Figure 1.25 is not fully normalized witch normal form in violated draw a new diagram. 

		Respuesta: First normal form(INF)	No repeating groups are permited
					Second Normal form(2NF)  No portail key dependencies are permited 
					third normal form(3NF)	 No nonke dependencies are permited 

		si hay atributos que no tienen relacion con la clave primaria hay que eliminarlos y colocarlos en una tabla separada
		relacionando ambas tablas por medio de una clave externa. 

	c) How woul Figure 1.25 need to be changed to add information about the sales representative who took the order? 

		Respuesta: Se agrega la tabla "sales person" donde SALES_REP_ID(FK) se convierte en la llave foranea 

	d) How would Figure 1.26 need to be changed if an employee does not have to belong to a departament? 

		Respuesta: 
			EMPLOYEE 					
		---------------------
		|EMPLOYEE_ID (FK)	|						DEPARTMENT
		|FIRST_NAME			|				   ___________________
		|LAST_NAME			|->° ----------°  |DEPARTAMENT_ID (FK)|
		|SSN				|				  |DEPARTAMENT_DAME   |
		|DEPARTAMENT_ID (FK)|				  --------------------
		--------------------

	e) Based on Figure 1.26 would the social segurity numer (SSNN) column be a better primary key comun that the EMPLOYEE_ID column? 
	
		Respuesta: No, porque el numero de seguro social puede repetirse 

	f) Figures 1.27 and 1.28 depict the logical and physical model of a factorial movie rental database. 
		what diferences exist between the entity relationship diagram and the physical schema diagram? 

		Respuesta: 

	"Lab 1.2 Quiz"

	in order to test your progress you should be able to answer the following questions 

		1)	An entity relationship diagram dects entitles, atributes, and tables 
				True 

		2)	The crow's foot depicts the M of a 1:M relationship 
				True  

		3) 	Repeating groups are a violation of the first normal form 
				True 

		4)	The logical model is derived form the schema diagram 
				False

		5)	The concept of denormalitation deals with eliminating redundacy
				False

		6) 	Wneh you issue a SQL statement, you are concerned with the logical desing of the database 
				True 

		7)	in a mandatory relationship, null values, are not allowed in the foreing key column
				True 

		8)	A nonidentifying relationship means that the foreing key is propagated as a nonkey atribute in the child entity or child table 
				True 


	"Lab 1.3 Exercises"

	a) what does the STUDENT schema diagram represent? 

		Respuesta: Es una representación grafica de las tablas de una base de datos 

	b) Does the STUDENT schema diagram to all tables in the STUDENT schema diagram? 
		
		Respuesta: El diagrama de STUDENT te dice como esta organizada la base de datos 

	c) what four columns are common to all tables in the STUDENT schema diagram? 
	
		Respuesta: Las cuatro columnas son CREATED_BY, CREATED_DATE, MODIFIED_BY y MODIFIED_DATE

	d) what is the primary key of the COURSE table? 

		Respuesta: La llame primaria es COURSE_NO 

	e) How many primary keys does the ENROLLMENT table have? Name the columns(s).
		
		Respuesta: Solo puede tener una, la llame primaria consiste en dos columnas 
					STUDENT_ID y SELECTION_ID

	f) How many foreing keys does the SELECTION table have? 

		Respuesta: Tiene dos 
					las llaves foraneas son: COURSE_NO y INSTRUCTOR_ID 

	g) will a foreing key columns in a table accept any data value? 
		
		Respuesta: No puede, solo puede aceptar los valores de la llave primaria 

	h) To make the relationship between the ZIPCODE and STUDENT tables optional, what would have to change in the STUDENT table? 
		
		Respuesta: La llave foranea sera la columna del codigo postal en la tabla estudiante 

	i) from what domain of values that is what column in what table does the PREREQUISITE column of the COURSE table get its values? 
		
		Respuesta: de la columna CORUSE_NO en la tabla COURSE 

	j) Explain the relationship(s) the ENROLLEMENT table has to other table(s)

		Respuesta: la tabla estudiante y seccion son las tablas principales para la tabla inscripcion 


"LAb 1.3 Quiz "

	1) what role(s) does the STUDENT_ID column play in the GRADE table? 
		a) part of composite primary key 
		c) foreing key 

	2) the GRADE_TYPE table does not allow values to be NULL in any column
		True 

	3) the numer of columns in a table matches the number of rows in tha table 
		False

	4) the SECTION table has no foreing key columns 
		False

	5) a table can contair 10 millon rows 
		True 

	6) A primary key may contain NULL values. 
		True

	7) A column name must be unique withn a table. 
		True 

	8) if a table is a child table in three diferent one to many relationships, how many foreing key 
		c) Three or more 

	9) referential integrity requires the relationship between key and primary key to maintain value from the same domain 
		False 


*****************************************************
¨¨¨¨¨¨¨¨¨¨¨¨¨ Chapter 2. SQL: The basics¨¨¨¨¨¨¨¨¨¨¨¨¨ 
*****************************************************


***************Lab 2.1 Exercises***************

2.1.1 Identify Oracle's Client/Server Software 

	a) Idenfity whitch piece of oracle software is the client, which is the server, and how they communicate with each other.
		answer: SQL *plus es el cliente y Oracle es el servidor. 

	b) what is the role of SQL between client and server? 
		answer: los comandos de SQL son introducidos por el cliente 

2.1.1 login and logout of SQL *plus 

	a) once you have logged into SQL ¨plus with the user ID student and pawssword LEARD, what information does the SQL *Plus screen show you? 
		answer: 

	b) what do you learn whe you type DESCRIBE student and press Enter? 
		if you use/SQL*Plus, click the execute button instead of pressing enter. 
		answer: 

	c) execute the following command and describe what you se: SHOW ALL.
		answer:

		(respuestas pagina 99 pdf)

***********lab 2.1 Self Review Questions*************

	1) the DESC command displays column names of a table. 

	2) anyone can connect to and oracle databse as long as he or she has the SQL *Plus software

	3) the SQL *Plus command SHOW USER displays your login name 

	4) typing SHOW RELEASE at the prompt displays the version numer of SQL ¨plus you are using.

	5) the COST column of the COURSE table is defined as NUMER (9,2). the maximun cost of an individual course is 9,999,999.99

	(respuestas pagina 102 pdf)


********Lab 2.2 Exercises********

2.2.1 white a SQL SELECT statement 

	a) write a SELECT statement to list the first and last names of all students
		answer: 
	b) write a SELECT statement to list all cities, satates and, zip codes 
		answer: 
	c) describe the result set ot the following SQL statement
		SELECT *
			FROM grade_type 


*******2.2.2 use DISTINCT in a SQL statement********

	a) whi are the result sets of each of the following SQL statement the same? 

		SELECT letter_grade
			FROM grade_conversion

		SELECT DISTINCT letter_grade 
			FROM grade_conversion 

	b) explain the result set of the following SQL statement
		SELECT DISTINCT COST
			FROM course 

	c) explain what happens, and why, when you execute the following SQL statement:
		SELECT DISTINCT COURSE_NO
			FROM class 

		(respuestas pagina 109 PDF)

*********Lab 2.2 Self-Review Questions**********

	1) the column names listed in the SELECT list must be separated by commas

	2) a SELECT list may contain all the columns in a table 

	3) the asterisk may be used as a wildcard in the FROM clause 

	4) the following statement contains an error: 
		SELECT courseno 
			FROM course 

********Lab 2.3 Exercises*******

2.3.1 edit a SQL statement using SQL *plus commands 

	a) using SQL *plus commans, change the column exployer to registration_date and execute the statement again.
		answer:

	b) using SQL *plus commans, add a second column, phone, to the statement you changed. display the PHONE column first, then the REGISTRATION_DATE column, in the result set. 


2.3.2 edit a SQL statement using an editor 

	a) Invoke the editor and change the statement in your buffer to the following. Then save
	the file and execute it in SQL*Plus.
		SELECT salutation, first_name, last_name, phone
 		FROM instructor 

 	answer:

 	b) Edit the preceding statement, which is now in your buffer, save it as inst.sql, and use
	the START or @ command to execute it in SQL*Plus. 

	answer:

	c) Edit inst.sql, save it as inst.x, and use the START or @ command to execute it in
	SQL*Plus. 

	answer: 

2.3.3 save, retrieve, and run a SQL statement in iSQL *Plus 

	a) ) Enter the following SELECT statement into the Workspace area and execute the
	statement. Then save the statement in a file called state_zip.sql and press the Clear
	button. 
	SELECT DISTINCT state
 	FROM zipcode 

	answer: 

	b) Click the Load Script button and then the Browse… button and locate the state_zip.sql
	file you just saved. Then press the Load button to load it into the Workspace. Execute
	the statement. 

	answer: 

	c) Explain the difference between the SQL language and SQL*Plus or iSQL*Plus. 

	answer: 

*******Lab 2.3 self-review Questions*******

	1) You can save a SQL statement to the SQL buffer for it to be referenced later. 

	2) After typing a SQL statement, you can execute it with either the semicolon or the
	forward slash.

	3) You cannot save a .sql file to the A: drive. 

	4) The SQL*Plus START command can execute what is in the SQL buffer. 


**********Lab 2.4 Exercises*********
2.4.1. Use Comparison and Logical Operators in a WHERE Clause 


	a) Write a SELECT statement to list the last names of students living either in zip code
	10048, 11102, or 11209.


	b) Write a SELECT statement to list the first and last names of instructors with the letter "i"
	(either uppercase or lowercase) in their last name living in the zip code 10025.


	c) Does the following statement contain an error? Explain.
		SELECT last_name
 			FROM instructor
				 WHERE created_date = modified_by 

	d) What do you observe when you execute the following SQL statement?
		SELECT course_no, cost
 			FROM course
 				WHERE cost BETWEEN 1500 AND 1000


	e) Execute the following query and determine how many rows the query returns.
		SELECT last_name, student_id
 			FROM student
 				WHERE ROWNUM <= 10 


 	2.4.2. Use NULL in a WHERE Clause

 	a) Write a SELECT statement to list descriptions of courses with prerequisites and cost less
	than 1100.


	b) Write a SELECT statement to list the cost of courses without a prerequisite; do not
	repeat the cost. 

*************Lab 2.4 Self-Review Questions *************

	1) Comparison operators always compare two values only

	2) The BETWEEN operator uses a list of values. 

	3) The following statement is incorrect:
		SELECT first_name, last_name
 			FROM student
 				WHERE employer = NULL 


 	4) The following statement is incorrect:
		SELECT description
 			FROM course
 				WHERE cost NOT LIKE (1095, 1195) 

 	5) The following statement is incorrect:
		SELECT city
 			FROM zipcode
 				WHERE state != 'NY' 


 	6) The following statement returns rows in the STUDENT table where the last name begins
	with the letters SM.
		SELECT last_name, first_name
 			FROM student
 				WHERE last_name = 'SM%' 



************Lab 2.5 Exercises***********

2.5.1. Custom Sort Query Results

	a) Write a SELECT statement to list each city and zip code in New York or
	Connecticut. Sort the result in ascending order by zip code.


	b) Write a SELECT statement to list course descriptions and their prerequisite course
	numbers, sorted in ascending order by description. Do not list courses without a
	prerequisite.


	c) Show the salutation, first, and last name of students with the last name Grant.
	Order the result by salutation in descending order and the first name in ascending
	order.


	d) Execute the following query. What do you observe about the last row returned by
	the query?
		SELECT student_id, last_name
 			FROM student
 				ORDER BY last_name 


**************Lab 2.5 Self-Review Questions**************

	1) The following is the correct order of all clauses in this SELECT statement:
		SELECT ...
 		FROM ...
 		ORDER BY ...
 		WHERE ... 


 	2) You must explicitly indicate whether an ORDER BY is ascending. 



 	3) The following statement is correct:
		SELECT *
 		FROM instructor
 		ORDER BY phone 


 	4) The following statement is incorrect:
		SELECT description "Description",
 				prerequisite AS prereqs,
				course_no "Course#"
 			FROM course
 		ORDER BY 3, 2 

 	5) You can order by a column you have not selected. 






***********************************
***Chapter 3. Character, Number,***
***and Miscellaneous Functions*****
***********************************



Lab 3.1 Exercises 

	3.1.1. Use a Character Function in a SQL Statement
		a) Execute the following SQL statement. Based on the result, what is the purpose of the
				INITCAP function?
					SELECT description "Description",
 						INITCAP(description) "Initcap Description"
							 FROM course
 						WHERE description LIKE '%SQL%' 

 			answer: 	"no corre"



 		b) Write the question answered by the following SQL statement.
				SELECT last_name
 					FROM instructor
 						WHERE LENGTH(last_name) >= 6

 			answer: 


 		c) Describe the result of the following SQL statement. Pay particular attention to the
				egative number parameter.
				SELECT SUBSTR('12345', 3),
 					SUBSTR('12345', 3, 2),
 					SUBSTR('12345', -4, 3)
					 FROM dual 


		d) Based on the result of the following SQL statement, describe the purpose of the LTRIM
			and RTRIM functions.
				SELECT zip, LTRIM(zip, '0'), RTRIM(ZIP, '4')
 				FROM zipcode
				 ORDER BY zip 



		e) What do you observe when you execute the next statement? How would you change
			the statement to achieve the desired result?
				SELECT TRIM('01' FROM '01230145601')
 				FROM dual 


 		f) What is the result of the following statement?
			SELECT TRANSLATE('555-1212', '0123456789',
 										'##########')
 				FROM dual 


 		g) Write the SQL statement to retrieve those students that have a last name with the
			lowercase letter 'o' occurring three or more times.


		h) The following statement determines how many times the string 'ed' occurs in the phrase
		'Fred fed Ted bread, and Ted fed Fred bread.' Explain how this is accomplished.
			SELECT (
 					LENGTH('Fred fed Ted bread, and Ted fed Fred bread.') -
 					LENGTH(REPLACE(
 					'Fred fed Ted bread, and Ted fed Fred bread.',
					'ed', NULL))
 						) /2 AS occurr
 				FROM dual
 				OCCURR
			----------
					 6
			1 row selected.



		3.1.2. Concatenate Strings


		a) Write a SELECT statement that returns each instructor's last name, followed by a
		comma and a space, followed by the instructor's first name, all in a single column in the
		result set.


		b) Using functions in the SELECT list, WHERE, and ORDER BY clauses, write the SELECT
		statement that returns course numbers and course descriptions from the COURSE table
		and looks like the following result set:


		Description
		-------------------------------------
		204.......Intro to SQL
		130.......Intro to Unix
		230.......Intro to Internet
		20........Intro to Computers
		25........Intro to Programming
		120.......Intro to Java Programming
		240.......Intro to the Basic Language
		7 rows selected.



		Lab 3.1 Self-Review Questions

		In order to test your progress, you should be able to answer the following questions

		1) Functions that operate on single values can only have one input parameter. 


		2) The DUAL table can be used for testing functions. 


		3) The same function can be used twice in a SELECT statement. 


		4) The following SELECT statement contains an error:
			SELECT UPPER(description)
 				FROM LOWER(course) 


 		5) The RTRIM function is useful for eliminating extra spaces in a string. 


 		6) Which one of the following string functions tells you how many characters are in a
		string? 


		7) Which result will the following query return?
		SELECT TRIM(' Mary Jones ')
 			FROM dual 


 		8) The functions INSTR, SUBSTR, and TRIM are all single-row functions. 


 		9) Which character function returns a specified portion of a character string? 


 		10) Character functions never return results in the datatype NUMBER. 


***********************************************
Lab 3.2 Exercises 
***********************************************


3.2.1. Use Number Functions and Perform Mathematical
Computations


		a) Describe the effect of the negative precision as a parameter of the ROUND function in
		the following SQL statement.
				SELECT 10.245, ROUND(10.245, 1), ROUND(10.245, -1)
					 FROM dual


		b) Write a SELECT statement that displays distinct course costs. In a separate column,
		show the COST increased by 75% and round the decimals to the nearest dollar.


		c) Write a SELECT statement that displays distinct numeric grades from the GRADE table
		and half those values expressed as a whole number in a separate column. 


******************************
Lab 3.2 Self-Review Questions 
******************************

		1) Number functions can be nested. 

		2) The ROUND function can take only the NUMBER datatype as a parameter. 

		3) The following SELECT statement is incorrect:
		SELECT capacity - capacity
 			FROM section 

 		4) What does the following function return?
		SELECT LENGTH(NULL)
 		FROM dual 




 ***********************************
 Lab 3.3 Exercises 
 ***********************************


3.3.1. Apply Substitution Functions and Other Miscellaneous
Functions


	a) List the last name, first name, and phone number of students who do not have a phone
	number. Display '212-555-1212' for the phone number.


	b) For course numbers 430 and greater, show the course cost. Add another column
	reflecting a discount of 10% off the cost and substitute any NULL values in the COST
	column with the number 1000. The result should look similar to the following output.


		COURSE_NO COST NEW
	-------------- ------- ------
 			430 	1195 	1075.5
			450 				900
	2 rows selected.


	c) Write the query to accomplish the following output using the NVL2 function in the
column 'Get this result'.


		 ID NAME 				PHONE 	Get this result
		------------------ ------------ -----------------
		112 Thomas Thomas  201-555-5555 Phone# exists.
		111 Peggy Noviello  			No phone# exists.
		2 rows selected.


*****************************************************************
3.3.2. Utilize the Power of the DECODE Function and the CASE
Expression
*****************************************************************


	a) Rewrite the query from Exercise 3.3.1 c) using the DECODE function instead.


	b) For course numbers 20, 120, 122, and 132, display the description, course number, and
	prerequisite course number. If the prerequisite is course number 120, display 200; if the
	prerequisite is 130, display 'N/A'. For courses with no prerequisites, display 'None'.
	Otherwise, list the current prerequisite. The result should look like the one listed below. 



	COURSE_NO DESCRIPTION 				ORIGINAL NEW
--------- ------------------------------ -------- ----
 132 Basics of Unix Admin 					130 N/A
 122 Intermediate Java Programming 			120 200
 120 Intro to Java Programming 				80  80
 20 Intro to Computers 							None
	4 rows selected.




	c) Display the student ID, zip code, and phone number for students with student IDs 145,
	150, or 325. For those students living in the 212 area code and in zip code 10048,
	display 'North Campus'. List students living in the 212 area code but in a different zip
	code as 'West Campus'. Display students outside the 212 area code as 'Off Campus'.
	The result should look like the following output. Hint: The solution to this query requires
	nested DECODE functions or nested CASE expressions. 


		STUDENT_ID 	ZIP 	PHONE 			LOC
		---------- ----- --------------- ------------
 		145 		10048 212-555-5555	 North Campus
 		150 		11787 718-555-5555 	 Off Campus
 		325 		10954 212-555-5555 	 West Campus
		3 rows selected

	d) Display all the distinct salutations used in the INSTRUCTOR table. Order them
	alphabetically except for female salutations, which should be listed first. Hint: Use the
	DECODE function or CASE expression in the ORDER BY clause. 

	****************************************
	Lab 3.3 Self-Review Questions 
	****************************************

	1) A calculation with a null always yields another null. 


	2) The following query is valid.

		SELECT NVL(cost, 'None')
			 FROM course

	3) The NVL2 function updates the data in the database. 


	4) The DECODE function lets you perform if-then-else functionality within the SQL
	language. 


	5) The DECODE function cannot be used in the WHERE clause of a SQL statement. 


	
	6) CASE expressions can be used in the ORDER BY clause of a SELECT statement. 


	7) The functions discussed in this lab can be used on the VARCHAR2 datatype only. 


