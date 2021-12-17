package arihmatic_operations;

public class Startup {

	public static void main(String[] args) {
		
		int addition = Calculator.addition(10, 10);
		int substration = Calculator.substration(10, 10);
		int multiply = Calculator.multiply(10, 10);
		int division = Calculator.divide(10, 10);
		
		display(addition, substration, multiply, division);
		
	}

	private static void display(int addition, int substration, int multiply, int division) {
		int addition2 = addition;
		System.out.println(addition2);
		System.out.println(substration);
		System.out.println(multiply);
		System.out.println(division);
	}

}
