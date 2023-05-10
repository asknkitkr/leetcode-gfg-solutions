select name from SalesPerson where sales_id 
not in (select o.sales_id from orders o join company c
using (com_id) WHERE c.name='RED')