
set pagesize 99 
set linesize 140 
set colsep '|*| ' 
set null s/Datos

rem [Rischert, 2004,104] 
SELECT description
 FROM course; 

rem [Rischert, 2004,105] 
SELECT description, cost
 FROM course 

rem [Rischert, 2004,106] 
SELECT last_name, zip
 FROM instructor;


rem [Rischert, 2004,112] 
COL cost FORMAT $9,999.99
SELECT DISTINCT cost
 FROM course;

rem [Rischert, 2004,113] 
 SELECT DISTINCT cost
 FROM course; 


 SELECT course_no,description,prerequisite, cost
 FROM course; 

rem [Rischert, 2004,140]
 SELECT description, cost, prerequisite
 FROM course
 WHERE cost = 1195
 AND prerequisite = 20
 OR prerequisite = 25;


  SELECT description, cost, prerequisite
 FROM course
 WHERE 
 prerequisite = 20
 OR prerequisite = 25;


  SELECT description, cost, prerequisite
 FROM course
 WHERE cost = 1195;


 SELECT description, cost, prerequisite
 FROM course
 WHERE cost = 1195
 AND  ( prerequisite = 20
 OR prerequisite = 25);

 SELECT description, cost, prerequisite
 FROM course
 WHERE cost = 1195;

rem [Rischert, 2004,141]
SELECT description, prerequisite
 FROM course
 WHERE description LIKE 'Intro to%'
 AND prerequisite >= 140; 

 rem [Rischert, 2004,141]
SELECT description, prerequisite
 FROM course
 WHERE description LIKE 'Intro to%';

 rem [Rischert, 2004,141]
SELECT description, prerequisite
 FROM course
 WHERE description LIKE 'Intro to%'
 order by 1;

rem [Rischert, 2004,141]
 SELECT description, prerequisite, cost
 FROM course
 WHERE prerequisite IS NULL;

 SELECT description, prerequisite, cost
 FROM course
 order by 2;


SELECT description, prerequisite, cost
 FROM course
 WHERE prerequisite IS NOT NULL;

rem [Rischert, 2004,142]
 SELECT description, prerequisite
 FROM course
 WHERE description LIKE 'Intro to%'
 OR prerequisite >= 140;

 SELECT description, prerequisite
 FROM course
 WHERE description LIKE 'Intro to%'
 AND prerequisite >= 140;

rem [Rischert, 2004,145]
 SELECT last_name
 FROM student
 WHERE zip IN ('10048', '11102', '11209');

 SELECT zip,last_name
 FROM student
 WHERE zip IN ('10048', '11102', '11209');

 SELECT zip,last_name
 FROM student
 WHERE zip IN ('10048', '11102', '11209')
 order by 2;

 SELECT zip,last_name
 FROM student
 WHERE zip IN ('10048', '11102', '11209')
 order by 2 desc;

rem [Rischert, 2004,147]
 SELECT student_id, last_name
 FROM student
 WHERE last_name BETWEEN 'W' AND 'Z';

SELECT count (*) from student;

SeLeCt count (*) from student;

 SELECT student_id, last_name
 FROM student
 WHERE last_name BETWEEN 'W' AND 'Z'
 order by 2; 

rem [Rischert, 2004,148]
SELECT description
 FROM grade_type
 WHERE description >= 'Midterm'
 AND description <= 'Project';

rem [Rischert, 2004,148]
SELECT description
 FROM grade_type;

rem [Rischert, 2004,148]
 SELECT last_name, student_id
 FROM student
 WHERE ROWNUM <= 10;

SELECT count (*) from grade_type;
//se refiere a los tipos de calificaciones 

rem [Rischert, 2004,148]
 SELECT ROWNUM, last_name, student_id
 FROM student
 WHERE ROWNUM <= 10;


rem [Rischert, 2004,152]
 SELECT course_no, description
 FROM course
 WHERE prerequisite IS NULL
 ORDER BY description;

rem [Rischert, 2004,152]
 SELECT course_no, description
 FROM course
 WHERE prerequisite IS NULL
 ORDER BY description DESC;


rem [Rischert, 2004,153]
 SELECT course_no, description
 FROM course
 WHERE prerequisite IS NULL
 ORDER BY 2 DESC;


rem [Rischert, 2004,153]
SELECT first_name first,
 first_name "First Name",
 first_name AS "First"
 FROM student
 WHERE zip = '10025';


