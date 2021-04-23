all: csExamMain.cc
	gcc -g -Wall -o count csExamMain.cc
	
check: csExamMain.cc
	gcc -g -Wall -o csExamMain.cc
	valgrind ./a.out 
	
clean:
	$(RM) count 
