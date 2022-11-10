.PHONY := clean
bin := main
sources := main.c
object := main.o
objects = add.o div.o mult.o sub.o
statLib := libFunctions.a 

$(bin): $(object) $(statLib)
		gcc $(sources) -o $(bin) -L. -lFunctions

$(statLib): $(objects)
		ar cr $(statLib) $(objects)

%.o: %.c
		gcc $< -c


clean:
	rm -rf $(bin) $(object) $(objects) $(statLib) 

