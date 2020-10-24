-- https://www.hackerrank.com/challenges/weather-observation-station-10

SELECT DISTINCT CITY
FROM STATION
WHERE SUBSTRING(CITY, CHAR_LENGTH(CITY),1) NOT IN ('a','e','i','o','u')
