/* Write your PL/SQL query statement below */
SELECT UNIQUE_ID,name
from Employees e1,EmployeeUNI e2
where e1.id = e2.id(+);