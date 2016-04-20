all: ClimCLib.a

.PHONY: clean make_local rm_Local


make_local: ClimCLib.a
	mkdir local/
	mkdir local/bin/
	mkdir local/Include/
	cp bin/ClimCLib.a local/bin/ClimCLib.a
	cp Include/*.h local/Include/

rm_Local:
	rm -Rf local



ClimCLib.a: dlist.o slist.o vector2.o vector3.o vector4.o filex.o aabb.o circle.o general.o darray.o hashmap.o
	ar -rcs bin/ClimCLib.a bin/obj/ADT/*.o
	ar -rcs bin/ClimCLib.a bin/obj/Utility/*.o
	ar -rcs bin/ClimCLib.a bin/obj/Physics/*.o


dlist.o: Source/ADT/dlist.c
	gcc -Wall -std=c11 -c Source/ADT/dlist.c -o "bin/obj/ADT/dlist.o"
	echo "Compiling dlist"


slist.o: Source/ADT/slist.c
	gcc -Wall -std=c11 -c Source/ADT/slist.c -o "bin/obj/ADT/slist.o"
	echo "Compiling slist"


vector2.o: Source/ADT/vector2.c
	gcc -Wall -std=c11 -c Source/ADT/vector2.c -o "bin/obj/ADT/vector2.o"
	echo "Compiling vector2"


vector3.o: Source/ADT/vector3.c
	gcc -Wall -std=c11 -c Source/ADT/vector3.c -o "bin/obj/ADT/vector3.o"
	echo "Compiling vector3"

vector4.o: Source/ADT/vector3.c
	gcc -Wall -std=c11 -c Source/ADT/vector4.c -o "bin/obj/ADT/vector4.o"
	echo "Compiling vector4"

darray.o: Source/ADT/darray.c
	gcc -Wall -std=c11 -c Source/ADT/darray.c -o "bin/obj/ADT/darray.o"
	echo "Compiling Dynamic Array (Vector)"

hashmap.o: Source/ADT/hashmap.c
	gcc -Wall -std=c11 -c Source/ADT/hashmap.c -o "bin/obj/ADT/hashmap.o"
	echo "Compiling Hash Map"

filex.o: Source/Utility/filex.c
	gcc -Wall -std=c11 -c Source/Utility/filex.c -o "bin/obj/Utility/filex.o"
	echo "Compiling File Extension"

aabb.o: Source/Physics/aabb.c
	gcc -Wall -std=c11 -c Source/Physics/aabb.c -o "bin/obj/Physics/aabb.o"
	echo "Compiling Axis Aligned Bounding Box"

circle.o: Source/Physics/circle.c
	gcc -Wall -std=c11 -c Source/Physics/circle.c -o "bin/obj/Physics/circle.o"
	echo "Compiling Circle Physics"

general.o: Source/Utility/general.c
	gcc -Wall -std=c11 -c Source/Utility/general.c -o "bin/obj/Utility/general.o"
	echo "Compiling General Utility Functions"



clean:
	echo Cleaning ADT
	rm -Rf bin/obj/ADT/*
	rm -Rf bin/obj/Utility/*
	rm -Rf bin/obj/Physics/*
	rm -Rf bin/*.a
