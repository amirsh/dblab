
SELECT  i_item_id
      ,i_item_desc 
      ,i_category 
      ,i_class 
      ,i_current_price
      ,SUM(ws_ext_sales_price) AS itemrevenue 
      ,SUM(ws_ext_sales_price*100)/SUM(SUM(ws_ext_sales_price)) over
          (partition by i_class) AS revenueratio
FROM	
	web_sales
    	,item 
    	,date_dim
WHERE 
	ws_item_sk = i_item_sk 
  	AND i_category IN ('Jewelry', 'Sports', 'Books')
  	AND ws_sold_date_sk = d_date_sk
	AND d_date BETWEEN cast('2001-01-12' AS date) 
				AND (cast('2001-01-12' AS date) + 30 days)
GROUP BY 
	i_item_id
        ,i_item_desc 
        ,i_category
        ,i_class
        ,i_current_price
ORDER BY 
	i_category
        ,i_class
        ,i_item_id
        ,i_item_desc
        ,revenueratio
LIMIT 100;

