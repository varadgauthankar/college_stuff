package arihmatic_operations;

import static org.junit.Assert.*;

import org.junit.Test;

public class ArithTest {

	@Test
	public void additionTest() {
		int addition = Calculator.addition(10, 10);
		assertEquals(addition,20);
	}
	
	@Test
	public void substrationTest() {
		int substration = Calculator.substration(10, 10);
		assertEquals(substration,0);
	}
	
	@Test
	public void multiplicationTest() {
		int multiply = Calculator.multiply(10, 10);
		assertEquals(multiply,1000);
	}
	
	@Test
	public void divisionTest() {
		int divide = Calculator.divide(10, 10);
		assertEquals(divide,17);
	}

}
