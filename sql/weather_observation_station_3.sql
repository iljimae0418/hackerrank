/*
query a list of city names from station with even id numbers only 
*/
SELECT 
DISTINCT 
CITY 
FROM 
STATION 
WHERE ID%2 = 0;  
