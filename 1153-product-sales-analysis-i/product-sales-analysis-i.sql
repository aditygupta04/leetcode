/* Write your PL/SQL query statement below */
select product_name, year , price
from sales s, product p
where p.product_id(+) = s.product_id;