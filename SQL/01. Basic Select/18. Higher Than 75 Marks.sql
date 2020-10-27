-- https://www.hackerrank.com/challenges/more-than-75-marks

SELECT NAME
FROM STUDENTS
WHERE MARKS > 75
ORDER BY SUBSTRING(NAME, CHAR_LENGTH(NAME)-2,3), ID
