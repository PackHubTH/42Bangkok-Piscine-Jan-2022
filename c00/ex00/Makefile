# type "make" or "make all" to build and check program (main use)

all: build check

# type "make build" to run build

build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror main.c ft_*.c -o out && ./out; 

# type "make check" to run norminette

check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader main.c ft_*.c; 
	@echo "";
	@echo "----------------------";
# type "make rename OLD=oldname NEW=newname" to change name of function in main
# note: parameter will still be the same, don't forget to change it depend on exercise

rename:	
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > test1
	@mv test1 $(NEW).c
	@rm $(OLD).c
	@sed 's/$(OLD)/$(NEW)/g' main.c > test2	
	@mv test2 main.c
