-- https://www.hackerrank.com/challenges/asian-population

SELECT SUM(CITY.POPULATION)
FROM CITY
INNER JOIN COUNTRY ON COUNTRYCODE = CODE
WHERE CONTINENT = "Asia"
