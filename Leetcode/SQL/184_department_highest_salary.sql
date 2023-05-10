# Write your MySQL query statement below
SELECT d.name as Department, e.name as Employee, e.salary as Salary 
FROM Employee e, Department d
WHERE e.departmentId = d.id
AND e.salary = (SELECT MAX(Salary) FROM Employee e WHERE e.departmentID = d.id);