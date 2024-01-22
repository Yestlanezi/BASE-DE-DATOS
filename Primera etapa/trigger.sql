
set serveroutput on 
drop table temp;
CREATE TABLE temp (N NUMBER);


CREATE OR REPLACE TRIGGER temp_air
	AFTER INSERT ON TEMP
	FOR EACH ROW
BEGIN
	dbms_output.put_line('executing temp_air');
	dbms_output.put_line('Estamos en ESCOM ');
END;


 INSERT INTO temp VALUES (10); 
 INSERT INTO temp VALUES (20);
 INSERT INTO temp VALUES (30);
 INSERT INTO temp VALUES (40);
 INSERT INTO temp VALUES (50);
 
 desc dict
 
 select table_name from dict
 where table_name like '%TRIG%';
 
 col trigger_name format a20
 col trigger_type fromat a6
 col tabel_owner  format a7
 col table_name   format a10
 col status       format a10
 select trigger_name, trigger_type, table_owner,
 table_name, status
 from user_triggers;
 
  INSERT INTO temp VALUES (80);
 INSERT INTO temp VALUES (90);
 
 
  INSERT INTO temp VALUES (150);
  
  
  ---
  
  drop  table temp2;
  CREATE TABLE TEMP2(N NUMBER, M NUMBER DEFAULT 5);
CREATE OR REPLACE TRIGGER temp_bur
BEFORE UPDATE ON TEMP2
FOR EACH ROW
BEGIN
dbms_output.put_line('Estamos en escom probando triggers');
    dbms_output.put_line('BUR old N:'||:old.n|| ' M:'||:old.M);
    dbms_output.put_line('BUR new N:'||:new.n|| ' M:'||:new.M);
END;

CREATE OR REPLACE TRIGGER temp_aur
AFTER UPDATE ON TEMP2
FOR EACH ROW
BEGIN
dbms_output.put_line('Estamos en escom probando triggers');

    dbms_output.put_line('AUR old N:'||:old.n|| ' M:'||:old.M);
    dbms_output.put_line('AUR new N:'||:new.n|| ' M:'||:new.M);
END;
 
 
INSERT INTO TEMP2 (n) VALUES (10);
UPDATE TEMP2 SET n=n+1 WHERE n>=1;


CREATE TABLE times
 (d1 TIMESTAMP WITH TIME ZONE,
 d2 TIMESTAMP WITH LOCAL TIME ZONE,
 d3 INTERVAL DAY TO SECOND,
 d4 INTERVAL YEAR TO MONTH);


 DECLARE
 v_writing_sample CLOB;
 the_length INTEGER;
BEGIN
 SELECT writing_sample
 INTO v_writing_sample
 FROM student_writing_samples
 WHERE student_id = 'A101';
 dbms_lob.open(v_writing_sample, dbms_lob.lob_readonly);
 the_length := dbms_lob.getlength(v_writing_sample);
 dbms_lob.close(v_writing_sample);
 dbms_output.put_line(the_length);
END;



//******************triggers************//////

CREATE TABLE students
(student_id VARCHAR2(10),
 student_name VARCHAR2(30),
 college_major VARCHAR2(15),
 status VARCHAR2(15));


 CREATE TABLE TEMP (AMOUNT NUMBER);
INSERT INTO TEMP VALUES (0.12345);
INSERT INTO TEMP VALUES (12345.1209);

CREATE TABLE times
 (d1 TIMESTAMP WITH TIME ZONE,
 d2 TIMESTAMP WITH LOCAL TIME ZONE,
 d3 INTERVAL DAY TO SECOND,
 d4 INTERVAL YEAR TO MONTH);


 CREATE TABLE student_writting_samples
(student_id VARCHAR2(10),
 writing_sample CLOB));


CREATE TABLE student_transcripts
(student_id VARCHAR2(10),
 transcript SYS.XMLTYPE);


INSERT INTO student_transcripts
 (student_id, transcript)
VALUES ('A101',
 sys.XMLTYPE.createXML('<STUDENT_TRANSCRIPT>'
 ||'<CLASS>'
 ||'<COURSE>Math 101</COURSE>'
 ||'<GRADE>A</GRADE>'
 ||'</CLASS>'
 ||'<CLASS>'
 ||'<COURSE>English 102</COURSE>'
 ||'<GRADE>A</GRADE>'
 ||'</CLASS>'
 ||'</STUDENT_TRANSCRIPT>'));


set long 10000
SELECT
 student_id,
 p.transcript.getClobVal()
FROM
 student_transcripts p;
