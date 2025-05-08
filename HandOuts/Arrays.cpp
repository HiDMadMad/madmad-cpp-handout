#include <iostream>


/// Arrays :

//--------------------------------------------------------------------------------------------------------------
	// Normal Array :
		// Type ArrayName [ArraySize] = { initialize };
		int ArrayName[3] = {5, 4, 6};
			//	  	index :	0  1  2
		// ArrayName[1] --> 4

		// can change value
		ArrayName[1] = 8;
		// ArrayName[1] // --> 8
		
		// Type ArrayName [] = { initialize };

		int ArrayName2[] = {5, 4, 6};
		// ArraySize automatically filled up but must be initialized
//--------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------------------
	// Multidimensional Array :
		// Type ArrayName [ArraySize][ArraySize2][ArraySize3]... = { { { initialize } } };
		int MultArrayName[2][3] = { {1, 2, 3}, {4, 5, 6} };
		// OR
		int MultArrayName2[2][3] = {
									{1, 2, 3},
									{4, 5, 6}
								};

		// MultArrayName[1][2] --> 6
		// MultArrayName[0][1] --> 2
		// also we can change the value

		// tip : second size must be initialized

		// example :						
			for(int i=0; i<2; i++)
			{
				for(int j=0; j<3; j++)
				{
					std::cout<<MultArrayName[i][j]<<"   ";
				}
				std::cout<<"\n\n";
			}

		// a better example :
			for(int i=0; i<2; i++)
			{
				for(int j=0; j<3; j++)
				{
					if( (i==0 && j==2) || (i==1 && j==2) )
						std::cout<<MultArrayName2[i][j];
					else
						std::cout<<MultArrayName2[i][j]<<",   ";
				}
				std::cout<<"\n\n";
			}
//--------------------------------------------------------------------------------------------------------------		

//--------------------------------------------------------------------------------------------------------------
	// Dynamic Array :
		float *DynArrayName;
		int DynArraySize;
		// getting array size
		DynArrayName = new float[DynArraySize];
		// after that DynArrayName is like a array
		// if in there, DynArrayName value is changed, we lost it and we can't delete it and memory leak is coming..
		delete[] DynArrayName;
//--------------------------------------------------------------------------------------------------------------

//MadMad_74