rem [Rischert, 2004,153]
 SELECT first_name first, first_name "First Name",
 first_name AS "First"
 FROM student
 WHERE zip = '10025'
 ORDER BY "First Name";


rem [Rischert, 2004,154]
 SQL> SELECT DISTINCT first_name, last_name
 2 FROM student
 3 WHERE zip = '10025'
 4 ORDER BY student_id;


rem [Rischert, 2004,158]
 SELECT student_id, last_name
 FROM student
 ORDER BY last_name; 


rem [Rischert, 2004,159]
SELECT city, zip
 FROM zipcode
 WHERE state = 'NY'
 OR state = 'CT'
 ORDER BY zip;

select count (*) from zipcode;
//distintos 
select DISTINCT state from zipcode;

rem [Rischert, 2004,160]
 SELECT description, prerequisite
 FROM course
 WHERE prerequisite IS NOT NULL
 ORDER BY description;


rem [Rischert, 2004,160]
 SELECT description "Descr", prerequisite
 FROM course
 WHERE prerequisite IS NOT NULL
 ORDER BY "Descr";


rem [Rischert, 2004,161]
SELECT salutation "Sal", first_name "First Name",
 last_name "Last Name"
 FROM student
 WHERE last_name = 'Grant'
 ORDER BY "Sal" DESC, "First Name" ASC;



 //*********************************************
 //				Chapter 3 
 //*********************************************

rem [Rischert, 2004,167]
 SELECT state, LOWER(state), LOWER('State')
 FROM zipcode;

 SELECT UPPER(city), state, INITCAP(state)
 FROM zipcode
 WHERE zip = '10035';

rem [Rischert, 2004,168]
 DESCR dual;


rem [Rischert, 2004,169]
 SELECT LTRIM('0001234500', '0') left,
 RTRIM('0001234500', '0') right,
 LTRIM(RTRIM('0001234500', '0'), '0') both
 FROM dual;


rem [Rischert, 2004,170]
 SELECT last_name,
 SUBSTR(last_name, 1, 5),
 SUBSTR(last_name, 6)
 FROM student; 


rem [Rischert, 2004,171]
 SELECT LENGTH('Hello there')
 FROM dual; 


rem [Rischert, 2004,172]
 SELECT first_name, last_name
 FROM student
 WHERE INSTR(first_name, '.') > 0
 ORDER BY LENGTH(last_name);


rem [Rischert, 2004,173]
 SELECT first_name,
 SUBSTR(first_name, INSTR(first_name, '.')-1) mi,
 SUBSTR(first_name, 1, INSTR(first_name, '.')-2) first
 FROM student
 WHERE INSTR(first_name, '.') >= 3;

 rem [Rischert, 2004,173]
 col first_name FORMAT a10
 col mi         FORMAT a4
 col first      FORMAT a12
 SELECT first_name, 
 SUBSTR(first_name, INSTR(first_name, '.')-1) mi,
 SUBSTR(first_name, 1, INSTR(first_name, '.')-2) first
 FROM student
 WHERE INSTR(first_name, '.') >= 3;


rem [Rischert, 2004,174]
 SELECT city||', '||state||' '||zip
 FROM zipcode; 


rem [Rischert, 2004,175]
 SELECT phone
 FROM student
 WHERE TRANSLATE(
 phone, '0123456789',
 '##########') <> '###-###-####'; 


rem [Rischert, 2004,177]
 SELECT student_id, last_name
 FROM student
 WHERE SOUNDEX(last_name) = SOUNDEX('MARTIN'); 



rem [Rischert, 2004,178]
 SELECT description "Description",
 INITCAP(description) "Initcap Description"
 FROM course
 WHERE description LIKE '%SQL%';


rem [Rischert, 2004,178]
SELECT last_name
 FROM instructor
 WHERE LENGTH(last_name) >= 6; 


rem [Rischert, 2004,178]
SELECT SUBSTR('12345', 3),
 SUBSTR('12345', 3, 2),
 SUBSTR('12345', -4, 3)
 FROM dual; 


rem [Rischert, 2004,178]
 SELECT zip, LTRIM(zip, '0'), RTRIM(ZIP, '4')
 FROM zipcode
 ORDER BY zip; 


rem [Rischert, 2004,178]
 SELECT TRIM('01' FROM '01230145601')
 FROM dual; 


rem [Rischert, 2004,178]
 SELECT TRANSLATE('555-1212', '0123456789',
 '##########')
 FROM dual; 


