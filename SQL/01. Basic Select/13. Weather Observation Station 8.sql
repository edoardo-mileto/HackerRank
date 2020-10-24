-- https://www.hackerrank.com/challenges/weather-observation-station-8

SELECT DISTINCT CITY
FROM STATION
WHERE SUBSTRING(CITY, 1, 1) IN ('a','e','i','o','u')
AND SUBSTRING(CITY, CHAR_LENGTH(CITY), 1) IN ('a','e','i','o','u')
