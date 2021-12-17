package stack;

public class Startup {

	public static void main(String[] args) {
		
		Integer[] arr = new Integer[10];
		Stack<Integer> stack = new Stack<Integer>(arr);
		
		stack.push(1);
		stack.push(2);
		
		stack.length();
		
		stack.display();
		
		stack.pop();
		stack.display();
		stack.length();
		
	}

}
