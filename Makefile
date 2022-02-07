all: gastask gasgen

CFLAGS = -g -Wall -DDEBUG

gastask: gastask.o GA.o task.o cpu.o mem.o util.o conf.o conf_gastask.o report.o cloud.o cloudratio.o network.o
	gcc -o gastask $^ -lm

gasgen: gasgen.o gen_task.o mem.o util.o conf.o conf_gasgen.o gen_network.o cloud.o cloudratio.o network.o
	gcc -o $@ $^ 

gastask.o: gastask.h common.h
GA.o: gastask.h common.h
task.o: gastask.h common.h
cpu.o: gastask.h common.h
mem.o: gastask.h  common.h
util.o: common.h
conf.o: common.h
conf_gastask.o: gastask.h common.h
report.o: gastask.h common.h
gasgen: gasgen.h common.h
conf_gasgen.o: common.h
cloud.o: gastask.h common.h
cloudratio.o: gastask.h common.h
network.o: gastask.h common.h

clean:
	rm -f gastask gasgen *.o