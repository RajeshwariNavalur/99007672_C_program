PROJECT=sum_name
SRC= name.c main.c

Build:
	gcc $(SRC) -o $(PROJECT).out

Run:
	./$(PROJECT).out 

Clean:
	rm -rf *.out *.o 