rem [Rischert, 2004,179]
SELECT (
 LENGTH('Fred fed Ted bread, and Ted fed Fred bread.') -
 LENGTH(REPLACE(
 'Fred fed Ted bread, and Ted fed Fred bread.',
'ed', NULL))
 ) /2 AS occurr
 FROM dual; 

 //tabla dual una sola fila y una sola columna, interna

 SELECT (
 LENGTH('Fred fed Ted bread, and Ted fed Fred bread.') -
 LENGTH(REPLACE(
 'Fred fed Ted bread, and Ted fed Fred bread.',
'ed', NULL))
 ) AS occurr
 FROM dual; 

SELECT (
 LENGTH('Fred fed Ted bread, and Ted fed Fred bread.')) from dual;

SELECT (
 LENGTH('Fred fed Ted bread')) from dual;

SELECT (
 LENGTH('Fred fed Ted bread')) texto from dual;

SELECT (
	LENGTH(REPLACE(
 'Fred fed Ted bread, and Ted fed Fred bread.',
'ed', NULL))) from dual;

SELECT (
	LENGTH(REPLACE(
 'Fred fed Ted bread, and Ted fed Fred bread.',
'ed', NULL))) texto2 from dual;

SELECT (
	LENGTH(REPLACE(
 'Fred fed Ted bread',
'ed', NULL))) texto2 from dual;

SELECT (
	REPLACE(
 'Fred fed Ted bread',
'ed', NULL)) texto2 from dual;

rem [Rischert, 2004,196]
SELECT 10.245, ROUND(10.245, 1), ROUND(10.245, -1)
 FROM dual; 

rem [Rischert, 2004,196]
SELECT ROUND(120.09, -2), ROUND(1444.44, -3)
 FROM dual; 

rem [Rischert, 2004,196]
 SELECT DISTINCT cost, cost*1.75, ROUND(cost*1.75)
 FROM course; 

rem [Rischert, 2004,196]
 SELECT DISTINCT numeric_grade, ROUND(numeric_grade / 2)
 FROM grade; 

rem [Rischert, 2004,213]
 SELECT first_name||' '|| last_name name,
 phone oldphone,
 NVL(phone, '212-555-1212') newphone
 FROM student
 WHERE phone IS NULL; 

rem [Rischert, 2004,213]
 SELECT first_name||' '|| last_name name,
 phone oldphone,
 NVL(phone, '212-555-1212') newphone
 FROM student
 WHERE NVL(phone, 'NONE') = 'NONE'; 


rem [Rischert, 2004,213]
 SELECT first_name||' '|| last_name name,
 phone oldphone,
 COALESCE(phone, '212-555-1212') newphone
 FROM student
 WHERE COALESCE(phone, 'NONE') ='NONE'; 

rem [Rischert, 2004,213]
 SELECT course_no, cost,
 NVL(cost,1000)*0.9 new
 FROM course
 WHERE course_no >= 430; 



 //*********************************************
 //					Chapter 4 
 //*********************************************

rem [Rischert, 2004,213]
SELECT last_name, registration_date
 FROM student
 WHERE student_id IN (123, 161, 190); 


rem [Rischert, 2004,233]
SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI')
 FROM section; 

rem [Rischert, 2004,233]
 SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI')
 FROM section;  

rem [Rischert, 2004,233]
WHERE start_date_time >= '04-MAY-2003'
 AND start_date_time < '05-MAY-2003'; 


rem [Rischert, 2004,233]
 SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI')
 FROM section
 WHERE TRUNC(start_date_time) = TO_DATE('04-MAY-2003', 'DD-MON-YYYY'); 

rem [Rischert, 2004,233]
 SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI')
 FROM section
 WHERE TRUNC(start_date_time) = DATE '2003-05-04'; 

rem [Rischert, 2004,233]
 SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI') texto3
 FROM section
 WHERE TRUNC(start_date_time) = DATE '2003-05-04'; 

rem [Rischert, 2004,233]
 SELECT course_no, section_id, TRUNC (start_date_time), 
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI') texto3
 FROM section
 WHERE TRUNC(start_date_time) = DATE '2003-05-04'; 

rem [Rischert, 2004,233]
 SELECT course_no, section_id, 
 to_char (TRUNC (start_date_time), 'DD-MON-YYYY HH24:MI') texto4_trunc, 
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI') texto3
 FROM section
 WHERE TRUNC(start_date_time) = DATE '2003-05-04'; 

