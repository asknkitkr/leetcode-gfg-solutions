CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  RETURN (
     select salary from(select distinct(salary),den_rk from 
	 (select salary,dense_rank() over(order by salary desc) as den_rk from employee)A)B
	 where den_rk = N
  );
END