# Write your MySQL query statement below
SELECT name as "Employee" from Employee E1 where E1.salary > (Select salary from Employee E2 where E1.managerId = E2.id);