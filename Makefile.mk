all: csExamMain.cc
	gcc -g -Wall -o count csExamMain.cc

clean:
	$(RM) count 