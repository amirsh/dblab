SELECT N_NAME, O_YEAR, SUM(L_EXTENDEDPRICE*(1-L_DISCOUNT)-PS_SUPPLYCOST*L_QUANTITY) AS AMOUNT
FROM LINEITEM JOIN PART ON L_PARTKEY = P_PARTKEY
    JOIN SUPPLIER ON L_SUPPKEY = S_SUPPKEY
    JOIN NATION ON S_NATIONKEY = N_NATIONKEY
    JOIN PARTSUPP ON L_PARTKEY = PS_PARTKEY AND L_SUPPKEY = PS_SUPPKEY
    JOIN ORDERS ON L_ORDERKEY = O_ORDERKEY
WHERE P_NAME LIKE '%%ghost%%'
GROUP BY N_NAME, YEAR(O_ORDERDATE) AS O_YEAR
ORDER BY N_NAME, O_YEAR DESC
