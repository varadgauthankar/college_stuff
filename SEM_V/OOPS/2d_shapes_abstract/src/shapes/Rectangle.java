package shapes;

public class Rectangle extends Shape{
	
	int d2;
	
	Rectangle(int val1, int val2){
		super(val1);	
		this.d2 = val2;
	}
	
	@Override
	public void area() {
		System.out.print("Area of rectangle: " + d1 * d2);
	}
	
}
