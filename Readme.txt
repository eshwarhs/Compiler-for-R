Section : E


Project Title: Mini-Compiler for 'while', 'if-else', and 'repeat' constructs in R Programming Language


Team Members: Eshwar H S(PES1201700193) , Kethan M V(PES1201701085) , Anirudh Joshi(PES12101701558)


Project Guide : Ms. Sunitha R 


Project Abstract: 


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