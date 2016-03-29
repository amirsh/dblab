
WITH wscs AS
 (SELECT sold_date_sk
        ,sales_price
  FROM  SELECT ws_sold_date_sk sold_date_sk
              ,ws_ext_sales_price sales_price
        FROM web_sales 
        UNION ALL
        SELECT cs_sold_date_sk sold_date_sk
              ,cs_ext_sales_price sales_price
        FROM catalog_sales),
 wswscs AS 
  (SELECT d_week_seq,
        SUM(CASE WHEN (d_day_name='Sunday') THEN sales_price ELSE null END) sun_sales,
        SUM(CASE WHEN (d_day_name='Monday') THEN sales_price ELSE null END) mon_sales,
        SUM(CASE WHEN (d_day_name='Tuesday') THEN sales_price ELSE  null END) tue_sales,
        SUM(CASE WHEN (d_day_name='Wednesday') THEN sales_price ELSE null END) wed_sales,
        SUM(CASE WHEN (d_day_name='Thursday') THEN sales_price ELSE null END) thu_sales,
        SUM(CASE WHEN (d_day_name='Friday') THEN sales_price ELSE null END) fri_sales,
        SUM(CASE WHEN (d_day_name='Saturday') THEN sales_price ELSE null END) sat_sales
 FROM wscs
     ,date_dim
 WHERE d_date_sk = sold_date_sk
 GROUP BY d_week_seq)
 SELECT d_week_seq1
       ,ROUND(sun_sales1/sun_sales2,2) as case1
       ,ROUND(mon_sales1/mon_sales2,2) as case2
       ,ROUND(tue_sales1/tue_sales2,2) as case3
       ,ROUND(wed_sales1/wed_sales2,2) as case4
       ,ROUND(thu_sales1/thu_sales2,2) as case5
       ,ROUND(fri_sales1/fri_sales2,2) as case6
       ,ROUND(sat_sales1/sat_sales2,2) as case7
 FROM
 (SELECT wswscs.d_week_seq d_week_seq1
        ,sun_sales sun_sales1
        ,mon_sales mon_sales1
        ,tue_sales tue_sales1
        ,wed_sales wed_sales1
        ,thu_sales thu_sales1
        ,fri_sales fri_sales1
        ,sat_sales sat_sales1
  FROM wswscs,date_dim 
  WHERE date_dim.d_week_seq = wswscs.d_week_seq AND
        d_year = 2001) y,
 (SELECT wswscs.d_week_seq d_week_seq2
        ,sun_sales sun_sales2
        ,mon_sales mon_sales2
        ,tue_sales tue_sales2
        ,wed_sales wed_sales2
        ,thu_sales thu_sales2
        ,fri_sales fri_sales2
        ,sat_sales sat_sales2
  FROM wswscs
      ,date_dim 
  WHERE date_dim.d_week_seq = wswscs.d_week_seq AND
        d_year = 2001+1) z
 WHERE d_week_seq1=d_week_seq2-53
 ORDER BY d_week_seq1;

