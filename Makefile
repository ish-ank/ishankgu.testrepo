compile: upper_to_lower_case.c Cdata_tyoes_min_max.c four_functions.c
	gcc upper_to_lower_case.c -std=c99 -o out1.out
	gcc Cdata_tyoes_min_max.c -std=c99 -o out2.out
	gcc four_functions.c -std=c99 -o out3.out 
                  
clean: 
	rm -f ./*.out

run: compile 
	./out1.out 
	./out2.out
	./out3.out
	clean

	
