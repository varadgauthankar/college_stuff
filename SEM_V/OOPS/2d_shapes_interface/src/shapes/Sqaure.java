package shapes;

public class Sqaure implements Shape{
	
	int d1;
	
	Sqaure(int val1){
		d1 = val1;
	}
	
	@Override
	public void area() {
		System.out.print("Area of Square: " + this.d1 * this.d1);
	}
	
}
