#include <stdio.h>
#include <stdlib.h>
#include "integer.h"
#include "real.h"
#include "dll.h"
/*
static void showItems(dll *items)
{
	printf("The items are ");
	displayDLL(stdout, items);
	printf(".\n");
}
*/
int main()
{
	/*
	dll *items = newDLL(displayInteger);
	showItems(items);
	insertDLL(items, 0, newInteger(3));
	insertDLL(items, sizeDLL(items), newInteger(2));
	insertDLL(items, 1, newInteger(1));
	showItems(items);
	printf("The value ");
	displayInteger(stdout, removeDLL(items, 0));
	printf(" was removed.\n");
	showItems(items);
	int x = getInteger((integer *) getDLL(items, 0));
	printf("The first item is %d.\n", x);
	*/
/*	dll *items3 = newDLL(displayInteger);	
	for(int i = 0; i < 10000; i++)
	{
		insertDLL(items3, 0, newInteger(i));
	}
	displayInteger(stdout, removeDLL(items3, 3));
	displayInteger(stdout, removeDLL(items3, 8999));
	showItems(items3);	

	printf("\nTest 12: \n");
	dll *a = newDLL(displayInteger);
	insertDLL(a,0,newInteger(83));
        insertDLL(a,0,newInteger(86));
	insertDLL(a,0,newInteger(77));
	insertDLL(a,0,newInteger(15));
	insertDLL(a,0,newInteger(93));
	insertDLL(a,0,newInteger(35));
	insertDLL(a,0,newInteger(86));
	insertDLL(a,0,newInteger(92));
	insertDLL(a,0,newInteger(49));
	insertDLL(a,0,newInteger(21));
	displayDLL(stdout,a);
	free(a);

	printf("\nTest 13: \n");
	a = newDLL(displayInteger);
	insertDLL(a,sizeDLL(a),newInteger(83));
	insertDLL(a,sizeDLL(a),newInteger(86));
	insertDLL(a,sizeDLL(a),newInteger(77));
	insertDLL(a,sizeDLL(a),newInteger(15));
	insertDLL(a,sizeDLL(a),newInteger(93));
	insertDLL(a,sizeDLL(a),newInteger(35));
	insertDLL(a,sizeDLL(a),newInteger(86));
	insertDLL(a,sizeDLL(a),newInteger(92));
	insertDLL(a,sizeDLL(a),newInteger(49));
	insertDLL(a,sizeDLL(a),newInteger(21));
	displayDLL(stdout,a);
	free(a);*/

	printf("\nTest 14: \n");
	dll *a = newDLL(displayInteger);
	insertDLL(a,0,newInteger(83));//1
    insertDLL(a,1,newInteger(77));//2
	insertDLL(a,1,newInteger(93));//3
	insertDLL(a,0,newInteger(86));//4
	insertDLL(a,1,newInteger(49));//5
	insertDLL(a,1,newInteger(62));//6
	insertDLL(a,4,newInteger(90));//7 ?
	insertDLL(a,6,newInteger(63));//8 ?
	insertDLL(a,0,newInteger(40));//9
	insertDLL(a,6,newInteger(72));//10 ?
	insertDLL(a,8,newInteger(11));//11	?
	insertDLL(a,9,newInteger(67));//12 ?
	insertDLL(a,5,newInteger(82));//13 
	insertDLL(a,13,newInteger(62));//14 
	insertDLL(a,10,newInteger(67));//15 ?
	insertDLL(a,10,newInteger(29));//16 ?
	insertDLL(a,0,newInteger(22));//17
	insertDLL(a,3,newInteger(69));//18
	insertDLL(a,15,newInteger(93));//19 ?
	insertDLL(a,2,newInteger(11));//20
	insertDLL(a,18,newInteger(29));//21 ?
	insertDLL(a,1,newInteger(21));//22
	insertDLL(a,1,newInteger(84));//23
	insertDLL(a,20,newInteger(98));//24 ?
	insertDLL(a,20,newInteger(15));//25 ?
	insertDLL(a,24,newInteger(13));//26 ?
	insertDLL(a,26,newInteger(91));//27
	insertDLL(a,9,newInteger(56));//28  //62 49 56 
	insertDLL(a,0,newInteger(62));//29
	insertDLL(a,1,newInteger(96));//30
	insertDLL(a,21,newInteger(5));//31 ?
	insertDLL(a,7,newInteger(84));//32
	insertDLL(a,20,newInteger(36));//33 ?
	insertDLL(a,5,newInteger(46));//34
	insertDLL(a,7,newInteger(13));//35
	insertDLL(a,27,newInteger(24));//36 ?
	insertDLL(a,19,newInteger(82));//37 ?
	insertDLL(a,13,newInteger(14));//38
	insertDLL(a,23,newInteger(34));//39 ?
	insertDLL(a,30,newInteger(43));//40 ?
	displayDLL(stdout,a);
	free(a);


	/*printf("\nTest 15: \n");
	a = newDLL(displayInteger);
	insertDLL(a,0,newInteger(86));
	insertDLL(a,1,newInteger(93));
	insertDLL(a,0,newInteger(92));
	insertDLL(a,3,newInteger(62));
	insertDLL(a,3,newInteger(59));
	insertDLL(a,0,newInteger(40));
	insertDLL(a,3,newInteger(36));
	insertDLL(a,5,newInteger(67));
	insertDLL(a,8,newInteger(30));
	insertDLL(a,5,newInteger(67));
	insertDLL(a,10,newInteger(2));
	removeDLL(a,7);
	removeDLL(a,3);
	insertDLL(a,2,newInteger(11));
	removeDLL(a,3);
	removeDLL(a,2);
	insertDLL(a,5,newInteger(37));
	insertDLL(a,0,newInteger(15));
	insertDLL(a,2,newInteger(26));
	insertDLL(a,9,newInteger(56));
	insertDLL(a,6,newInteger(70));
	insertDLL(a,13,newInteger(5));
	insertDLL(a,11,newInteger(27));
	insertDLL(a,1,newInteger(46));
	insertDLL(a,11,newInteger(57));
	removeDLL(a,14);
	removeDLL(a,14);
	removeDLL(a,14);
	insertDLL(a,5,newInteger(43));
	insertDLL(a,12,newInteger(8));
	displayDLL(stdout, a);
	printf("\n");
	free(a);

		
 *

	dll *a = newDLL(displayInteger);
     
	insertDLL(a,0,newInteger(86));
        
	insertDLL(a,1,newInteger(93));
	
	insertDLL(a,0,newInteger(92));
	
	insertDLL(a,3,newInteger(62));
	
	insertDLL(a,3,newInteger(59));
	
	insertDLL(a,0,newInteger(40));
	
	insertDLL(a,3,newInteger(36));
	
	insertDLL(a,5,newInteger(67));
	
	insertDLL(a,8,newInteger(30));
	
	insertDLL(a,5,newInteger(67));
	
	insertDLL(a,10,newInteger(2));
	
	removeDLL(a,7);
	
	removeDLL(a,3);
	
	insertDLL(a,2,newInteger(11));
	
	removeDLL(a,3);
	
	removeDLL(a,2);
	
	insertDLL(a,5,newInteger(37));
	
	insertDLL(a,0,newInteger(15));
	
	insertDLL(a,2,newInteger(26));
	
	insertDLL(a,9,newInteger(56));
	
	insertDLL(a,6,newInteger(70));
	
	insertDLL(a,13,newInteger(5));
	
	insertDLL(a,11,newInteger(27));
	
	insertDLL(a,1,newInteger(46));
	
	insertDLL(a,11,newInteger(57));
	
	removeDLL(a,14);
	
	removeDLL(a,14);
	
	removeDLL(a,14);
	
	insertDLL(a,5,newInteger(43));
	
	insertDLL(a,12,newInteger(8));
	
	displayDLL(stdout,a);
*/

/*	dll *a = newDLL(displayReal);
    
	insertDLL(a,0,newReal(86.700000));
       
	showItems(a);
	insertDLL(a,0,newReal(35.600000));
	showItems(a);
	removeDLL(a,1);
	showItems(a);
	
	insertDLL(a,1,newReal(27.000000));
	showItems(a);
	
	insertDLL(a,0,newReal(26.000000));
	showItems(a);
	
	insertDLL(a,0,newReal(36.100000));
	showItems(a);
	
	removeDLL(a,1);
	showItems(a);
	
	insertDLL(a,3,newReal(30.200000));
	showItems(a);
	
	insertDLL(a,2,newReal(35.900000));
	showItems(a);
	
	removeDLL(a,3);
	showItems(a);
	
	insertDLL(a,1,newReal(67.300000));
	showItems(a);
	
	insertDLL(a,3,newReal(42.900000));
	showItems(a);
	
	removeDLL(a,5);
	showItems(a);
	
	insertDLL(a,2,newReal(37.800000));
	showItems(a);
	
	insertDLL(a,5,newReal(70.300000));
	showItems(a);
	
	insertDLL(a,1,newReal(80.600000));
	showItems(a);
	
	insertDLL(a,4,newReal(70.600000));
	showItems(a);
	
	removeDLL(a,0);
	
	insertDLL(a,8,newReal(27.600000));
	
	insertDLL(a,7,newReal(29.300000));
	
	removeDLL(a,5);
	
	removeDLL(a,0);
	
	insertDLL(a,5,newReal(67.400000));
	
	removeDLL(a,5);
	
	insertDLL(a,8,newReal(8.600000));
	
	insertDLL(a,1,newReal(84.300000));
	
	insertDLL(a,8,newReal(99.200000));
	
	insertDLL(a,4,newReal(68.900000));
	
	insertDLL(a,1,newReal(86.400000));
	
	removeDLL(a,7);

	printf("does it get here?\n");

	displayDLL(stdout,a);
*/

	/*printf("\nTest 20: \n");
	a = newDLL(displayInteger);
	dll *b = newDLL(displayInteger);
	for(int i = 0; i < 100; i++)
	{
		insertDLL(a, 0, newInteger(i));
		insertDLL(b, 0, newInteger(i));
	}
	for(int i = 0; i < 10000; i++)
	{
		unionDLL(a, b);
		unionDLL(b, a);
	}
	displayDLL(stdout, a);
	displayDLL(stdout, b);
	free(a);
	free(b);

	printf("\nTest 21: \n");
	a = newDLL(displayReal);

	insertDLL(a,0,newReal(86.700000));
	displayDLL(stdout, a);
	printf("\n");
	insertDLL(a,0,newReal(35.600000));
	
	displayDLL(stdout, a);
	printf("\n");
	removeDLL(a,1);

	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,1,newReal(27.000000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,0,newReal(26.000000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,0,newReal(36.100000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,1);
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,3,newReal(30.200000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,2,newReal(35.900000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,3);
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,1,newReal(67.300000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,3,newReal(42.900000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,5);
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,2,newReal(37.800000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,5,newReal(70.300000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,1,newReal(80.600000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,4,newReal(70.600000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,0);
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,8,newReal(27.600000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,7,newReal(29.300000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,5);
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,0);
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,5,newReal(67.400000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,5);
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,8,newReal(8.600000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,1,newReal(84.300000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,8,newReal(99.200000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,4,newReal(68.900000));
	displayDLL(stdout, a);
	printf("\n");
	
	insertDLL(a,1,newReal(86.400000));
	displayDLL(stdout, a);
	printf("\n");
	
	removeDLL(a,7);
	displayDLL(stdout, a);
	printf("\n");
	
	displayDLL(stdout,a);
	free(a);

*/

	/*printf("\nTest 22: \n");
	a = newDLL(displayInteger);
	insertDLL(a, 0, newInteger(83));
	insertDLL(a, 0, newInteger(86));
	insertDLL(a, 0, newInteger(77));
	insertDLL(a, 0, newInteger(15));
	insertDLL(a, 0, newInteger(93));
	insertDLL(a, 0, newInteger(35));
	insertDLL(a, 0, newInteger(86));
	for(int i = 0; i < 9993; i++)
	{
		insertDLL(a, 0, newInteger(i));
	}
	for(int i = 0; i < 10000; i++)
	{
		insertDLL(a, sizeDLL(a), newInteger(i));
	}
	for(int i = 0; i < 19980; i++)
	{
		removeDLL(a, 0);
	}
	removeDLL(a, 0);

	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	removeDLL(a, 0);
	displayDLL(stdout, a);
	free(a);

	printf("\nNew Test 15: \n");
	a = newDLL(displayInteger);
	insertDLL(a, 0, newInteger(99));
	insertDLL(a, 1, newInteger(63));
	removeDLL(a, 1);
	insertDLL(a, 1, newInteger(19));
	removeDLL(a, 0);
	removeDLL(a, 0);
	displayDLL(stdout, a);
	free(a);

	printf("\nNew Test 21: \n");
	a = newDLL(displayReal);
	insertDLL(a,0,newReal(86.100000));
	insertDLL(a,1,newReal(53.200000));
	insertDLL(a,0,newReal(67.500000));
	removeDLL(a,0);
	insertDLL(a,0,newReal(24.500000));
	insertDLL(a,2,newReal(69.900000));
	removeDLL(a,3);
	insertDLL(a,3,newReal(41.900000));
	insertDLL(a,0,newReal(73.300000));
	insertDLL(a,4,newReal(94.300000));
	insertDLL(a,0,newReal(57.200000));
	insertDLL(a,0,newReal(99.100000));
	insertDLL(a,5,newReal(81.600000));
	insertDLL(a,5,newReal(90.500000));
	insertDLL(a,2,newReal(95.000000));
	removeDLL(a,8);
	insertDLL(a,0,newReal(73.700000));
	removeDLL(a,7);
	removeDLL(a,4);
	insertDLL(a,7,newReal(29.300000));
	insertDLL(a,10,newReal(90.800000));
	removeDLL(a,1);
	removeDLL(a,9);
	displayDLL(stdout, a);
	free(a);
*/
	/*printf("\nAssignment 1, Test 4: \n");
	a = newDLL(displayInteger);
	b = newDLL(displayInteger);
	for(int i = 0; i < 100; i++)
	{
		insertDLL(a, i, newInteger(i));
		insertDLL(b, i, newInteger(i));
	}
	for(int i = 0; i < 30000; i++)
	{
		unionDLL(a, b);
//		unionDLL(b, a);
	}
	displayDLL(stdout, a);
	displayDLL(stdout, b);
	free(a);
	free(b);

	printf("\nAssignment 1, Test 5: \n");
	a = newDLL(displayInteger);
	for(int i = 0; i < 10000; i++)
	{
		insertDLL(a, 0, newInteger(i));
	}
	for(int i = 0; i < 10000; i++)
	{
		insertDLL(a, sizeDLL(a), newInteger(i));
	}
	for(int i = 0; i < 10000; i++)
	{
		insertDLL(a, sizeDLL(a)/2, newInteger(i));
	}
	for(int i = 0; i < 9995; i++)
	{
		removeDLL(a, sizeDLL(a)-2);
	}
	for(int i = 0; i < 9995; i++)
	{
		removeDLL(a, (sizeDLL(a)/2));
	}
	for(int i = 0; i < 9995; i++)
	{
		removeDLL(a, 1);
	}
	displayDLL(stdout, a);*/
	return 0;
}
