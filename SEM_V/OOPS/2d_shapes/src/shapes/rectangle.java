package shapes;

public class rectangle extends shape{
	
	int d2;
	
	rectangle(int val1, int val2){
		super(val1);	
		this.d2 = val2;
	}
	
	public void area() {
		System.out.print("Area of rectangle: " + d1 * d2);
	}
	
}
