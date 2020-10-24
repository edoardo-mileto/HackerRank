-- https://www.hackerrank.com/challenges/weather-observation-station-11

SELECT DISTINCT CITY
FROM STATION
WHERE
    SUBSTRING(CITY,1,1) NOT IN ('a','e','i','o','u')
    OR SUBSTRING(CITY,CHAR_LENGTH(CITY),1) NOT IN ('a','e','i','o','u')
