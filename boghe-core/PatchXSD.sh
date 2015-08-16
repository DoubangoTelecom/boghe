for file in data-model
do
	sed -i 's/Order=0)/Order=09)/g' Generated/$file.cs;
	sed -i 's/Order=\<[0-9]\>/&0/g' Generated/$file.cs;
done