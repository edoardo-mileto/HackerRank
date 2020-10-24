-- https://www.hackerrank.com/challenges/weather-observation-station-7

SELECT DISTINCT CITY FROM STATION
WHERE SUBSTRING(CITY, CHAR_LENGTH(CITY), 1) IN ("a", "e", "i", "o", "u")
