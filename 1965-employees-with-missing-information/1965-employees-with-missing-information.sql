/* Write your PL/SQL query statement below */
select employee_id 
from(
      --  to find missing values that are not in salaries table but their id  exists in employee table
        select employee_id  
        from Employees
        where employee_id not in (select employee_id from Salaries) 
		
        union
		
		 --  to find missing values that are not in employee table but their salary exists in salaries table
        select employee_id 
        from Salaries
        where employee_id not in (select employee_id from Employees)
  )
order by employee_id; 
