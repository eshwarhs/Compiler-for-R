Mini-Compiler for 'while', 'if-else', and 'repeat' constructs in R Programming Language


Code Execution : -Syntax Phase
		 $make
		 $./syntax < input_code.r
		
		 -AST Phase
		 $make
		 $./ast < input_code.r
		
		 -ICG Phase
		 $make
		 $./icg < input_code.r

		 -ACG Phase
		 $make
		 $./acg < input_code.r > quad.txt
		 $g++ acg.cpp -o assembly_code
		 $./assembly_code