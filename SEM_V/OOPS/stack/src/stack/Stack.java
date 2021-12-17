package stack;

public class Stack<T> {
		private T[] items;
 		private int top;
 		
 		Stack(T[] arr){
 			items = arr;
 			top  = -1;
 		}
 			
		public void push(T x) {
			items[++top] = x;
			System.out.println("PUSHED: " + x );
		}
		
		public T pop() {
			if(!isEmpty()) {
				T popped = items[top--];

				System.out.println("POPPED: " + popped );
				return popped;
			}
			else 
				System.out.println("EMPTY STACK");
				return null;
		}
		
		public void display() {
			for (int i = 0; i<= top; i++) {
				System.out.println(items[i]);
			}
		}
		
		public int length() {
			System.out.printf("- LENGTH: %d\n" , top+1);
			return top +1;
		}
		
		public boolean isEmpty() {
			if(top == -1)
				return true;
			else 
				return false;
		}

}
