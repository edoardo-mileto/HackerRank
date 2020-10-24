-- https://www.hackerrank.com/challenges/weather-observation-station-9

SELECT DISTINCT CITY FROM STATION
WHERE SUBSTRING(CITY,1,1) NOT IN ('a','e','i','o','u')
