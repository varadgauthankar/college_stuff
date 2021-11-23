package shapes;

public class Rectangle implements Shape{
	
	int d1;
	int d2;
	
	Rectangle(int val1, int val2){
		this.d1 = val1;
		this.d2 = val2;
	}
	
	@Override
	public void area() {
		System.out.print("Area of rectangle: " + this.d1 * this.d2);
	}
	
}
