git clone https://github.com/amirsh/tpch-dbgen.git
cd tpch-dbgen
make
./dbgen -s 8
mkdir sf8
sed 's/|$//' customer.tbl > sf8/customer.tbl
sed 's/|$//' nation.tbl > sf8/nation.tbl
sed 's/|$//' part.tbl > sf8/part.tbl
sed 's/|$//' region.tbl > sf8/region.tbl
sed 's/|$//' lineitem.tbl > sf8/lineitem.tbl
sed 's/|$//' orders.tbl > sf8/orders.tbl
sed 's/|$//' partsupp.tbl > sf8/partsupp.tbl
sed 's/|$//' supplier.tbl > sf8/supplier.tbl
echo "TPCH Data Generated!"
echo "Creating ramdisk ... You may need to enter your sudoer user password!"
sudo mkfs -t xfs /dev/ram0
sudo mount -t xfs /dev/ram0 /mnt/ramdisk 
sudo mkdir /mnt/ramdisk/tpch
sudo cp -R sf8/ /mnt/ramdisk/tpch/
echo "Data copied to ramdisk!"
