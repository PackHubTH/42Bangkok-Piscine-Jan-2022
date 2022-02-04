# type "make" or "make all" to build and check program (main use)

all: build insertInput checkNorm

# type "make build" to run build

build:
	@echo "\no----- Result $(notdir $(CURDIR)) --------o\n";
	@gcc -Wall -Wextra -Werror ft_*.c;

insertInput:
	./a.out | cat -e

# type "make checkNorm" to run norminette

checkNorm:
	@echo "\n----- Norminette $(notdir $(CURDIR)) ------\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c; 
	@echo "";
	@echo "o--------------------------o";

# type "make copy" to copy Makefile to all sub-directory
# note: remember that you should stay in main directory and type this command

copyMakefile:
	@echo "Copy Makefile to all sub-directory";
	@find . -maxdepth 1 -type d -name "ex*" > dir_name;
	@cat dir_name | xargs -n 1 cp -v Makefile;
	@rm dir_name;

copyMain:
	@echo "Copy main.c to all sub-directory";
	@for dir in $$(find . -maxdepth 1 -type d -name "ex*") ; do cp -v ./checkMou/$$dir/main.c $$dir ; done;
	@echo "";

getDirname:
	@echo $(notdir $(CURDIR))

checkAll: copyMakefile
	@for file in $(CURDIR)/ex* ; do $(MAKE) -C $$file ; done


# ---------- UNAVAILABLE (Future update)---------- #

# type "make checkMou" to check your output with our D-I-Y Moulinette
# note: notice that 'checkOutput' is just a file that contain answer in string
# if you modify our 'main.c', you can't use D-I-Y Moulinette anymore
# because I can't put my correct function in your directory, right?

# checkMou:
#	@echo "\nExpected result:\n";
#	@./out > userOutput
#	@diff userOutput ../checkMoulinette/$(notdir $(CURDIR))/checkOutput;

# ------------------------------------------------ #

# type "make rename OLD=oldname NEW=newname" to change name of function in main
# note: parameter will still be the same, don't forget to change it depend on exercise

rename:	
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > test1
	@mv test1 $(NEW).c
	@rm $(OLD).c
	@sed 's/$(OLD)/$(NEW)/g' main.c > test2	
	@mv test2 main.c
