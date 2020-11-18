obj = file1.o file2.o
CFLAGS = -pie -o
edit : $(obj)
	cc $(CFLAGS) file $(obj)
file1.o: file.h
file2.o: file.h

.PHONY : clean
clean:
	-rm file $(obj)