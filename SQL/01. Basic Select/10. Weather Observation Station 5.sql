-- https://www.hackerrank.com/challenges/weather-observation-station-5

SELECT CITY, length(CITY) FROM station
ORDER BY length(CITY),CITY ASC
LIMIT 1;
SELECT CITY, length(CITY) FROM station
ORDER BY length(CITY) DESC
LIMIT 1;
