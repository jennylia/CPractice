for i in {1..15}
do
	rm 20.$i.c
done



for i in {1..15}
do
	touch 20.$i.c
done


for i in {1..15}
do
	echo "#include <stdio.h>" >> 20.$i.c

	echo "int main() {
		return 0;
	}" >> 20.$i.c
done

for i in {1..15}
do
	gcc 20.$i.c -o $i.out

	
done