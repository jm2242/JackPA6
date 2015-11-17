# clean:
# 	rm *.o *.h.gch
main: main.c PA6.c 
	gcc -o main main.c PA6.c -I.