# Write your MySQL query statement below
select firstName, lastName, city, state from Person LEFT OUTER Join Address on Person.personId = Address.personId