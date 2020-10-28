-- https://www.hackerrank.com/challenges/average-population-of-each-continent

SELECT CONTINENT, FLOOR(AVG(CITY.POPULATION))
FROM CITY
INNER JOIN COUNTRY ON COUNTRYCODE = CODE
GROUP BY CONTINENT;
