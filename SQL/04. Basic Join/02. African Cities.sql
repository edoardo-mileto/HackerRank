-- https://www.hackerrank.com/challenges/african-cities

SELECT CITY.NAME
FROM CITY
INNER JOIN COUNTRY ON COUNTRYCODE = CODE
WHERE CONTINENT = "Africa"