rem [Rischert, 2004,233]
 SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI')
 FROM section
 WHERE start_date_time >= DATE '2003-05-04 00:00:00'
 AND start_date_time < DATE '2003-05-05 00:00:00';

select to_date ('2003-05-04 00:00:00', 'YYYY-MM-DD HH24:MI:SS') 
from dual;

select to_char ( to_date ('2003-05-04 00:00:00', 'YYYY-MM-DD HH24:MI:SS') , 
	'YYYY-MM-DD HH24:MI:SS') fecha
from dual;

select to_char ( to_date ('2003-05-04 08:03:50', 'YYYY-MM-DD HH24:MI:SS') , 
	'YYYY-MM-DD HH24:MI:SS') fecha
from dual;

select 
to_char ( trunc ( to_date ('2003-05-04 08:03:50', 'YYYY-MM-DD HH24:MI:SS') ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( trunc ( to_date ('2003-05-04 19:03:50', 'YYYY-MM-DD HH24:MI:SS') ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 19:03:50', 'YYYY-MM-DD HH24:MI:SS') ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 11:03:50', 'YYYY-MM-DD HH24:MI:SS') ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 11:59:59', 'YYYY-MM-DD HH24:MI:SS') ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 12:59:59', 'YYYY-MM-DD HH24:MI:SS') ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 12:59:59', 'YYYY-MM-DD HH24:MI:SS'), 'MI' ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 12:29:59', 'YYYY-MM-DD HH24:MI:SS'), 'MI' ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;


select 
to_char ( ROUND ( to_date ('2003-05-04 12:29:00', 'YYYY-MM-DD HH24:MI:SS'), 'MI' ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select 
to_char ( ROUND ( to_date ('2003-05-04 12:29:29', 'YYYY-MM-DD HH24:MI:SS'), 'MI' ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;


select 
to_char ( ROUND ( to_date ('2003-05-04 12:29:31', 'YYYY-MM-DD HH24:MI:SS'), 'MI' ) , 
	'YYYY-MM-DD HH24:MI:SS')  fecha
from dual;

select SYSDATE from dual;
select dump (SYSDATE) from dual;

select SYStimestamp from dual;
select dump (SYStimestamp) from dual;


rem [Rischert, 2004,236]
 SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'DY DD-MON-YYYY')
 FROM section
 WHERE TO_CHAR(start_date_time, 'DY') = 'TUE'; 

rem [Rischert, 2004,237]
SELECT course_no, section_id,
 TO_CHAR(start_date_time, 'Day DD-Mon-YYYY')
 FROM section
 WHERE TO_CHAR(start_date_time, 'fmDay') = 'Tuesday'; 


rem [Rischert, 2004,237]
 SELECT section_id,
 TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI:SS')
 FROM section
 WHERE TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI:SS')
 >= '01-JUL-2003 00:00:00'
 AND TO_CHAR(start_date_time, 'DD-MON-YYYY HH24:MI:SS')
 <= '31-JUL-2003 23:59:59'; 


rem [Rischert, 2004,248]
 SELECT LAST_DAY(TO_DATE('13-FEB-1964','DD-MON-YYYY')) lastday,
 LAST_DAY(TO_DATE('13-FEB-1964','DD-MON-YYYY'))
 - TO_DATE('13-FEB-1964','DD-MON-YYYY') days
 FROM dual; 


rem [Rischert, 2004,248]
 SELECT MONTHS_BETWEEN(TO_DATE('17-AUG-2003','DD-MON-YYYY'),
 TO_DATE('29-SEP-1999','DD-MON-YYYY')) months
 FROM dual; 

rem [Rischert, 2004,248]
 SELECT TO_CHAR(SYSDATE, 'DD-MON-YYYY HH24:MI:SS') "Current",
 TO_CHAR(SYSDATE+3, 'DD-MON-YYYY HH24:MI:SS') "Answer"
 FROM dual; 


rem [Rischert, 2004,265]
 SELECT col_date, col_timestamp, col_timestamp_w_tz
 FROM date_example; 


rem [Rischert, 2004,265]
 SELECT col_timestamp
 FROM date_example
 WHERE col_timestamp = '24-MAR-02 04.25.32.000000 PM'; 



rem [Rischert, 2004,271]
 SELECT TZ_OFFSET('Europe/London') "London",
 TZ_OFFSET('America/New_York') "NY",
 TZ_OFFSET('America/Chicago') "Chicago",
 TZ_OFFSET('America/Denver') "Denver",
 TZ_OFFSET('America/Los_Angeles') "LA"
 FROM dual; 



 //*********************************************
 //					Chapter 6 
 //*********************************************
 
 rem [Rischert, 2004,330]
 SELECT c.course_no, s.section_no, c.description,
 s.location, s.instructor_id
 FROM course c, section s
 WHERE c.course_no = s.course_no; 


 rem [Rischert, 2004,331]
SELECT course_no, s.section_no, c.description,
 s.location, s.instructor_id
 FROM course c JOIN section s
USING (course_no);


rem [Rischert, 2004,334]
SELECT COUNT(*)
 FROM section, instructor; 


rem [Rischert, 2004,334]
 SELECT s.instructor_id s_instructor_id,
 i.instructor_id i_instructor_id
 FROM section s, instructor i;


rem [Rischert, 2004,336]
SELECT c.course_no, c.description, s.section_no
 FROM course c, section s
 WHERE c.course_no = s.course_no
 AND c.prerequisite IS NULL
 ORDER BY c.course_no, s.section_no;


rem [Rischert, 2004,336]
SELECT s.last_name, s.zip, z.state, z.city
 FROM student s, zipcode z
 WHERE s.zip = z.zip
 ORDER BY s.zip;


rem [Rischert, 2004,339]
 SELECT c.course_no, c.description, s.section_no
 FROM course c, section s
 WHERE c.course_no = s.course_no
 AND c.prerequisite IS NULL
 ORDER BY c.course_no, s.section_no;


rem [Rischert, 2004,340]
 SELECT e.student_id, s.course_no,
 TO_CHAR(e.enroll_date,'MM/DD/YYYY HH:MI PM'),
 e.section_id
 FROM enrollment e JOIN section s
 ON (e.section_id = s.section_id)
 WHERE s.course_no = 20
 AND e.enroll_date >= TO_DATE('01/30/2003','MM/DD/YYYY')
 AND e.enroll_date < TO_DATE('01/31/2003','MM/DD/YYYY');


rem [Rischert, 2004,341]
 SELECT s.student_id, i.instructor_id,
 s.zip, i.zip
 FROM student s, instructor i
 WHERE s.zip = i.zip
 ORDER BY s.student_id, i.instructor_id; 


rem [Rischert, 2004,354]
SELECT c.course_no, s.section_no, e.student_id
 FROM course c, section s, instructor i, enrollment e
 WHERE c.prerequisite IS NULL
 AND c.course_no = s.course_no
 AND s.instructor_id = i.instructor_id
 AND i.zip = '10025'
 AND s.section_id = e.section_id; 



rem [Rischert, 2004,356]
 SELECT i.first_name || ' ' ||i.last_name name,
 i.street_address, z.city || ', ' || z.state
 || ' ' || i.zip "City State Zip",
 TO_CHAR(s.start_date_time, 'MM/DD/YY') start_dt,
 section_id sect
 FROM instructor i, section s, zipcode z
 WHERE i.instructor_id = s.instructor_id
 AND i.zip = z.zip
 AND s.start_date_time >=
 TO_DATE('01-JUN-2003','DD-MON-YYYY')
 AND s.start_date_time <
 TO_DATE('01-JUL-2003','DD-MON-YYYY'); 

 //*********************************************
 //					Chapter 7 
 //*********************************************

rem [Rischert, 2004,358]
 SELECT last_name, first_name
 FROM student
 WHERE last_name = 'Crocitto'
 AND first_name = 'Fred';


rem [Rischert, 2004,376]
 SELECT first_name, last_name
 FROM student
 WHERE registration_date =
 (SELECT MIN(registration_date)
 FROM student); 

rem [Rischert, 2004,376]
SELECT c.description, s.section_no, c.cost, s.capacity
 FROM course c, section s
 WHERE c.course_no = s.course_no
 AND s.capacity <=
 (SELECT AVG(capacity)
 FROM section)
 AND c.cost =
 (SELECT MIN(cost)
 FROM course); 


rem [Rischert, 2004,377]
 SELECT course_no, SUM(capacity)
 FROM section
 GROUP BY course_no
HAVING SUM(capacity) <
 (SELECT AVG(capacity)
 FROM section); 


rem [Rischert, 2004,377]
SELECT course_no, SUM(capacity)
 FROM section
 GROUP BY course_no; 


rem [Rischert, 2004,377]
 SELECT AVG(capacity)
 FROM section; 


rem [Rischert, 2004,377]
 SELECT student_id, COUNT(*)
 FROM enrollment
 GROUP BY student_id
HAVING COUNT(*) =
 (SELECT MAX(COUNT(*))
 FROM enrollment
 GROUP BY student_id); 


rem [Rischert, 2004,378]
 SELECT COUNT(*)
 FROM enrollment
 GROUP BY student_id; 



rem [Rischert, 2004,379]
 SELECT course_no, description
 FROM course
 WHERE course_no IN
 (SELECT course_no
 FROM section
 WHERE instructor_id IN
 (SELECT instructor_id
 FROM instructor
 WHERE last_name = 'Hanks'
 AND first_name = 'Fernand')); 


rem [Rischert, 2004,380]
SELECT c.course_no, c.description
 FROM course c, section s, instructor i
 WHERE c.course_no = s.course_no
 AND s.instructor_id = i.instructor_id
 AND i.last_name = 'Hanks'
 AND i.first_name = 'Fernand';


rem [Rischert, 2004,381]
 SELECT section_id, capacity
 FROM section
 WHERE (section_id, capacity) IN
 (SELECT section_id, COUNT(*)
 FROM enrollment
 GROUP BY section_id); 



 rem [Rischert, 2004,386]
 SELECT instructor_id, last_name, first_name, zip
 FROM instructor i
 WHERE EXISTS
 (SELECT 'X'
 FROM section
 WHERE i.instructor_id = instructor_id);

 rem [Rischert, 2004,386]
 SELECT instructor_id, last_name, first_name, zip
 FROM instructor
 WHERE instructor_id IN
 (SELECT instructor_id
 FROM section); 

rem [Rischert, 2004,388]
SELECT section_id, capacity
 FROM section
 WHERE course_no = 20; 

rem [Rischert, 2004,391]
 SELECT section_id, course_no
 FROM section s
 WHERE 2 >
 (SELECT COUNT(*)
 FROM enrollment
 WHERE section_id = s.section_id); 

rem [Rischert, 2004,393]
 SELECT section_id
 FROM section
 WHERE section_id NOT IN
 (SELECT section_id
 FROM enrollment);

rem [Rischert, 2004,397]
SELECT course_no, section_id
 FROM section s
 WHERE NOT EXISTS
 (SELECT NULL
 FROM enrollment
 WHERE s.section_id = section_id)
 ORDER BY course_no;

rem [Rischert, 2004,417]
SELECT student_id, section_id, numeric_grade
 FROM grade g
 WHERE grade_type_code = 'FI'
 AND numeric_grade > ALL
 (SELECT numeric_grade
 FROM grade
 WHERE grade_type_code = 'HM'
 AND g.section_id = section_id
 AND g.student_id = student_id);

rem [Rischert, 2004,418]
SELECT student_id, section_id, grade_type_code,
 MAX(numeric_grade) max, MIN(numeric_grade) min
 FROM grade
 WHERE student_id = 179
 AND section_id = 116
 AND grade_type_code IN ('HM', 'FI')
 GROUP BY student_id, section_id, grade_type_code;

rem [Rischert, 2004,420]
 SELECT student_id, section_id, grade_type_code,
 numeric_grade
 FROM grade
 WHERE student_id = 102
 AND section_id = 89
 AND grade_type_code IN ('HM', 'FI');


 //*********************************************
 //					Chapter 8 
 //*********************************************

rem [Rischert, 2004,425]
 SELECT first_name, last_name, phone, COUNT(*)
 FROM student
 GROUP BY first_name, last_name, phone
HAVING COUNT(*) > 1;

rem [Rischert, 2004,426]
SELECT instructor_id id, first_name, last_name, phone
 FROM instructor
 UNION
SELECT student_id, first_name, last_name, phone
 FROM student
 ORDER BY 3;

rem [Rischert, 2004,427]
SELECT first_name, last_name,
 'Instructor' "Type"
 FROM instructor
 UNION
SELECT first_name, last_name,
 'Student'
 FROM student; 
 
rem [Rischert, 2004,429]
 SELECT first_name, last_name,
 'Instructor' "Type"
 FROM instructor
 UNION
SELECT first_name, last_name,
 'Student'
 FROM student; 

rem [Rischert, 2004,430]
SELECT created_by
 FROM enrollment
 UNION
SELECT created_by
 FROM grade
 UNION
SELECT created_by
 FROM grade_type
 UNION
SELECT created_by
 FROM grade_conversion;

rem [Rischert, 2004,432]
 SELECT DISTINCT salutation, CAST(NULL AS NUMBER),
 state, z.created_date
 FROM instructor i, zipcode z
 WHERE i.zip = z.zip
UNION ALL
SELECT salutation, COUNT(*),
 state, TO_DATE(NULL)
 FROM student s, zipcode z
 WHERE s.zip = z.zip
 GROUP BY salutation, state;

rem [Rischert, 2004,440]
SELECT course_no, description
 FROM course
 MINUS
SELECT s.course_no, c.description
 FROM section s, course c
 WHERE s.course_no = c.course_no;


rem [Rischert, 2004,441]
SELECT course_no, description
 FROM course c
 WHERE NOT EXISTS
 (SELECT '*'
 FROM section
 WHERE c.course_no = course_no);

rem [Rischert, 2004,442]
 SELECT zip
 FROM instructor
INTERSECT
SELECT zip
 FROM student;

rem [Rischert, 2004,447]
SELECT course_no, description,
 section_id
 FROM course JOIN section
 USING (course_no)
 ORDER BY course_no;

rem [Rischert, 2004,448]
SELECT c.course_no, c.description,
 s.section_id, s.course_no
 FROM course c LEFT OUTER JOIN section s
 ON c.course_no = s.course_no
 ORDER BY c.course_no;

rem [Rischert, 2004,452]
SELECT col1, col2
 FROM t1, t2
 WHERE t1.col1 = t2.col2(+)
UNION
SELECT col1, col2
 FROM t1, t2
 WHERE t1.col1(+) = t2.col2;

rem [Rischert, 2004,453]
 SELECT c.course_no, s.course_no, s.section_id,
 c.description, s.start_date_time
 FROM course c, section s
 WHERE c.course_no(+) = s.course_no(+); 

rem [Rischert, 2004,455]
SELECT c.course_no, s.course_no, s.section_id,
 c.description, s.start_date_time
 FROM course c FULL OUTER JOIN section s
 ON c.course_no = s.course_no; 

rem [Rischert, 2004,456]
 SELECT course_no, description
 FROM course
 WHERE prerequisite = 350;

rem [Rischert, 2004,457]
 SELECT course_no cno,
 description,
 prerequisite prereq,
 location loc, section_id
 FROM course LEFT OUTER JOIN section
 USING (course_no)
 WHERE prerequisite = 350; 

rem [Rischert, 2004,460]
SELECT c.course_no cno, s.course_no sno,
 c.description,
 c.prerequisite prereq,
 s.location loc, s.section_id
 FROM (SELECT *
 FROM course
 WHERE prerequisite = 350) c LEFT OUTER JOIN
 (SELECT * FROM section
 WHERE location = 'L507') s
 ON (c.course_no = s.course_no);

rem [Rischert, 2004,461]
 SELECT c.course_no, c.description
 FROM course c, section s
 WHERE c.course_no = s.course_no(+)
 AND s.course_no IS NULL;

rem [Rischert, 2004,462]
 SELECT city, state, zip,
 (SELECT COUNT(*)
 FROM student s
 WHERE s.zip = z.zip) AS student_count
 FROM zipcode z
 WHERE state = 'CT'; 

rem [Rischert, 2004,471]
 SELECT student_id, section_id, numeric_grade
 FROM grade g
 WHERE grade_type_code = 'FI'
 AND section_id = 86
 AND numeric_grade < ANY
 (SELECT numeric_grade
 FROM grade
 WHERE grade_type_code = 'MT'
 AND g.section_id = section_id
 AND g.student_id = student_id);

rem [Rischert, 2004,472]
 SELECT DISTINCT a.student_id, a.last_name,
 a.street_address
 FROM student a, student b
 WHERE a.street_address = b.street_address
 AND a.zip = b.zip
 AND a.student_id <> b.student_id
 ORDER BY a.street_address; 

rem [Rischert, 2004,474]
 SELECT c1.course_no,
 SUBSTR(c1.description, 1,15) course_descr,
 C1.prerequisite,
 SUBSTR(c2.description,1,15) pre_req_descr
 FROM course c1, course c2
 WHERE c1.prerequisite = c2.course_no(+)
 ORDER BY 1;

 